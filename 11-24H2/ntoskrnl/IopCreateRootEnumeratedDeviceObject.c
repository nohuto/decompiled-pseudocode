/*
 * XREFs of IopCreateRootEnumeratedDeviceObject @ 0x14072D9EC
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     IopFindLegacyDeviceNode @ 0x140AAF2E8 (IopFindLegacyDeviceNode.c)
 * Callees:
 *     IoDeleteDevice @ 0x1403F1B00 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1409A3530 (IoCreateDevice.c)
 */

__int64 __fastcall IopCreateRootEnumeratedDeviceObject(PDEVICE_OBJECT *a1)
{
  NTSTATUS v2; // ebx
  PDEVICE_OBJECT v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+10h] BYREF

  DeviceObject = 0LL;
  v2 = IoCreateDevice(PnpDriverObject, 4u, 0LL, 4u, 0x80u, 0, &DeviceObject);
  if ( v2 < 0 )
  {
    v4 = DeviceObject;
  }
  else
  {
    v3 = DeviceObject;
    *a1 = DeviceObject;
    *(_DWORD *)v3->DeviceExtension = 0;
    v4 = 0LL;
  }
  if ( v4 )
    IoDeleteDevice(v4);
  return (unsigned int)v2;
}
