/*
 * XREFs of imp_VfWdfDeviceRetrieveDeviceName @ 0x1400DE000
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceRetrieveDeviceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfDeviceRetrieveDeviceName)(
           DriverGlobals,
           Device,
           String);
}
