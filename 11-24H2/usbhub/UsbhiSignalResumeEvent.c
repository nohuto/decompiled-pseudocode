/*
 * XREFs of UsbhiSignalResumeEvent @ 0x140019160
 * Callers:
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1400048F4 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x140043CB4 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_BusReset_Action @ 0x140043EA4 (Usbh_PCE_BusReset_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1400443E4 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1400447A8 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x140019A84 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 */

__int64 __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = UsbhLogSignalResumeEvent(a1, a2, a3, a4);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a2, 1LL);
  return result;
}
