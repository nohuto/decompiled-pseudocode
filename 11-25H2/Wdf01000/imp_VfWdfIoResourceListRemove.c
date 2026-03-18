/*
 * XREFs of imp_VfWdfIoResourceListRemove @ 0x1400DF5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfIoResourceListRemove(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIORESLIST__ *ResourceList,
        __int64 Index)
{
  WdfVersion.Functions.pfnWdfIoResourceListRemove(DriverGlobals, ResourceList, Index);
}
