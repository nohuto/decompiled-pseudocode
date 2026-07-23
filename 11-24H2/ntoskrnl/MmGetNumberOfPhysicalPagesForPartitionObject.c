/*
 * XREFs of MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1404B20B0
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140A77C20 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPagesForPartitionObject(unsigned __int16 **a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E300C8 + **a1) + 18512LL);
}
