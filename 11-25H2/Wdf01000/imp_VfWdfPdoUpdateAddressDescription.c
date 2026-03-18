/*
 * XREFs of imp_VfWdfPdoUpdateAddressDescription @ 0x1400E0220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfPdoUpdateAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))WdfVersion.Functions.pfnWdfPdoUpdateAddressDescription)(
           DriverGlobals,
           Device,
           AddressDescription);
}
