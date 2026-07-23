/*
 * XREFs of PopPowerRequestExecutionRequiredTimeoutCallback @ 0x1405CB180
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PopPowerRequestExecutionRequiredTimeoutCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0E2C8, DelayedWorkQueue);
}
