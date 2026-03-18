/*
 * XREFs of imp_VfWdfDeviceSetPowerCapabilities @ 0x1400DE140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  WdfVersion.Functions.pfnWdfDeviceSetPowerCapabilities(DriverGlobals, Device, PowerCapabilities);
}
