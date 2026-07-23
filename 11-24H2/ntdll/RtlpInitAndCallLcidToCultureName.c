/*
 * XREFs of RtlpInitAndCallLcidToCultureName @ 0x1800E83D4
 * Callers:
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800CB614 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800DD218 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1800DD52C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
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
