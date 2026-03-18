/*
 * XREFs of ExpCapabilityCheck @ 0x140A62804
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x140AA0B18 (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140A62840 (RtlCapabilityCheck.c)
 */

char __fastcall ExpCapabilityCheck(PCUNICODE_STRING String2)
{
  if ( (int)RtlCapabilityCheck(0LL, String2) >= 0 )
    return 0;
  else
    return 0;
}
