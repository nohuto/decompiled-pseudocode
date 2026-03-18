/*
 * XREFs of PiSwDestroyDeviceObject @ 0x1409FAFD4
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1409FAA40 (PiSwPdoPnPDispatch.c)
 *     PiSwProcessParentRemoveIrp @ 0x140A105F8 (PiSwProcessParentRemoveIrp.c)
 * Callees:
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     PiSwUnassociateDeviceObject @ 0x1409FB4B8 (PiSwUnassociateDeviceObject.c)
 */

void __fastcall PiSwDestroyDeviceObject(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  PiSwUnassociateDeviceObject();
  DeviceExtension[2] |= 0x10u;
  IoDeleteDevice(DeviceObject);
}
