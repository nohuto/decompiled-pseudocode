/*
 * XREFs of imp_VfWdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1400DD5C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCxDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_PNPPOWER_EVENT_CALLBACKS *CxPnpPowerCallbacks)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, CxDeviceInit, CxPnpPowerCallbacks);
}
