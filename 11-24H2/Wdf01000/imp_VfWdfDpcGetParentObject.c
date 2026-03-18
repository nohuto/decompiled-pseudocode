/*
 * XREFs of imp_VfWdfDpcGetParentObject @ 0x1400DE7B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcGetParentObject(DriverGlobals, Dpc);
}
