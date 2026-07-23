/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1402CA820
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
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14028C460 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     KiAbEntryRemoveFromTree @ 0x14028D4F0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14028DDD0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402C4020 (IopCompleteIrpInFileObjectList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402C9EF0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     MiUnlockPageTable @ 0x1402CB940 (MiUnlockPageTable.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1403209F0 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     IopDecrementVpbRefCount @ 0x140355B70 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x140355E70 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403BD020 (ExpAcquireFastResourceExclusiveSlow.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140409280 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14040A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x140411960 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x1404150F0 (IoReleaseCancelSpinLock.c)
 * Callees:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1404BCBF4 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // rcx
  volatile signed __int64 **v6; // rbx
  volatile __int64 *v7; // rcx
  volatile signed __int64 *v8; // rax
  __int64 v9; // rdx

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  v6 = a1 + 1;
  if ( !v5 )
  {
    if ( a1 == (volatile signed __int64 **)_InterlockedCompareExchange64(*v6, 0LL, (signed __int64)a1) )
      return PerfLogSpinLockRelease(*v6, a2, v4);
    v5 = KxWaitForLockChainValid(a1);
  }
  *a1 = 0LL;
  v7 = (volatile __int64 *)(v5 + 8);
  v8 = *v6;
  v9 = _InterlockedExchange64(v7, (__int64)*v6);
  LOBYTE(v9) = (unsigned __int8)v8 ^ v9;
  if ( (v9 & 4) != 0 )
    KeWakeAddressAll((unsigned __int64)v7, v9);
  return PerfLogSpinLockRelease(*v6, a2, v4);
}
