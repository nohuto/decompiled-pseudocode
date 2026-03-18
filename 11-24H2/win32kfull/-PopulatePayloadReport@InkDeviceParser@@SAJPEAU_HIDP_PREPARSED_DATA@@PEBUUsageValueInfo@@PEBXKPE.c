/*
 * XREFs of ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1402EAC38
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402ED240 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall InkDeviceParser::PopulatePayloadReport(
        PHIDP_PREPARSED_DATA PreparsedData,
        const struct UsageValueInfo *a2,
        CHAR *UsageValue,
        __int64 a4,
        PCHAR Report,
        ULONG ReportLength)
{
  *Report = *((_BYTE *)a2 + 6);
  return HidP_SetUsageValueArray(
           HidP_Output,
           *((_WORD *)a2 + 2),
           *((_WORD *)a2 + 5),
           *((_WORD *)a2 + 30),
           UsageValue,
           0x48u,
           PreparsedData,
           Report,
           ReportLength);
}
