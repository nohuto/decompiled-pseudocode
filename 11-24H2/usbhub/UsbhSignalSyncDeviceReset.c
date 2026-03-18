/*
 * XREFs of UsbhSignalSyncDeviceReset @ 0x140047888
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x140004BE4 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140044E04 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDeregisterPdo @ 0x140045D8C (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1400478C0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048294 (Usbh_BusPause_PdoEvent.c)
 *     UsbhDriverResetPort @ 0x140057310 (UsbhDriverResetPort.c)
 *     UsbhFailDriverResetPort @ 0x140057460 (UsbhFailDriverResetPort.c)
 *     UsbhReset1Debounce @ 0x140057F60 (UsbhReset1Debounce.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x140015FC4 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhSignalDriverResetEvent @ 0x1400356CC (UsbhSignalDriverResetEvent.c)
 */

void __fastcall UsbhSignalSyncDeviceReset(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  UsbhSignalSyncDeviceResetPdo(a1, a2, a4);
  UsbhSignalDriverResetEvent(a1, a3);
}
