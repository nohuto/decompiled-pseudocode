/*
 * XREFs of RtlLocaleNameToLcid @ 0x18005C210
 * Callers:
 *     RtlLoadString @ 0x180002D50 (RtlLoadString.c)
 *     LdrpGetParentLangId @ 0x1800A6FA8 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlpMatchUserLanguage @ 0x180115B18 (RtlpMatchUserLanguage.c)
 *     RtlpMatchUILanguage @ 0x180118314 (RtlpMatchUILanguage.c)
 *     RtlpGetCustomCultureData @ 0x180118940 (RtlpGetCustomCultureData.c)
 */

__int64 __fastcall RtlLocaleNameToLcid(wchar_t *String, int *a2, int a3)
{
  char v3; // si
  __int64 v6; // rbx
  int NameIndex; // eax

  v3 = a3;
  if ( !String )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return 3221225713LL;
  v6 = pTblPtrs;
  if ( !pTblPtrs )
  {
    if ( !(unsigned __int8)RtlpLoadNlsData() )
      return 3221225473LL;
    v6 = pTblPtrs;
  }
  NameIndex = RtlpNlsGetNameIndex(String);
  if ( NameIndex >= 0 )
  {
    if ( (v3 & 2) != 0
      || (_mm_lfence(),
          v6 = pTblPtrs,
          (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                    * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                    + *(_QWORD *)(pTblPtrs + 8)
                    + 24LL) & 1) != 0) )
    {
      *a2 = *(_DWORD *)(*(_QWORD *)(v6 + 24) + 8LL * NameIndex + 4) & 0x7FFFFFFF;
      return 0LL;
    }
    return 3221225711LL;
  }
  if ( !(unsigned __int8)RtlpIsCustomLocale(String) )
    return 3221225711LL;
  if ( (v3 & 1) != 0 && (unsigned __int8)RtlpMatchUILanguage(String) )
  {
    *a2 = 5120;
    return 0LL;
  }
  if ( !(unsigned __int8)RtlpMatchUserLanguage(String) )
  {
    if ( (v3 & 2) != 0 || (int)RtlpGetCustomCultureData(String, 0LL, 0LL, 0LL) >= 0 )
    {
      *a2 = 4096;
      return 0LL;
    }
    return 3221225473LL;
  }
  *a2 = 3072;
  return 0LL;
}
