/*
 * XREFs of PopThermalTelemetryCallback @ 0x1405D3F10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F0ACC8, DelayedWorkQueue);
}
