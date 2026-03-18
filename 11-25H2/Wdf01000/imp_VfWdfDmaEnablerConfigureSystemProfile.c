/*
 * XREFs of imp_VfWdfDmaEnablerConfigureSystemProfile @ 0x1400DE2E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_VfWdfDmaEnablerConfigureSystemProfile(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_DMA_SYSTEM_PROFILE_CONFIG *ProfileConfig,
        __int64 ConfigDirection)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMAENABLER__ *, _WDF_DMA_SYSTEM_PROFILE_CONFIG *, __int64))WdfVersion.Functions.pfnWdfDmaEnablerConfigureSystemProfile)(
           DriverGlobals,
           DmaEnabler,
           ProfileConfig,
           ConfigDirection);
}
