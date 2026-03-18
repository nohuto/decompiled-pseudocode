/*
 * XREFs of imp_VfWdfDeviceSetFailed @ 0x1400DE100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDeviceSetFailed(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device, __int64 FailedAction)
{
  WdfVersion.Functions.pfnWdfDeviceSetFailed(DriverGlobals, Device, (_WDF_DEVICE_FAILED_ACTION)FailedAction);
}
