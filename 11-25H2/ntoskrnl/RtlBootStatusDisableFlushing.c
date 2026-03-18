/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1404F85D8
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x14073D6BC (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140A83104 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
