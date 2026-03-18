/*
 * XREFs of UsbhLogSignalSuspendEvent @ 0x1C0034208
 * Callers:
 *     UsbhSignalSuspendEvent @ 0x1C00353B4 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0036644 (UsbhiSignalSuspendEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 */

__int64 __fastcall UsbhLogSignalSuspendEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  KSPIN_LOCK *v5; // rbp
  KIRQL v6; // r14

  v4 = 0;
  v5 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v6 = KeAcquireSpinLockRaiseToDpc(v5);
  Log(a1, 16, 1936282453, 0LL, *(unsigned __int16 *)(a2 + 4));
  if ( *(_DWORD *)(a2 + 696) == 2 )
  {
    *(_DWORD *)(a2 + 696) = 0;
    KeSetEvent((PRKEVENT)(a2 + 744), 0, 0);
    v4 = 1;
  }
  KeReleaseSpinLock(v5, v6);
  return v4;
}
