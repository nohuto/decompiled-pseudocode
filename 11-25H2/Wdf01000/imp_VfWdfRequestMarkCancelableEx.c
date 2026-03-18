/*
 * XREFs of imp_VfWdfRequestMarkCancelableEx @ 0x1400E0BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfRequestMarkCancelableEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *, void (__fastcall *)(WDFREQUEST__ *)))WdfVersion.Functions.pfnWdfRequestMarkCancelableEx)(
           DriverGlobals,
           Request,
           EvtRequestCancel);
}
