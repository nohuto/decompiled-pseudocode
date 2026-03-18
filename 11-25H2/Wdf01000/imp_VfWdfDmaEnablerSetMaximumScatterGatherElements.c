/*
 * XREFs of imp_VfWdfDmaEnablerSetMaximumScatterGatherElements @ 0x1400DE390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfDmaEnablerSetMaximumScatterGatherElements(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        unsigned __int64 MaximumFragments)
{
  WdfVersion.Functions.pfnWdfDmaEnablerSetMaximumScatterGatherElements(DriverGlobals, DmaEnabler, MaximumFragments);
}
