/*
 * XREFs of PopCoalesingTimerDpcCallback @ 0x1405CE6E0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckForWork @ 0x14047697C (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1404769F4 (PopGetPolicyWorker.c)
 */

void PopCoalesingTimerDpcCallback()
{
  PopGetPolicyWorker(32);
  PopCheckForWork();
}
