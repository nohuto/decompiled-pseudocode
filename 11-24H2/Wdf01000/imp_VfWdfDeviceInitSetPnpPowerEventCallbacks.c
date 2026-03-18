/*
 * XREFs of imp_VfWdfDeviceInitSetPnpPowerEventCallbacks @ 0x1400DDCF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}
