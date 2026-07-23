/*
 * XREFs of KiHaltOnAddressWakeEntireList @ 0x1402CA924
 * Callers:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     MiDeleteVaDirect @ 0x14023BBE0 (MiDeleteVaDirect.c)
 *     MiReleaseFaultState @ 0x1402418F0 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x140241ED0 (MiUnlockFaultPageTable.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140288470 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExpReleaseFastResourceShared @ 0x14028CC90 (ExpReleaseFastResourceShared.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402C9EF0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     MiUnlockPageTable @ 0x1402CB940 (MiUnlockPageTable.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     IopDecrementVpbRefCount @ 0x140355B70 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x140355E70 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x140357E60 (ExpReleaseResourceForThreadLite.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     KiWakeAddressAll @ 0x140449DEC (KiWakeAddressAll.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     HalRequestIpi @ 0x140371AA0 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x140586AD0 (HvlWakeVirtualProcessors.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
      return (void *)HalRequestIpi(0LL, v8);
  }
  return result;
}
