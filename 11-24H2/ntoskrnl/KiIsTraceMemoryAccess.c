/*
 * XREFs of KiIsTraceMemoryAccess @ 0x14040EE10
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x14040EB50 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return a1 < qword_140FC6410 && a1 >= qword_140FC6408 && KiDynamicTraceEnabled && KeGetCurrentIrql() == 15;
}
