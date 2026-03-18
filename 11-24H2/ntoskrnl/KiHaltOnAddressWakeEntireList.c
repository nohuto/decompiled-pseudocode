/*
 * XREFs of KiHaltOnAddressWakeEntireList @ 0x140321D94
 * Callers:
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140257E60 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExpReleaseFastResourceShared @ 0x14025C680 (ExpReleaseFastResourceShared.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IopDecrementVpbRefCount @ 0x1402D48F0 (IopDecrementVpbRefCount.c)
 *     IopCheckDeviceAndDriver @ 0x1402D4BF0 (IopCheckDeviceAndDriver.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402D6BE0 (ExpReleaseResourceForThreadLite.c)
 *     MiDeleteVaDirect @ 0x1402DA300 (MiDeleteVaDirect.c)
 *     MiReleaseFaultState @ 0x1402E0010 (MiReleaseFaultState.c)
 *     MiUnlockFaultPageTable @ 0x1402E05F0 (MiUnlockFaultPageTable.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140321360 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     MiUnlockPageTable @ 0x140322DB0 (MiUnlockPageTable.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     KiWakeAddressAll @ 0x14045512C (KiWakeAddressAll.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     HalRequestIpi @ 0x1403B67D0 (HalRequestIpi.c)
 *     HvlWakeVirtualProcessors @ 0x1405897E0 (HvlWakeVirtualProcessors.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
