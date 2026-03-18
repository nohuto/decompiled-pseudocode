/*
 * XREFs of imp_VfWdfIoResourceListAppendDescriptor @ 0x1400DF530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfIoResourceListAppendDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIORESLIST__ *, _IO_RESOURCE_DESCRIPTOR *))WdfVersion.Functions.pfnWdfIoResourceListAppendDescriptor)(
           DriverGlobals,
           ResourceList,
           Descriptor);
}
