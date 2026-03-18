/*
 * XREFs of imp_VfWdfRegistryAssignString @ 0x1400E0290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRegistryAssignString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfRegistryAssignString)(
           DriverGlobals,
           Key,
           ValueName,
           String);
}
