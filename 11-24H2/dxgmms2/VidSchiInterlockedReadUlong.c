/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x14003DFF0
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x140100150 (VidSchFlushContext.c)
 *     VidSchFlushHwQueue @ 0x140102CB0 (VidSchFlushHwQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
