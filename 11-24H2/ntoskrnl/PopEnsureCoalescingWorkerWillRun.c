/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1404B2150
 * Callers:
 *     PopCoalescingNotify @ 0x14074F2C0 (PopCoalescingNotify.c)
 *     PopCheckResiliencyScenarios @ 0x140A1BD98 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140AA7080 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
