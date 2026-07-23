/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x1404A7D70
 * Callers:
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlSendSyntheticClusterIpi @ 0x1403A4B40 (HvlSendSyntheticClusterIpi.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14043DA00 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallpExtendedFastHypercall @ 0x1406B6100 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapFreeView @ 0x140A40FA4 (HvpViewMapFreeView.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
