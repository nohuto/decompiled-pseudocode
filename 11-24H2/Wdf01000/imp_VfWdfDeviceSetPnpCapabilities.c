/*
 * XREFs of imp_VfWdfDeviceSetPnpCapabilities @ 0x1400DE120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetPnpCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PNP_CAPABILITIES *PnpCapabilities)
{
  WdfVersion.Functions.pfnWdfDeviceSetPnpCapabilities(DriverGlobals, Device, PnpCapabilities);
}
