/*
 * XREFs of imp_VfWdfObjectDelete @ 0x1400DFEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfObjectDelete(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectDelete(DriverGlobals, Object);
}
