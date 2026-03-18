/*
 * XREFs of UsbhDeviceOvercurrent @ 0x1C004A750
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDeviceOvercurrentPopup @ 0x1C002FBA4 (UsbhDeviceOvercurrentPopup.c)
 */

NTSTATUS __fastcall UsbhDeviceOvercurrent(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  FdoExt((__int64)DeviceObject);
  return UsbhDeviceOvercurrentPopup(DeviceObject, *(_WORD *)(a2 + 20));
}
