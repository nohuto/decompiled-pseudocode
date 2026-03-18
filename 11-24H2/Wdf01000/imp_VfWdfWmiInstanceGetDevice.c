/*
 * XREFs of imp_VfWdfWmiInstanceGetDevice @ 0x1400E1910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfWmiInstanceGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetDevice(DriverGlobals, WmiInstance);
}
