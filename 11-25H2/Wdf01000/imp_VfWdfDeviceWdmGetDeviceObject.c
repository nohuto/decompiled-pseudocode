/*
 * XREFs of imp_VfWdfDeviceWdmGetDeviceObject @ 0x1400DE2A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetDeviceObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetDeviceObject(DriverGlobals, Device);
}
