/*
 * XREFs of imp_VfWdfIoResourceListUpdateDescriptor @ 0x1400DF610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceListUpdateDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        _IO_RESOURCE_DESCRIPTOR *Descriptor,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceListUpdateDescriptor(DriverGlobals, ResourceList, Descriptor, Index);
}
