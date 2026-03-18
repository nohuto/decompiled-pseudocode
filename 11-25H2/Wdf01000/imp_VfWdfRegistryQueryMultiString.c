/*
 * XREFs of imp_VfWdfRegistryQueryMultiString @ 0x1400E0400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryMultiString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        _WDF_OBJECT_ATTRIBUTES *StringsAttributes,
        WDFCOLLECTION__ *Collection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, _WDF_OBJECT_ATTRIBUTES *, WDFCOLLECTION__ *))WdfVersion.Functions.pfnWdfRegistryQueryMultiString)(
           DriverGlobals,
           Key,
           ValueName,
           StringsAttributes,
           Collection);
}
