/*
 * XREFs of AuthzBasepIsCompareRelevantAttribute @ 0x140A17EB0
 * Callers:
 *     AuthzBasepCompareLegacySecurityAttributesInformation @ 0x140A17DEC (AuthzBasepCompareLegacySecurityAttributesInformation.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 */

bool __fastcall AuthzBasepIsCompareRelevantAttribute(__int64 a1)
{
  return (*(_DWORD *)(a1 + 52) & 0x40) == 0
      && RtlPrefixUnicodeString(&stru_140002F38, (PCUNICODE_STRING)(a1 + 32), 1u) == 0;
}
