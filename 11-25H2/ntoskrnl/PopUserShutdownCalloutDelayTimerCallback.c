/*
 * XREFs of PopUserShutdownCalloutDelayTimerCallback @ 0x1405CF1B0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 */

char PopUserShutdownCalloutDelayTimerCallback()
{
  return PopQueueWorkItem((__int64)&unk_140F0BC28, DelayedWorkQueue);
}
