/*
 * XREFs of imp_VfWdfDeviceGetDeviceState @ 0x1400DD9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceGetDeviceState(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_STATE *DeviceState)
{
  WdfVersion.Functions.pfnWdfDeviceGetDeviceState(DriverGlobals, Device, DeviceState);
}
