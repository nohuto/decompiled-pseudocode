/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1404F77E4
 * Callers:
 *     EtwpClockSourceRunDown @ 0x1407A15FC (EtwpClockSourceRunDown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140A330F0 (PopDiagTraceDynamicTickStatusRundown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
