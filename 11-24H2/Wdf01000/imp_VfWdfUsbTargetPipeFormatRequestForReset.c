/*
 * XREFs of imp_VfWdfUsbTargetPipeFormatRequestForReset @ 0x1400E15C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeFormatRequestForReset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfUsbTargetPipeFormatRequestForReset)(
           DriverGlobals,
           Pipe,
           Request);
}
