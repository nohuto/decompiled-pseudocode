/*
 * XREFs of IopIrpExtensionControl @ 0x140596548
 * Callers:
 *     IopEtwEnableCallback @ 0x140712130 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x140716230 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140716380 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x14059661C (IopUpdateFunctionPointers.c)
 */

void __fastcall IopIrpExtensionControl(int a1, int a2)
{
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&IopFunctionPointerLock, &LockHandle);
  v5 = 1LL;
  if ( a2 == 1 )
  {
    v4 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_140E66054;
    if ( (a1 & 2) != 0 )
      ++dword_140E66058;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_140E66054 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140E66058 )
      IopIrpExtensionStatus &= ~2u;
    if ( !IopIrpExtensionStatus )
    {
      LOBYTE(v4) = 1;
      v5 = 0LL;
      goto LABEL_16;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
