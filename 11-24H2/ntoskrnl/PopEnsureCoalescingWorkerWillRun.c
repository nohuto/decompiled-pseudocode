/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1404B7970
 * Callers:
 *     PopCoalescingNotify @ 0x140750FA0 (PopCoalescingNotify.c)
 *     PopCheckResiliencyScenarios @ 0x140A27318 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140AAC0B0 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
