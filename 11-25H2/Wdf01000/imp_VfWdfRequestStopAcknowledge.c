/*
 * XREFs of imp_VfWdfRequestStopAcknowledge @ 0x1400E0E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestStopAcknowledge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        __int64 Requeue)
{
  WdfVersion.Functions.pfnWdfRequestStopAcknowledge(DriverGlobals, Request, Requeue);
}
