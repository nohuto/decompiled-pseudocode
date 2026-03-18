/*
 * XREFs of imp_VfWdfDpcWdmGetDpc @ 0x1400DE7D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

_KDPC *__fastcall imp_VfWdfDpcWdmGetDpc(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return WdfVersion.Functions.pfnWdfDpcWdmGetDpc(DriverGlobals, Dpc);
}
