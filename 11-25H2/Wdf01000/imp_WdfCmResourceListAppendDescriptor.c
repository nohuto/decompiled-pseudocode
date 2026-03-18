/*
 * XREFs of imp_WdfCmResourceListAppendDescriptor @ 0x140098830
 * Callers:
 *     <none>
 * Callees:
 *     FxCmResourceListInsertDescriptor @ 0x14009851C (FxCmResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfCmResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  return FxCmResourceListInsertDescriptor(DriverGlobals, List, Descriptor, 0xFFFFFFFF);
}
