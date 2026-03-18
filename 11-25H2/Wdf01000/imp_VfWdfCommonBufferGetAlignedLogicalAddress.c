/*
 * XREFs of imp_VfWdfCommonBufferGetAlignedLogicalAddress @ 0x1400DD3C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_LARGE_INTEGER __fastcall imp_VfWdfCommonBufferGetAlignedLogicalAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMMONBUFFER__ *CommonBuffer)
{
  return (_LARGE_INTEGER)((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFCOMMONBUFFER__ *))WdfVersion.Functions.pfnWdfCommonBufferGetAlignedLogicalAddress)(
                           DriverGlobals,
                           CommonBuffer);
}
