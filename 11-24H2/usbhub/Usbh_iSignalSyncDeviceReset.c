/*
 * XREFs of Usbh_iSignalSyncDeviceReset @ 0x140048F44
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140001FF0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003220 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFreePortChangeQueueObject @ 0x1400048F4 (UsbhFreePortChangeQueueObject.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140042B3C (UsbhFreePortChangeQueueTimeoutObject.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x140015FC4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 *     UsbhLogSignalDriverResetEvent @ 0x14003581C (UsbhLogSignalDriverResetEvent.c)
 */

_DWORD *__fastcall Usbh_iSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *result; // rax

  UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741823);
  result = (_DWORD *)UsbhLogSignalDriverResetEvent(a1, a3);
  if ( (_DWORD)result )
    return UsbhSetPcqEventStatus(a1, a3, 3, 30);
  return result;
}
