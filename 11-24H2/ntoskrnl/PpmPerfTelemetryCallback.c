/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1405D0650
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0D6E8, DelayedWorkQueue);
}
