/*
 * XREFs of imp_VfWdfDeviceInitSetIoTypeEx @ 0x1400DDCD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetIoTypeEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoTypeEx(DriverGlobals, DeviceInit, IoTypeConfig);
}
