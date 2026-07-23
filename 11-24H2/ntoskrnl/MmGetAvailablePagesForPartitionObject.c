/*
 * XREFs of MmGetAvailablePagesForPartitionObject @ 0x1404877C4
 * Callers:
 *     CcPartitionTelemetryCallback @ 0x140A77C20 (CcPartitionTelemetryCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetAvailablePagesForPartitionObject(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)a1 + 18688LL);
}
