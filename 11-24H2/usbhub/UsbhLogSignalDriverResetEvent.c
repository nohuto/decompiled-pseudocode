/*
 * XREFs of UsbhLogSignalDriverResetEvent @ 0x14003581C
 * Callers:
 *     UsbhSignalDriverResetEvent @ 0x1400356CC (UsbhSignalDriverResetEvent.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140048F44 (Usbh_iSignalSyncDeviceReset.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

__int64 __fastcall UsbhLogSignalDriverResetEvent(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // bl

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  Log(a1, 16, 1685213779, *(int *)(a2 + 696), *(unsigned __int16 *)(a2 + 4));
  KeSetEvent((PRKEVENT)(a2 + 824), 0, 0);
  KeReleaseSpinLock(v4, v5);
  return 1LL;
}
