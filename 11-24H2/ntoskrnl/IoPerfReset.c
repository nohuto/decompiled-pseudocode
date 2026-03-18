/*
 * XREFs of IoPerfReset @ 0x1405975FC
 * Callers:
 *     IoUnregisterIoTracking @ 0x140716380 (IoUnregisterIoTracking.c)
 *     EtwpDisableKernelTrace @ 0x1408E9BB0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x14059661C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfReset(char a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  if ( (a1 & 1) != 0 && !--dword_140E66034 )
    IopPerfStatus &= ~1u;
  if ( (a1 & 2) != 0 && !--dword_140E66038 )
    IopPerfStatus &= ~2u;
  if ( !IopPerfStatus )
    IopUpdateFunctionPointers(2, 0, 1);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
