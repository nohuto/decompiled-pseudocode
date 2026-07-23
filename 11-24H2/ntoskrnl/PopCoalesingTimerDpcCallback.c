/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1405D06E0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1403E6AAC (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403E6B24 (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
