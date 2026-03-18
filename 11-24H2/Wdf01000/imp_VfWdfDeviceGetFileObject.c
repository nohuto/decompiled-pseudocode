/*
 * XREFs of imp_VfWdfDeviceGetFileObject @ 0x1400DDA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfDeviceGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _FILE_OBJECT *FileObject)
{
  return WdfVersion.Functions.pfnWdfDeviceGetFileObject(DriverGlobals, Device, FileObject);
}
