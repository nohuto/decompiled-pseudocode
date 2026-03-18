/*
 * XREFs of imp_VfWdfRequestRetrieveInputMemory @ 0x1400E0CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestRetrieveInputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfRequestRetrieveInputMemory)(
           DriverGlobals,
           Request,
           Memory);
}
