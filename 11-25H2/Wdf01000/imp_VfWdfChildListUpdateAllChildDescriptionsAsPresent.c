/*
 * XREFs of imp_VfWdfChildListUpdateAllChildDescriptionsAsPresent @ 0x1400DD160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfChildListUpdateAllChildDescriptionsAsPresent(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCHILDLIST__ *ChildList)
{
  WdfVersion.Functions.pfnWdfChildListUpdateAllChildDescriptionsAsPresent(DriverGlobals, ChildList);
}
