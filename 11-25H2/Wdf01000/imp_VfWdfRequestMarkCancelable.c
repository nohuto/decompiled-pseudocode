/*
 * XREFs of imp_VfWdfRequestMarkCancelable @ 0x1400E0BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestMarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfRequestMarkCancelable(DriverGlobals, Request, EvtRequestCancel);
}
