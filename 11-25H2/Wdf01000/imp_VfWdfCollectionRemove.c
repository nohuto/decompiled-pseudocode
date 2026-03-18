/*
 * XREFs of imp_VfWdfCollectionRemove @ 0x1400DD320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCollectionRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCOLLECTION__ *Collection, void *Item)
{
  WdfVersion.Functions.pfnWdfCollectionRemove(DriverGlobals, Collection, Item);
}
