/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceType @ 0x1400DDC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceType(DriverGlobals, DeviceInit, DeviceType);
}
