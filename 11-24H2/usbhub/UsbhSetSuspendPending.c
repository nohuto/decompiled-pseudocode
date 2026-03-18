/*
 * XREFs of UsbhSetSuspendPending @ 0x1400133B0
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x1400129AC (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSetSuspendPending(__int64 a1, struct _KEVENT *a2)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al
  KIRQL v6; // si

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = v5;
  if ( a2[29].Header.LockNV == 2 )
  {
    KeReleaseSpinLock(v4, v5);
  }
  else
  {
    a2[29].Header.LockNV = 2;
    KeResetEvent(a2 + 31);
    KeReleaseSpinLock(v4, v6);
    UsbhSetPcqEventStatus(a1, a2, 0LL);
  }
}
