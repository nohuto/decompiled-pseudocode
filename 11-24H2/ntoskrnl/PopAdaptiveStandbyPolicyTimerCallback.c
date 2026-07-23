/*
 * XREFs of PopAdaptiveStandbyPolicyTimerCallback @ 0x1405D85F0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 */

char PopAdaptiveStandbyPolicyTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F07318, DelayedWorkQueue);
}
