/*
 * XREFs of KiIsTraceMemoryAccess @ 0x140407010
 * Callers:
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140406D50 (MiComputeMaximumFaultCluster.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsTraceMemoryAccess(unsigned __int64 a1)
{
  return a1 < qword_140FC7490 && a1 >= ControlPc && KiDynamicTraceEnabled && KeGetCurrentIrql() == 15;
}
