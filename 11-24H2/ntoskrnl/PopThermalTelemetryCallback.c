/*
 * XREFs of PopThermalTelemetryCallback @ 0x1405D16D0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F0B048, DelayedWorkQueue);
}
