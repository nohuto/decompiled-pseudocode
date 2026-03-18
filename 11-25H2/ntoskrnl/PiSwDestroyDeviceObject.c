/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1409A34B4
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14083A790 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x1409A1544 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402FDA50 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1409A34E8 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
