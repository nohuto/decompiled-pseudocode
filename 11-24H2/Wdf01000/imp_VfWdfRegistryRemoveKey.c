/*
 * XREFs of imp_VfWdfRegistryRemoveKey @ 0x1400E04E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRegistryRemoveKey(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFKEY__ *Key)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *))WdfVersion.Functions.pfnWdfRegistryRemoveKey)(
           DriverGlobals,
           Key);
}
