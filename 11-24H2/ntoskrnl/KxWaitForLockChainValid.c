/*
 * XREFs of KxWaitForLockChainValid @ 0x1402CA8D0
 * Callers:
 *     MiReacquireHigherPageTableLock @ 0x14020B170 (MiReacquireHigherPageTableLock.c)
 *     PfpPartitionIterate @ 0x14022A280 (PfpPartitionIterate.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     PfpPartitionGetFirst @ 0x14022B450 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x14023DD10 (MiWalkPageTablesRecursively.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiCaptureDeleteHierarchy @ 0x140243D80 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x140246140 (MiReacquireWalkLocks.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     KiQueueReadyThread @ 0x1402A4C20 (KiQueueReadyThread.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x1402A5F4C (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402C9EF0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     MiUnlockPageTable @ 0x1402CB940 (MiUnlockPageTable.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     KiAddThreadToPrcbQueue @ 0x1402D7CF0 (KiAddThreadToPrcbQueue.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     IopDecrementVpbRefCount @ 0x140355B70 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x140355E70 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403A0670 (KiAcquireThreadStateLockForWrite.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1403A09F0 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     KiSearchForNewThreadsOnTarget @ 0x1403BD660 (KiSearchForNewThreadsOnTarget.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 *     KeQueryValuesThread @ 0x1403CAE20 (KeQueryValuesThread.c)
 *     KiParkCurrentProcessor @ 0x1403D7544 (KiParkCurrentProcessor.c)
 *     KeQueryTotalCycleTimeThread @ 0x1403E03C0 (KeQueryTotalCycleTimeThread.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     KiAddThreadToReadyQueue @ 0x1403E7AA0 (KiAddThreadToReadyQueue.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14040A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1404150F0 (IoReleaseCancelSpinLock.c)
 *     KiScanSharedReadyThreads @ 0x14045BDC8 (KiScanSharedReadyThreads.c)
 *     KeTryToFreezeThreadStack @ 0x1404A5F7C (KeTryToFreezeThreadStack.c)
 *     KeQueryEffectivePriorityThread @ 0x1404DD960 (KeQueryEffectivePriorityThread.c)
 *     KiJoinCooperativeIdleSearch @ 0x1404E06E0 (KiJoinCooperativeIdleSearch.c)
 *     KiLeaveCooperativeIdleSearch @ 0x1404E0960 (KiLeaveCooperativeIdleSearch.c)
 *     KiDisarmForceParkDutyCyclingIfNecessary @ 0x1404F6E34 (KiDisarmForceParkDutyCyclingIfNecessary.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     KeAbCrossThreadDelete @ 0x1405C11AC (KeAbCrossThreadDelete.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
