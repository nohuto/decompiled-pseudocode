/*
 * XREFs of MmGetAvailablePagesForPartitionObject @ 0x14048CE94
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140A76BE0 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesForPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 18688LL);
}
