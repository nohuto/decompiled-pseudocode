/*
 * XREFs of ndisIsWdfMiniportConfigurationKeywordDeprecated @ 0x140045390
 * Callers:
 *     NdisWdfReadConfiguration @ 0x1400444D0 (NdisWdfReadConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsWdfMiniportConfigurationKeywordDeprecated(PCUNICODE_STRING String1)
{
  const UNICODE_STRING *i; // rbx

  for ( i = &stru_1400F2E60; i != (const UNICODE_STRING *)&unk_1400F2F50; ++i )
  {
    if ( RtlEqualUnicodeString(String1, i, 1u) )
      return 1;
  }
  return 0;
}
