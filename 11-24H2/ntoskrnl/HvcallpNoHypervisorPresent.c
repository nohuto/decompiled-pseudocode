/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x1404AD690
 * Callers:
 *     HvcallInitiateHypercall @ 0x1403AF710 (HvcallInitiateHypercall.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403C8710 (HvlSendSyntheticClusterIpi.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140445850 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallpExtendedFastHypercall @ 0x1406B5160 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapFreeView @ 0x140A4A284 (HvpViewMapFreeView.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
