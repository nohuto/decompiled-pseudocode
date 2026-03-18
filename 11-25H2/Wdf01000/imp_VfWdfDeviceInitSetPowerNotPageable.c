/*
 * XREFs of imp_VfWdfDeviceInitSetPowerNotPageable @ 0x1400DDD30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetPowerNotPageable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerNotPageable(DriverGlobals, DeviceInit);
}
