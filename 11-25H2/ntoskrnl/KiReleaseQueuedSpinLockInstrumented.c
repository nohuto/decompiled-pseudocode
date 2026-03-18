/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1402FF4DC
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x14027D4F0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1402937F0 (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
 *     MiWalkPageTablesRecursively @ 0x1402B2770 (MiWalkPageTablesRecursively.c)
 *     MiCaptureDeleteHierarchy @ 0x1402B5FE0 (MiCaptureDeleteHierarchy.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiReleaseFaultState @ 0x1402B9970 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x1402B9F30 (MiUnlockFaultPageTable.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402FDE30 (IopVerifyDeviceObjectOnStack.c)
 *     IoReleaseCancelSpinLock @ 0x1402FE5A0 (IoReleaseCancelSpinLock.c)
 *     IopDecrementVpbRefCount @ 0x1402FE6C0 (IopDecrementVpbRefCount.c)
 *     IopCheckVpbMounted @ 0x1402FE890 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1402FED30 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x1402FF290 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     PfpPartitionGetFirst @ 0x140302770 (PfpPartitionGetFirst.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041D000 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetAttachedDeviceReference @ 0x14041DD00 (IoGetAttachedDeviceReference.c)
 * Callees:
 *     KeWakeAddressAll @ 0x14028A700 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x14028A940 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x1404C44C8 (PerfLogSpinLockRelease.c)
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
    v5 = KxWaitForLockChainValid((__int64 *)a1);
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
