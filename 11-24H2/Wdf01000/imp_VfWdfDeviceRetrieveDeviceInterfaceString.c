/*
 * XREFs of imp_VfWdfDeviceRetrieveDeviceInterfaceString @ 0x1400DDFD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDeviceRetrieveDeviceInterfaceString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _GUID *, const _UNICODE_STRING *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfDeviceRetrieveDeviceInterfaceString)(
           DriverGlobals,
           Device,
           InterfaceClassGUID,
           ReferenceString,
           String);
}
