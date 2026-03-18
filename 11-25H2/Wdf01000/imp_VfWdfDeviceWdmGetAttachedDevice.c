/*
 * XREFs of imp_VfWdfDeviceWdmGetAttachedDevice @ 0x1400DE280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetAttachedDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetAttachedDevice(DriverGlobals, Device);
}
