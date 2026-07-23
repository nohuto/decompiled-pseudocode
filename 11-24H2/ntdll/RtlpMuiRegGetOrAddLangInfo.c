/*
 * XREFs of RtlpMuiRegGetOrAddLangInfo @ 0x180147C44
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x180147570 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x180148248 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetLangInfoIndex @ 0x180147B1C (RtlpMuiRegGetLangInfoIndex.c)
 *     RtlpMuiRegGrowLanguages @ 0x180147D9C (RtlpMuiRegGrowLanguages.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddLangInfo(__int64 *a1, __int64 a2, __int16 *a3)
{
  __int64 v6; // rbx
  __int16 LangInfoIndex; // ax
  __int64 v8; // rdx
  __int16 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx

  if ( !a1 )
    return 3221225485LL;
  v6 = *a1;
  if ( !*a1 || !a2 || !*(_WORD *)(a2 + 4) && *(__int16 *)(a2 + 6) < 0 )
    return 3221225485LL;
  LangInfoIndex = RtlpMuiRegGetLangInfoIndex(*a1, (char *)a2);
  v9 = LangInfoIndex;
  if ( LangInfoIndex < 0 )
  {
    if ( *(_WORD *)(v6 + 6) >= *(_WORD *)(v6 + 4) )
    {
      v10 = RtlpMuiRegGrowLanguages(v6, v8, (unsigned __int16)LangInfoIndex);
      v6 = v10;
      if ( !v10 )
        return 3221225495LL;
      *a1 = v10;
    }
    v9 = *(_WORD *)(v6 + 6);
    v11 = *(_QWORD *)(v6 + 16);
    v12 = 28LL * v9;
    *(_WORD *)(v6 + 6) = v9 + 1;
    *(_OWORD *)(v12 + v11) = *(_OWORD *)a2;
    *(_QWORD *)(v12 + v11 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v12 + v11 + 24) = *(_DWORD *)(a2 + 24);
  }
  if ( a3 )
    *a3 = v9;
  return 0LL;
}
