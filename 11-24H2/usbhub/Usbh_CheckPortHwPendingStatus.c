/*
 * XREFs of Usbh_CheckPortHwPendingStatus @ 0x140017768
 * Callers:
 *     UsbhHubIsr @ 0x140017140 (UsbhHubIsr.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSignalResumeEvent @ 0x140019994 (UsbhSignalResumeEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x14002AFB4 (UsbhSignalSuspendEvent.c)
 */

void __fastcall Usbh_CheckPortHwPendingStatus(__int64 a1, __int64 a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  int v6; // r9d
  int v7; // r9d

  v4 = (KSPIN_LOCK *)(FdoExt(a1) + 1236);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  v6 = *(_DWORD *)(a2 + 696);
  if ( !v6 )
    goto LABEL_4;
  v7 = v6 - 2;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
LABEL_4:
      KeReleaseSpinLock(v4, v5);
      return;
    }
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207793, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalResumeEvent(a1, a2);
  }
  else
  {
    KeReleaseSpinLock(v4, v5);
    Log(a1, 16, 1666207794, a1, *(unsigned __int16 *)(a2 + 4));
    UsbhSignalSuspendEvent(a1, a2);
  }
}
