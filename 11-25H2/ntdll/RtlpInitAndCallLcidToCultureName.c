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

__int64 __fastcall RtlpInitAndCallLcidToCultureName(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 8) = a2;
    *(_DWORD *)a1 = 11141120;
  }
  return RtlLCIDToCultureName(a3, a1);
}
