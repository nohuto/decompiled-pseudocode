/*
 * XREFs of imp_VfWdfWmiInstanceGetProvider @ 0x1400E1930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFWMIPROVIDER__ *__fastcall imp_VfWdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetProvider(DriverGlobals, WmiInstance);
}
