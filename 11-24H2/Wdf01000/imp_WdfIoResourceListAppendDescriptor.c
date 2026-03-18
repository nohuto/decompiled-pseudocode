/*
 * XREFs of imp_WdfIoResourceListAppendDescriptor @ 0x140098AF0
 * Callers:
 *     <none>
 * Callees:
 *     FxIoResourceListInsertDescriptor @ 0x140098650 (FxIoResourceListInsertDescriptor.c)
 */

int __fastcall imp_WdfIoResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  return FxIoResourceListInsertDescriptor(DriverGlobals, ResourceList, Descriptor, 0xFFFFFFFF);
}
