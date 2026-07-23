/*
 * XREFs of IoPerfInit @ 0x1404CBBE8
 * Callers:
 *     IoRegisterIoTracking @ 0x140713DC0 (IoRegisterIoTracking.c)
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x14059364C (IopUpdateFunctionPointers.c)
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
    ++dword_140E6615C;
  if ( (a1 & 2) != 0 )
    ++dword_140E66160;
  if ( v2 )
  {
    LOBYTE(v2) = 1;
    IopUpdateFunctionPointers(2LL, 1LL, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
