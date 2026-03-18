/*
 * XREFs of imp_VfWdfDeviceInitSetRemoveLockOptions @ 0x1400DDDD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *Options)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRemoveLockOptions(DriverGlobals, DeviceInit, Options);
}
