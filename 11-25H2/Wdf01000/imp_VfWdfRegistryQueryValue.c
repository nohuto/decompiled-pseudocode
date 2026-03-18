/*
 * XREFs of imp_VfWdfRegistryQueryValue @ 0x1400E04A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryValue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        __int64 ValueLength,
        void *Value,
        unsigned int *ValueLengthQueried,
        unsigned int *ValueType)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, __int64, void *, unsigned int *, unsigned int *))WdfVersion.Functions.pfnWdfRegistryQueryValue)(
           DriverGlobals,
           Key,
           ValueName,
           ValueLength,
           Value,
           ValueLengthQueried,
           ValueType);
}
