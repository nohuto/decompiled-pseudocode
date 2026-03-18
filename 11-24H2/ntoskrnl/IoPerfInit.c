/*
 * XREFs of IoPerfInit @ 0x1404D2A28
 * Callers:
 *     IoRegisterIoTracking @ 0x140716230 (IoRegisterIoTracking.c)
 *     EtwpEnableKernelTrace @ 0x1408E95BC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x14059661C (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  _BOOL8 v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_140E66034;
  if ( (a1 & 2) != 0 )
    ++dword_140E66038;
  if ( v2 )
  {
    LOBYTE(v2) = 1;
    IopUpdateFunctionPointers(2LL, 1LL, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
