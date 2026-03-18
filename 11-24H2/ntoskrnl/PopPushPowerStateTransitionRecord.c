/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140B6D1E8
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PoPushPowerStateTransitionRecord @ 0x1405D395C (PoPushPowerStateTransitionRecord.c)
 *     PopInitSystemSleeperThread @ 0x140A219E8 (PopInitSystemSleeperThread.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 * Callees:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140428294 (PopPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(__int64 a1, __int64 a2)
{
  return PopPushPowerStateTransitionRecordWithCallback(a1, a2, 0LL, 0, 0LL);
}
