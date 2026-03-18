/*
 * XREFs of imp_VfWdfDriverWdmGetDriverObject @ 0x1400DE950
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

_DRIVER_OBJECT *__fastcall imp_VfWdfDriverWdmGetDriverObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  return WdfVersion.Functions.pfnWdfDriverWdmGetDriverObject(DriverGlobals, Driver);
}
