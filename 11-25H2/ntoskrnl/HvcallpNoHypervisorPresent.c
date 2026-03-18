/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x1404AC0A0
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140267530 (HvlSendSyntheticClusterIpi.c)
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x140448400 (HvlUpdatePerformanceStateCountersForLp.c)
 *     HvcallpExtendedFastHypercall @ 0x1406A9E90 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapFreeView @ 0x140A46244 (HvpViewMapFreeView.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
