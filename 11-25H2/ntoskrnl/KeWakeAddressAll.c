/*
 * XREFs of KeWakeAddressAll @ 0x14028A700
 * Callers:
 *     KiReleaseThreadStateLock @ 0x140201E60 (KiReleaseThreadStateLock.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x140270C08 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiAcquireThreadStateLockForWrite @ 0x140271D50 (KiAcquireThreadStateLockForWrite.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F5510 (KiAddThreadToPrcbQueue.c)
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC (KiReleaseQueuedSpinLockInstrumented.c)
 *     PfpPartitionGetFirst @ 0x140302770 (PfpPartitionGetFirst.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x140314410 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiSearchForNewThread @ 0x14031E240 (KiSearchForNewThread.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     KiQueueReadyThread @ 0x14032F910 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x140330CFC (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1403CF880 (KiLeaveCooperativeIdleSearch.c)
 *     KiJoinCooperativeIdleSearch @ 0x1403CFEF0 (KiJoinCooperativeIdleSearch.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403D04C0 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403DD240 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403DE8C0 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E5570 (KeQueryTotalCycleTimeThread.c)
 *     KiAddThreadToReadyQueue @ 0x1403EFA70 (KiAddThreadToReadyQueue.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x14040AF50 (KiSwapDirectoryTableBaseTarget.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041D000 (IopIncrementDeviceObjectRefCount.c)
 *     KeSignalCallDpcSynchronize @ 0x140439280 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14043C240 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x14044E510 (MiDemoteSlabEntriesDpc.c)
 *     KiScanSharedReadyThreads @ 0x140466DC8 (KiScanSharedReadyThreads.c)
 *     KiSetSystemTimeDpc @ 0x14047ACB0 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x140480160 (MiJumpStackTarget.c)
 *     KeTryToFreezeThreadStack @ 0x1404AA4CC (KeTryToFreezeThreadStack.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4D30 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8D10 (MiWritePteHighLevelIsr.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E00 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BA330 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 *     ExpLimitInsertDpc @ 0x140648D50 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x14064F220 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140661300 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x14066ABE0 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x140670E10 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x1406730E0 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x14067ADB0 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x1406830D0 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x1406861F0 (MiDpcGangTarget.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     HalRequestIpi @ 0x140205130 (HalRequestIpi.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeWakeAddressAll(unsigned __int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdi
  char v6; // bl
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v11; // ett
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  signed __int32 v15[8]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v16; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v17[264]; // [rsp+28h] [rbp-120h] BYREF

  _InterlockedOr(v15, 0);
  v2 = KeDisableInterrupts(a1, a2, (a1 >> 5) & 0x7F);
  v5 = _InterlockedExchange64((volatile __int64 *)(v4 + 8 * v3), 0LL);
  v6 = v2;
  result = (__int64)memset_0(v17, 0, 0x100uLL);
  v8 = v5 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v8 )
  {
    v16 = 2097153LL;
    memset_0(v17, 0, 0x100uLL);
    do
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(v8 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v8 + 24), 1) )
        KeAddGroupAffinityEx((unsigned __int16 *)&v16, *(unsigned __int8 *)(v13 + 208), *(_QWORD *)(v13 + 200));
      v8 = v14;
    }
    while ( v14 );
    if ( (KiHaltOnAddressFlags & 4) != 0 )
      result = HvlWakeVirtualProcessors(&v16, v12, v13);
    else
      result = HalRequestIpi(0, (unsigned __int16 *)&v16);
  }
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      LODWORD(result) = *SchedulerAssist;
      do
      {
        v11 = result;
        result = (unsigned int)_InterlockedCompareExchange(SchedulerAssist, result & 0xFFDFFFFF, result);
      }
      while ( v11 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
