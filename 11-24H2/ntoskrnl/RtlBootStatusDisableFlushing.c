/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1404F8358
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x140747A48 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140A84124 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
