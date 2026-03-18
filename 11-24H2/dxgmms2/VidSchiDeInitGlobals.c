/*
 * XREFs of VidSchiDeInitGlobals @ 0x1400A8080
 * Callers:
 *     DriverUnload @ 0x14004B760 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void VidSchiDeInitGlobals()
{
  if ( PerfCounterSetEngineRegistered )
    PcwUnregister(GpuPerformanceCounterSetEngine);
}
