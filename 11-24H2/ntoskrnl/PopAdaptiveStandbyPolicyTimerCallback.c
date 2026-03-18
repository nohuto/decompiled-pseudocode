/*
 * XREFs of PopAdaptiveStandbyPolicyTimerCallback @ 0x1405DB310
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 */

char PopAdaptiveStandbyPolicyTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F07008, DelayedWorkQueue);
}
