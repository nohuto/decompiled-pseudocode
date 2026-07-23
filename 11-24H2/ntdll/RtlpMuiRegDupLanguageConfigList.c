/*
 * XREFs of RtlpMuiRegDupLanguageConfigList @ 0x1800CB820
 * Callers:
 *     RtlpDupTebLanguageList @ 0x1800CA478 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageConfigList @ 0x180014FEC (RtlpMuiRegCreateLanguageConfigList.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

void **__fastcall RtlpMuiRegDupLanguageConfigList(__int64 a1)
{
  __int64 v2; // rsi
  void **LanguageConfigList; // rax
  void **v4; // rbx

  if ( !a1 )
    return 0LL;
  v2 = *(unsigned __int16 *)(a1 + 4);
  LanguageConfigList = (void **)RtlpMuiRegCreateLanguageConfigList(*(unsigned __int16 *)(a1 + 4));
  v4 = LanguageConfigList;
  if ( !LanguageConfigList )
    return 0LL;
  if ( (_DWORD)v2 )
  {
    memmove(LanguageConfigList[1], *(const void **)(a1 + 8), 12 * v2);
    *((_WORD *)v4 + 2) = v2;
  }
  return v4;
}
