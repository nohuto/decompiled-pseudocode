/*
 * XREFs of ExDisableResourceBoostLite @ 0x1402D6770
 * Callers:
 *     CcAllocateInitializeBcb @ 0x1402D67D4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
