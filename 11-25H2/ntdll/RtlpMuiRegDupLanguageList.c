/*
 * XREFs of RtlpMuiRegDupLanguageList @ 0x18008A6F8
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpDupTebLanguageList @ 0x180087590 (RtlpDupTebLanguageList.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18008B390 (RtlSetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

void **__fastcall RtlpMuiRegDupLanguageList(__int64 a1)
{
  __int64 v3; // rsi
  void **LanguageList; // rax
  void **v5; // rdi

  if ( !a1 )
    return 0LL;
  v3 = *(unsigned __int16 *)(a1 + 4);
  LanguageList = (void **)RtlpMuiRegCreateLanguageList(
                            *(unsigned __int16 *)(a1 + 4),
                            *(_BYTE *)(a1 + 8),
                            *(_QWORD *)(a1 + 16));
  v5 = LanguageList;
  if ( !LanguageList )
    return 0LL;
  if ( (_DWORD)v3 )
  {
    memmove(LanguageList[3], *(const void **)(a1 + 24), 6 * v3);
    *((_WORD *)v5 + 2) = v3;
  }
  *((_BYTE *)v5 + 8) = *(_BYTE *)(a1 + 8);
  v5[4] = *(void **)(a1 + 32);
  *((_DWORD *)v5 + 10) = *(_DWORD *)(a1 + 40);
  return v5;
}
