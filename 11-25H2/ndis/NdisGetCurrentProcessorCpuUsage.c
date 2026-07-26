/*
 * XREFs of NdisGetCurrentProcessorCpuUsage @ 0x1400DC120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetCurrentProcessorCpuUsage(PULONG pCpuUsage)
{
  ExGetCurrentProcessorCpuUsage(pCpuUsage);
}
