/*
 * XREFs of KiHaltOnAddressWakeEntireList @ 0x1404F668C
 * Callers:
 *     IopfCompleteRequest @ 0x140251740 (IopfCompleteRequest.c)
 *     ExpReleaseFastResourceShared @ 0x14027CE20 (ExpReleaseFastResourceShared.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseFastResource @ 0x140298850 (ExReleaseFastResource.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KiAbEntryRemoveFromTree @ 0x14029D4A0 (KiAbEntryRemoveFromTree.c)
 *     MiDeleteVaDirect @ 0x1402B05C0 (MiDeleteVaDirect.c)
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
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x140419F10 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IoGetAttachedDeviceReference @ 0x14041DD00 (IoGetAttachedDeviceReference.c)
 *     KiWakeAddressAll @ 0x140456110 (KiWakeAddressAll.c)
 * Callees:
 *     HalRequestIpi @ 0x140205130 (HalRequestIpi.c)
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     HvlWakeVirtualProcessors @ 0x140586170 (HvlWakeVirtualProcessors.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void *__fastcall KiHaltOnAddressWakeEntireList(__int64 a1, __int64 a2)
{
  void *result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdi
  _DWORD v8[2]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v9[264]; // [rsp+28h] [rbp-120h] BYREF

  result = memset_0(v9, 0, 0x100uLL);
  v4 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v4 )
  {
    v8[1] = 0;
    v8[0] = 2097153;
    memset_0(v9, 0, 0x100uLL);
    do
    {
      v6 = *(_QWORD *)(v4 + 8);
      v7 = *(_QWORD *)(v4 + 16);
      if ( !_InterlockedExchange((volatile __int32 *)(v4 + 24), 1) )
        KeAddGroupAffinityEx((unsigned __int16 *)v8, *(unsigned __int8 *)(v6 + 208), *(_QWORD *)(v6 + 200));
      v4 = v7;
    }
    while ( v7 );
    if ( (KiHaltOnAddressFlags & 4) != 0 )
      return (void *)HvlWakeVirtualProcessors(v8, v5, v6);
    else
      return (void *)HalRequestIpi(0, (unsigned __int16 *)v8);
  }
  return result;
}
