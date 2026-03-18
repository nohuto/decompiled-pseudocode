/*
 * XREFs of imp_VfWdfWmiProviderGetTracingHandle @ 0x1400E19C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfWmiProviderGetTracingHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider)
{
  return WdfVersion.Functions.pfnWdfWmiProviderGetTracingHandle(DriverGlobals, WmiProvider);
}
