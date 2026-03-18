/*
 * XREFs of imp_VfWdfCmResourceListRemove @ 0x1400DD220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfCmResourceListRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFCMRESLIST__ *List, __int64 Index)
{
  WdfVersion.Functions.pfnWdfCmResourceListRemove(DriverGlobals, List, Index);
}
