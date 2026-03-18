/*
 * XREFs of ExDisableResourceBoostLite @ 0x140365480
 * Callers:
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcAllocateInitializeBcb @ 0x1403651D8 (CcAllocateInitializeBcb.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  bool v1; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = (Resource->ReservedLowFlags & 1) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v1 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  Resource->Flag |= 8u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
