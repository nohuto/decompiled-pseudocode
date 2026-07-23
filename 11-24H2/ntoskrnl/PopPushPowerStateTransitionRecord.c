/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140B6EA88
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     PoPushPowerStateTransitionRecord @ 0x1405D107C (PoPushPowerStateTransitionRecord.c)
 *     PopInitSystemSleeperThread @ 0x1408F8198 (PopInitSystemSleeperThread.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 * Callees:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14041C424 (PopPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(LARGE_INTEGER a1, LONGLONG a2)
{
  return PopPushPowerStateTransitionRecordWithCallback(a1, a2, 0LL, 0, 0LL);
}
