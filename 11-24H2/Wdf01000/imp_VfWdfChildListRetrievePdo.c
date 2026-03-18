/*
 * XREFs of imp_VfWdfChildListRetrievePdo @ 0x1400DD140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfChildListRetrievePdo(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList,
        _WDF_CHILD_RETRIEVE_INFO *RetrieveInfo)
{
  return WdfVersion.Functions.pfnWdfChildListRetrievePdo(DriverGlobals, ChildList, RetrieveInfo);
}
