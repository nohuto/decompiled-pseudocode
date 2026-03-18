/*
 * XREFs of imp_VfWdfObjectReleaseLock @ 0x1400DFF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfObjectReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectReleaseLock(DriverGlobals, Object);
}
