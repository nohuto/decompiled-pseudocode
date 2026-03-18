/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405CDA10
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0E128, DelayedWorkQueue);
}
