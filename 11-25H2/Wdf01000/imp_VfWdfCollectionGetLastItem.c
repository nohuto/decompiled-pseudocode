/*
 * XREFs of imp_VfWdfCollectionGetLastItem @ 0x1400DD300
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfCollectionGetLastItem(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection)
{
  return WdfVersion.Functions.pfnWdfCollectionGetLastItem(DriverGlobals, Collection);
}
