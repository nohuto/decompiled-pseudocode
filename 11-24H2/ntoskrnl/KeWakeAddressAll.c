/*
 * XREFs of KeWakeAddressAll @ 0x140321AA0
 * Callers:
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     PfpPartitionGetFirst @ 0x140275EC0 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     KiQueueReadyThread @ 0x140295020 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14029726C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402986C0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     KiAddThreadToPrcbQueue @ 0x1403102F0 (KiAddThreadToPrcbQueue.c)
 *     KiSwapDirectoryTableBaseTarget @ 0x140311500 (KiSwapDirectoryTableBaseTarget.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140321C90 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403B1E60 (KiAcquireThreadStateLockForWrite.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403B21E0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiReleaseThreadStateLock @ 0x1403B27B0 (KiReleaseThreadStateLock.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403DD970 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403E1850 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403E27B0 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403E9898 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403EBDD0 (KeQueryTotalCycleTimeThread.c)
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     KiAddThreadToReadyQueue @ 0x1403F4AB0 (KiAddThreadToReadyQueue.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14041A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x14041D070 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x14041F970 (IoReleaseCancelSpinLock.c)
 *     KeSignalCallDpcSynchronize @ 0x140435830 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14043AE10 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x140442780 (MiDemoteSlabEntriesDpc.c)
 *     KiScanSharedReadyThreads @ 0x1404657E0 (KiScanSharedReadyThreads.c)
 *     KiSetSystemTimeDpc @ 0x14047BEC0 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     KeTryToFreezeThreadStack @ 0x1404AB95C (KeTryToFreezeThreadStack.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4650 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8330 (MiWritePteHighLevelIsr.c)
 *     KiJoinCooperativeIdleSearch @ 0x1404E9730 (KiJoinCooperativeIdleSearch.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1404E99B0 (KiLeaveCooperativeIdleSearch.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F9554 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BE170 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 *     ExpLimitInsertDpc @ 0x140654C50 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x14065B1B0 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14066CE40 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x140676640 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x14067C5D0 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140686640 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068E960 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x140691650 (MiDpcGangTarget.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     HalRequestIpi @ 0x1403B67D0 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1405897E0 (HvlWakeVirtualProcessors.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  _DWORD *SchedulerAssist; // r8
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
      result = HalRequestIpi(0LL, &v16);
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
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
