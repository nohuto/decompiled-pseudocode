/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1405D2FC0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x1403F2D8C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1403F2E04 (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
