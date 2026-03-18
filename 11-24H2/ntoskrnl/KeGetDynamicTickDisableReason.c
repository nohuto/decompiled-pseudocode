/*
 * XREFs of KeGetDynamicTickDisableReason @ 0x1404F9794
 * Callers:
 *     EtwpClockSourceRunDown @ 0x1407B09CC (EtwpClockSourceRunDown.c)
 *     PopDiagTraceDynamicTickStatusRundown @ 0x140A389D0 (PopDiagTraceDynamicTickStatusRundown.c)
 * Callees:
 *     <none>
 */

char KeGetDynamicTickDisableReason()
{
  return KiDynamicTickDisableReason;
}
