/*
 * XREFs of UsbhSignalSuspendEvent @ 0x14002AFB4
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400129AC (Usbh_PCE_Suspend_Action.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140017768 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhPortDisconnect @ 0x14002A520 (UsbhPortDisconnect.c)
 *     UsbhEnumerate1 @ 0x140034800 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x140034CF0 (UsbhEnumerate2.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140044E04 (Usbh_PCE_wChangeERROR_Action.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x14002BA4C (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent() )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 0LL);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
