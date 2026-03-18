/*
 * XREFs of imp_VfWdfCxDeviceInitSetRequestAttributes @ 0x1400DD600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetRequestAttributes(DriverGlobals, CxDeviceInit, RequestAttributes);
}
