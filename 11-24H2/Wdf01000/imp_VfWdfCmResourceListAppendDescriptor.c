/*
 * XREFs of imp_VfWdfCmResourceListAppendDescriptor @ 0x1400DD1A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfCmResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCMRESLIST__ *, _CM_PARTIAL_RESOURCE_DESCRIPTOR *))WdfVersion.Functions.pfnWdfCmResourceListAppendDescriptor)(
           DriverGlobals,
           List,
           Descriptor);
}
