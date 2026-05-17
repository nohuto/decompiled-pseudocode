/*
 * XREFs of RtlpMuiRegDupLanguageList @ 0x18007D0E0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18007C4E0 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 *     RtlpDupTebLanguageList @ 0x1800EC0D4 (RtlpDupTebLanguageList.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegDupLanguageList(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 LanguageList; // rax
  __int64 v6; // rdi

  if ( !a1 )
    return 0LL;
  v4 = *(unsigned __int16 *)(a1 + 4);
  LOBYTE(a2) = *(_BYTE *)(a1 + 8);
  LanguageList = RtlpMuiRegCreateLanguageList(v4, a2, *(_QWORD *)(a1 + 16));
  v6 = LanguageList;
  if ( !LanguageList )
    return 0LL;
  if ( (_DWORD)v4 )
  {
    memmove(*(void **)(LanguageList + 24), *(const void **)(a1 + 24), 6 * v4);
    *(_WORD *)(v6 + 4) = v4;
  }
  *(_BYTE *)(v6 + 8) = *(_BYTE *)(a1 + 8);
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(v6 + 40) = *(_DWORD *)(a1 + 40);
  return v6;
}
