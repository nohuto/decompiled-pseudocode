/*
 * XREFs of imp_VfWdfRequestSetInformation @ 0x1400E0E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfRequestSetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 Information)
{
  WdfVersion.Functions.pfnWdfRequestSetInformation(DriverGlobals, Request, Information);
}
