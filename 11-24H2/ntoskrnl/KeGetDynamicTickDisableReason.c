/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1404F7074
 * Callers:
 *     EtwpClockSourceRunDown @ 0x1407B0E1C (EtwpClockSourceRunDown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140A2DA90 (PopDiagTraceDynamicTickStatusRundown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
