/*
 * XREFs of imp_VfWdfDeviceSetStaticStopRemove @ 0x1400DE180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetStaticStopRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 Stoppable)
{
  WdfVersion.Functions.pfnWdfDeviceSetStaticStopRemove(DriverGlobals, Device, Stoppable);
}
