/*
 * XREFs of imp_VfWdfDeviceInitSetRequestAttributes @ 0x1400DDDF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRequestAttributes(DriverGlobals, DeviceInit, RequestAttributes);
}
