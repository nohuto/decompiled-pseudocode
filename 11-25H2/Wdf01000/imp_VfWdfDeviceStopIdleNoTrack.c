/*
 * XREFs of imp_VfWdfDeviceStopIdleNoTrack @ 0x1400DE1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceStopIdleNoTrack(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 WaitForD0)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, __int64))WdfVersion.Functions.pfnWdfDeviceStopIdleNoTrack)(
           DriverGlobals,
           Device,
           WaitForD0);
}
