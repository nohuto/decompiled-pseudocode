/*
 * XREFs of imp_VfWdfDeviceGetSelfIoTarget @ 0x1400DDA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetSelfIoTarget(DriverGlobals, Device);
}
