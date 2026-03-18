/*
 * XREFs of KeRcuReadUnlock @ 0x1403A5890
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402D9F6C (CcFlushCachePreProcess.c)
 *     CcScanLogHandleList @ 0x1403A4C00 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x1403A5574 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x1403A5660 (CcForceWriteThrough.c)
 *     CcGetFlushedValidData @ 0x1403A68F0 (CcGetFlushedValidData.c)
 *     CcZeroData @ 0x1403A6B60 (CcZeroData.c)
 *     CcPostVolumeTelemetry @ 0x140421068 (CcPostVolumeTelemetry.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404A7D80 (CcPerfLogLoggedStreamsStats.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DBC28 (CcUpdateTimeOnLogHandles.c)
 *     CcCanIWrite @ 0x1404DC3B0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404DCC50 (CcCopyWriteWontFlush.c)
 *     CcIsFileObjectDirectMapped @ 0x1404DCD1C (CcIsFileObjectDirectMapped.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x14027DA00 (KiRcuCheckQuiescent.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void KeRcuReadUnlock()
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v1; // esi
  unsigned __int64 DispatchPin; // rdi
  __int64 v3; // rdx
  _DWORD *SchedulerAssist; // r8
  unsigned int NestingLevel; // eax
  unsigned int v6; // eax
  struct _KPRCB *v7; // rcx
  unsigned __int32 v8; // eax
  unsigned __int32 v9; // ett
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DispatchPin = CurrentPrcb->RcuData.DispatchPin;
  LOBYTE(SchedulerAssist) = KeDisableInterrupts();
  NestingLevel = CurrentPrcb->RcuData.NestingLevel;
  if ( !NestingLevel )
    __fastfail(0xEu);
  v6 = NestingLevel - 1;
  CurrentPrcb->RcuData.NestingLevel = v6;
  if ( !v6 )
  {
    if ( CurrentPrcb->RcuData.IdleState < 0 )
    {
      _InterlockedAnd8(&CurrentPrcb->RcuData.IdleState, 0x7Fu);
      if ( CurrentPrcb->RcuData.GracePeriodNeeded )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v10, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F204A8;
      }
    }
    v1 = 1;
  }
  if ( (_BYTE)SchedulerAssist )
  {
    v7 = KeGetCurrentPrcb();
    SchedulerAssist = v7->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v8 = *SchedulerAssist;
      do
      {
        v3 = v8;
        LODWORD(v3) = v8 & 0xFFDFFFFF;
        v9 = v8;
        v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v7);
    }
    _enable();
  }
  if ( v1 )
  {
    if ( CurrentPrcb->RcuData.ExpediteReporting )
      KiRcuCheckQuiescent(KeGetCurrentPrcb(), v3, (unsigned __int64)SchedulerAssist);
    if ( (unsigned __int8)DispatchPin < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v3) = DispatchPin;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
      }
      __writecr8(DispatchPin);
    }
  }
}
