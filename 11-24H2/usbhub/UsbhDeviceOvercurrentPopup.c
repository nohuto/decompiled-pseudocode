/*
 * XREFs of UsbhDeviceOvercurrentPopup @ 0x14003EF54
 * Callers:
 *     UsbhDriverOvercurrentResetWorker @ 0x14003F020 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhDeviceOvercurrent @ 0x140055C50 (UsbhDeviceOvercurrent.c)
 * Callees:
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDispatch_PindicatorEvent @ 0x14003E438 (UsbhDispatch_PindicatorEvent.c)
 *     Usbh_OvercurrentDerefHubBusy @ 0x14003F610 (Usbh_OvercurrentDerefHubBusy.c)
 *     UsbhBuildWmiConnectionNotification @ 0x140054460 (UsbhBuildWmiConnectionNotification.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrentPopup(PDEVICE_OBJECT DeviceObject, unsigned __int16 a2)
{
  _DWORD *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 PortData; // rax
  _DWORD *EventData; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rax

  FdoExt((__int64)DeviceObject);
  v4 = FdoExt((__int64)DeviceObject);
  PortData = UsbhGetPortData((__int64)DeviceObject, a2, v5, v6);
  if ( PortData )
  {
    *(_DWORD *)(PortData + 2832) = 500;
    *(_WORD *)(PortData + 2836) = 256;
    UsbhDispatch_PindicatorEvent((__int64)DeviceObject, PortData, 4, (__int64)(v4 + 346));
  }
  EventData = (_DWORD *)UsbhBuildWmiConnectionNotification(DeviceObject, a2);
  if ( EventData )
  {
    *EventData = 3;
    return WmiFireEvent(DeviceObject, &GUID_USB_WMI_STD_NOTIFICATION, 0, 0x18u, EventData);
  }
  else
  {
    v12 = UsbhGetPortData((__int64)DeviceObject, a2, v9, v10);
    return Usbh_OvercurrentDerefHubBusy(DeviceObject, v12, 0LL);
  }
}
