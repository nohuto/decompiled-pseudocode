/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x140321C90
 * Callers:
 *     MiCaptureDeleteHierarchy @ 0x140216EC0 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiReacquireWalkLocks @ 0x1402193F0 (MiReacquireWalkLocks.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x14025BE50 (ExReleaseFastResource.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     KiAbEntryRemoveFromTree @ 0x14025CEE0 (KiAbEntryRemoveFromTree.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14025D7C0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PfpPartitionIterate @ 0x140274CF0 (PfpPartitionIterate.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     PfpPartitionGetFirst @ 0x140275EC0 (PfpPartitionGetFirst.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IopDecrementVpbRefCount @ 0x1402D48F0 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x1402D4BF0 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402DC430 (MiWalkPageTablesRecursively.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiReacquireHigherPageTableLock @ 0x1402E2E70 (MiReacquireHigherPageTableLock.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140321360 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     MiUnlockPageTable @ 0x140322DB0 (MiUnlockPageTable.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140341510 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1403BC9C0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1403DD330 (ExpAcquireFastResourceExclusiveSlow.c)
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopVerifyDeviceObjectOnStack @ 0x14041A8E0 (IopVerifyDeviceObjectOnStack.c)
 *     IoGetAttachedDeviceReference @ 0x14041D070 (IoGetAttachedDeviceReference.c)
 *     IoReleaseCancelSpinLock @ 0x14041F970 (IoReleaseCancelSpinLock.c)
 * Callees:
 *     KeWakeAddressAll @ 0x140321AA0 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x140321D40 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1404C1604 (PerfLogSpinLockRelease.c)
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
