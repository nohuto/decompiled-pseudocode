/*
 * XREFs of imp_VfWdfRequestGetInformation @ 0x1400E0AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfRequestGetInformation(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetInformation(DriverGlobals, Request);
}
