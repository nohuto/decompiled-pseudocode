/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140B5E108
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     PoPushPowerStateTransitionRecord @ 0x1405CEF04 (PoPushPowerStateTransitionRecord.c)
 *     PopInitSystemSleeperThread @ 0x140A16CC8 (PopInitSystemSleeperThread.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 * Callees:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(LARGE_INTEGER a1, LONGLONG a2)
{
  return PopPushPowerStateTransitionRecordWithCallback(a1, a2, 0LL, 0, 0LL);
}
