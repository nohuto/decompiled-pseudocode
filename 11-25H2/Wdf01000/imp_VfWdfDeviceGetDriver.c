/*
 * XREFs of imp_VfWdfDeviceGetDriver @ 0x1400DD9F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFDRIVER__ *__fastcall imp_VfWdfDeviceGetDriver(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDriver(DriverGlobals, Device);
}
