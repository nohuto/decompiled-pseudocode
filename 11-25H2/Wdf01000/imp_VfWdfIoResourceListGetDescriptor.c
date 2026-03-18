/*
 * XREFs of imp_VfWdfIoResourceListGetDescriptor @ 0x1400DF590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_IO_RESOURCE_DESCRIPTOR *__fastcall imp_VfWdfIoResourceListGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        __int64 Index)
{
  return WdfVersion.Functions.pfnWdfIoResourceListGetDescriptor(DriverGlobals, ResourceList, Index);
}
