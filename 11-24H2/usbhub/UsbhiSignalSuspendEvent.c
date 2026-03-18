/*
 * XREFs of UsbhiSignalSuspendEvent @ 0x14002BDEC
 * Callers:
 *     Usbh_PCE_wChange_Action @ 0x1400017C0 (Usbh_PCE_wChange_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1400048F4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Disable_Action @ 0x140011580 (Usbh_PCE_Disable_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400129AC (Usbh_PCE_Suspend_Action.c)
 *     UsbhRemoveQueuedSuspend @ 0x140043BAC (UsbhRemoveQueuedSuspend.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x14002BA4C (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalSuspendEvent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = UsbhLogSignalSuspendEvent(a1, a2);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 0LL);
  return result;
}
