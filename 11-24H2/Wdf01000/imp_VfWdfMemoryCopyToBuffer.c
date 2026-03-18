/*
 * XREFs of imp_VfWdfMemoryCopyToBuffer @ 0x1400DFD40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfMemoryCopyToBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *SourceMemory,
        unsigned __int64 SourceOffset,
        void *Buffer,
        unsigned __int64 NumBytesToCopyTo)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFMEMORY__ *, unsigned __int64, void *, unsigned __int64))WdfVersion.Functions.pfnWdfMemoryCopyToBuffer)(
           DriverGlobals,
           SourceMemory,
           SourceOffset,
           Buffer,
           NumBytesToCopyTo);
}
