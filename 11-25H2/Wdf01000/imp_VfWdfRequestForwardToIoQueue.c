/*
 * XREFs of imp_VfWdfRequestForwardToIoQueue @ 0x1400E0A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFQUEUE__ *DestinationQueue)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfRequestForwardToIoQueue)(
           DriverGlobals,
           Request,
           DestinationQueue);
}
