/*
 * XREFs of imp_VfWdfCmResourceListGetDescriptor @ 0x1400DD1E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

_CM_PARTIAL_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfCmResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfCmResourceListGetDescriptor(DriverGlobals, List, Index);
}
