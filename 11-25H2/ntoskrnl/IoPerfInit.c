/*
 * XREFs of IoPerfInit @ 0x1404D2B58
 * Callers:
 *     IoRegisterIoTracking @ 0x14070A130 (IoRegisterIoTracking.c)
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x140592FBC (IopUpdateFunctionPointers.c)
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
    ++dword_140E65D64;
  if ( (a1 & 2) != 0 )
    ++dword_140E65D68;
  if ( v2 )
  {
    LOBYTE(v2) = 1;
    IopUpdateFunctionPointers(2LL, 1LL, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
