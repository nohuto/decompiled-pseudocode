/*
 * XREFs of imp_VfWdfDmaEnablerGetFragmentLength @ 0x1400DE330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall imp_VfWdfDmaEnablerGetFragmentLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        __int64 DmaDirection)
{
  return WdfVersion.Functions.pfnWdfDmaEnablerGetFragmentLength(
           DriverGlobals,
           DmaEnabler,
           (_WDF_DMA_DIRECTION)DmaDirection);
}
