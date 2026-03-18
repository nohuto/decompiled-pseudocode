/*
 * XREFs of imp_VfWdfFdoGetDefaultChildList @ 0x1400DE990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFCHILDLIST__ *__fastcall imp_VfWdfFdoGetDefaultChildList(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Fdo)
{
  return WdfVersion.Functions.pfnWdfFdoGetDefaultChildList(DriverGlobals, Fdo);
}
