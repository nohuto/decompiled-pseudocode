/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x1800EDA84
 * Callers:
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180088DA0 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800EF0B0 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800EF3C4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014C210 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RtlpInitAndCallLcidToCultureName(_UNICODE_STRING *a1, wchar_t *a2, LCID a3)
{
  if ( a1 )
  {
    a1->Buffer = a2;
    *(_DWORD *)&a1->Length = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
