/*
 * XREFs of IopIrpExtensionControl @ 0x140592EE8
 * Callers:
 *     IopEtwEnableCallback @ 0x140706030 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x14070A130 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x14070A280 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x140300F80 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140302580 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x140592FBC (IopUpdateFunctionPointers.c)
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
      ++dword_140E65D34;
    if ( (a1 & 2) != 0 )
      ++dword_140E65D38;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_140E65D34 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140E65D38 )
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
