/*
 * XREFs of imp_VfWdfRegistryRemoveValue @ 0x1400E0500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRegistryRemoveValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfRegistryRemoveValue)(
           DriverGlobals,
           Key,
           ValueName);
}
