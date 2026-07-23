/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1409F3944
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x1409BEA08 (PiSwProcessParentRemoveIrp.c)
 *     PiSwPdoPnPDispatch @ 0x1409F33B0 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1409F3E28 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
