/*
 * XREFs of RtlpMuiRegDupLanguageConfigList @ 0x18008743C
 * Callers:
 *     RtlpDupTebLanguageList @ 0x180087590 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18008C6FC (RtlpMuiRegCreateLanguageConfigList.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegDupLanguageConfigList(__int64 a1)
{
  __int64 v2; // rsi
  __int64 LanguageConfigList; // rax
  __int64 v4; // rbx

  if ( !a1 )
    return 0LL;
  v2 = *(unsigned __int16 *)(a1 + 4);
  LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(v2);
  v4 = LanguageConfigList;
  if ( !LanguageConfigList )
    return 0LL;
  if ( (_DWORD)v2 )
  {
    memmove(*(void **)(LanguageConfigList + 8), *(const void **)(a1 + 8), 12 * v2);
    *(_WORD *)(v4 + 4) = v2;
  }
  return v4;
}
