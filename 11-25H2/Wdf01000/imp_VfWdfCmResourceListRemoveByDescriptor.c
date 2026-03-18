/*
 * XREFs of imp_VfWdfCmResourceListRemoveByDescriptor @ 0x1400DD240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCmResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemoveByDescriptor(DriverGlobals, List, Descriptor);
}
