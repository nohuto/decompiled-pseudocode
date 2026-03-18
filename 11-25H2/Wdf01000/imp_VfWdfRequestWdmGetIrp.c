/*
 * XREFs of imp_VfWdfRequestWdmGetIrp @ 0x1400E0EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_IRP *__fastcall imp_VfWdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestWdmGetIrp(DriverGlobals, Request);
}
