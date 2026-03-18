/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x1404FAA78
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x140749718 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140A87C34 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
