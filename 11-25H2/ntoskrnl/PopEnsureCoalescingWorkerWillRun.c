/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1404B810C
 * Callers:
 *     PopCoalescingNotify @ 0x140744ED0 (PopCoalescingNotify.c)
 *     PopCheckResiliencyScenarios @ 0x140A1E378 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA6AF0 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
