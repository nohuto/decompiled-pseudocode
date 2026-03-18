/*
 * XREFs of imp_VfWdfDeviceEnqueueRequest @ 0x1400DD8F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfDeviceEnqueueRequest)(
           DriverGlobals,
           Device,
           Request);
}
