/*
 * XREFs of KeRcuReadUnlock @ 0x14040C230
 * Callers:
 *     CcFlushCachePreProcess @ 0x140278C74 (CcFlushCachePreProcess.c)
 *     CcPerfLogLoggedStreamsStats @ 0x14040B154 (CcPerfLogLoggedStreamsStats.c)
 *     CcGetFlushedValidData @ 0x14040B790 (CcGetFlushedValidData.c)
 *     CcZeroData @ 0x14040BA30 (CcZeroData.c)
 *     CcScanLogHandleList @ 0x14040BD34 (CcScanLogHandleList.c)
 *     CcInitializeVolumeCacheMap @ 0x14040BF18 (CcInitializeVolumeCacheMap.c)
 *     CcForceWriteThrough @ 0x14040C010 (CcForceWriteThrough.c)
 *     CcPostVolumeTelemetry @ 0x14040C990 (CcPostVolumeTelemetry.c)
 *     CcUpdateTimeOnLogHandles @ 0x1404D4D38 (CcUpdateTimeOnLogHandles.c)
 *     CcCanIWrite @ 0x1404D54C0 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x1404D5D60 (CcCopyWriteWontFlush.c)
 *     CcIsFileObjectDirectMapped @ 0x1404D5E2C (CcIsFileObjectDirectMapped.c)
 *     CcDeferWrite @ 0x1405785D0 (CcDeferWrite.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRcuCheckQuiescent @ 0x14032DA60 (KiRcuCheckQuiescent.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void KeRcuReadUnlock()
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v1; // esi
  unsigned __int64 DispatchPin; // rdi
  __int64 v3; // rdx
  bool v4; // r8
  unsigned int NestingLevel; // eax
  unsigned int v6; // eax
  struct _KPRCB *v7; // rcx
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ett
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0;
  DispatchPin = CurrentPrcb->RcuData.DispatchPin;
  v4 = KeDisableInterrupts();
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
        _InterlockedOr(v11, 0);
        CurrentPrcb->RcuData.GraceSequenceQuiescent = qword_140F205C8;
      }
    }
    v1 = 1;
  }
  if ( v4 )
  {
    v7 = KeGetCurrentPrcb();
    SchedulerAssist = (unsigned __int32 *)v7->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v3 = v9;
        LODWORD(v3) = v9 & 0xFFDFFFFF;
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v7);
    }
    _enable();
  }
  if ( v1 )
  {
    if ( CurrentPrcb->RcuData.ExpediteReporting )
      KiRcuCheckQuiescent((__int64)KeGetCurrentPrcb());
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
