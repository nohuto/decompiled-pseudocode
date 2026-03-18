/*
 * XREFs of imp_VfWdfPdoRetrieveIdentificationDescription @ 0x1400E0200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))WdfVersion.Functions.pfnWdfPdoRetrieveIdentificationDescription)(
           DriverGlobals,
           Device,
           IdentificationDescription);
}
