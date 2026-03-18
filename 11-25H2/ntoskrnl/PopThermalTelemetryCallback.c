/*
 * XREFs of PopThermalTelemetryCallback @ 0x1405CF500
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

char PopThermalTelemetryCallback()
{
  return PopQueueWorkItem((__int64)&stru_140F0A5A8, DelayedWorkQueue);
}
