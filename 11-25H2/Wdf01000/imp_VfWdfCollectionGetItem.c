/*
 * XREFs of imp_VfWdfCollectionGetItem @ 0x1400DD2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfCollectionGetItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCollectionGetItem(DriverGlobals, Collection, Index);
}
