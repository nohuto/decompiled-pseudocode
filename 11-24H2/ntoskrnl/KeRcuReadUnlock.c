/*
 * XREFs of KeRcuReadUnlock @ 0x1402CE230
 * Callers:
 *     CcFlushCachePreProcess @ 0x1402AC290 (CcFlushCachePreProcess.c)
 *     CcGetFlushedValidData @ 0x1402CC6C0 (CcGetFlushedValidData.c)
 *     CcZeroData @ 0x1402CC9B0 (CcZeroData.c)
 *     CcScanLogHandleList @ 0x1402CCCB4 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x1402CDF18 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x1402CE010 (CcForceWriteThrough.c)
 *     CcPerfLogLoggedStreamsStats @ 0x1404A88EC (CcPerfLogLoggedStreamsStats.c)
 *     CcPostVolumeTelemetry @ 0x1404C405C (CcPostVolumeTelemetry.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404DB318 (CcUpdateTimeOnLogHandles.c)
 *     CcCanIWrite @ 0x1404DBAA0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404DC340 (CcCopyWriteWontFlush.c)
 *     CcIsFileObjectDirectMapped @ 0x1404DC40C (CcIsFileObjectDirectMapped.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x140206480 (KiRcuCheckQuiescent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KeRcuReadUnlock(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // esi
  unsigned __int64 DispatchPin; // rdi
  __int64 v6; // rdx
  char v7; // r8
  unsigned int NestingLevel; // eax
  unsigned int v9; // eax
  struct _KPRCB *v10; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // ett
  signed __int32 v14[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  DispatchPin = CurrentPrcb->RcuData.DispatchPin;
  v7 = KeDisableInterrupts(a1, a2, a3);
  NestingLevel = CurrentPrcb->RcuData.NestingLevel;
  if ( !NestingLevel )
    __fastfail(0xEu);
  v9 = NestingLevel - 1;
  CurrentPrcb->RcuData.NestingLevel = v9;
  if ( !v9 )
  {
    if ( CurrentPrcb->RcuData.IdleState < 0 )
    {
      _InterlockedAnd8(&CurrentPrcb->RcuData.IdleState, 0x7Fu);
      if ( CurrentPrcb->RcuData.GracePeriodNeeded )
      {
        CurrentPrcb->RcuData.GracePeriodNeeded = 0;
        _InterlockedOr(v14, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F20C48;
      }
    }
    v4 = 1;
  }
  if ( v7 )
  {
    v10 = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v6 = v12;
        LODWORD(v6) = v12 & 0xFFDFFFFF;
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
    _enable();
  }
  if ( v4 )
  {
    if ( CurrentPrcb->RcuData.ExpediteReporting )
      KiRcuCheckQuiescent((__int64)KeGetCurrentPrcb());
    if ( (unsigned __int8)DispatchPin < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = DispatchPin;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      }
      __writecr8(DispatchPin);
    }
  }
}
