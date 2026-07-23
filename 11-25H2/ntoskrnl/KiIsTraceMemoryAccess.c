/*
 * XREFs of KiIsTraceMemoryAccess @ 0x1403E17E0
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x1403E1520 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return a1 < qword_140FC6450 && a1 >= ControlPc && KiDynamicTraceEnabled && KeGetCurrentIrql() == 15;
}
