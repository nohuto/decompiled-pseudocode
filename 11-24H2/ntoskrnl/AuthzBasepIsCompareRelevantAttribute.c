/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x140A23AA0
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A239DC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_140002F40, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
