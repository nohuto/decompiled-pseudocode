/*
 * XREFs of VidSchiDeInitGlobals @ 0x1400A6800
 * Callers:
 *     DriverUnload @ 0x14004C050 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void VidSchiDeInitGlobals()
{
  if ( PerfCounterSetEngineRegistered )
    PcwUnregister(GpuPerformanceCounterSetEngine);
}
