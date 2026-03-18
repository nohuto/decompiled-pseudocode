/*
 * XREFs of imp_VfWdfRequestRetrieveUnsafeUserOutputBuffer @ 0x1400E0DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 MinimumRequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, unsigned __int64, void **, unsigned __int64 *))WdfVersion.Functions.pfnWdfRequestRetrieveUnsafeUserOutputBuffer)(
           DriverGlobals,
           Request,
           MinimumRequiredLength,
           OutputBuffer,
           Length);
}
