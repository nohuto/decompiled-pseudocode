/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405C9400
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0DAE8, DelayedWorkQueue);
}
