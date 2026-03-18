/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404B78D0
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140A7D920 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + **a1) + 18512LL);
}
