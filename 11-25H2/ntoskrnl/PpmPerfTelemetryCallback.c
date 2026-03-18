/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1405CE650
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0CDE8, DelayedWorkQueue);
}
