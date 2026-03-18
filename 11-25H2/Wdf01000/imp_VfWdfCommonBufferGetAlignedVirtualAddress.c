/*
 * XREFs of imp_VfWdfCommonBufferGetAlignedVirtualAddress @ 0x1400DD3E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfCommonBufferGetAlignedVirtualAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return WdfVersion.Functions.pfnWdfCommonBufferGetAlignedVirtualAddress(DriverGlobals, CommonBuffer);
}
