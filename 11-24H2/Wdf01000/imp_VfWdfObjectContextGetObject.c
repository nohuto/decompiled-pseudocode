/*
 * XREFs of imp_VfWdfObjectContextGetObject @ 0x1400DFE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void *__fastcall imp_VfWdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *DriverGlobals, void *ContextPointer)
{
  return WdfVersion.Functions.pfnWdfObjectContextGetObject(DriverGlobals, ContextPointer);
}
