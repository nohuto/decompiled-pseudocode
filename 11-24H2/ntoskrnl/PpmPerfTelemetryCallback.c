/*
 * XREFs of PpmPerfTelemetryCallback @ 0x1405D2F30
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PpmPerfTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0D3C8, DelayedWorkQueue);
}
