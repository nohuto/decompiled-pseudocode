/*
 * XREFs of imp_VfWdfWdmDeviceGetWdfDeviceHandle @ 0x1400E1860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfWdmDeviceGetWdfDeviceHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *DeviceObject)
{
  return WdfVersion.Functions.pfnWdfWdmDeviceGetWdfDeviceHandle(DriverGlobals, DeviceObject);
}
