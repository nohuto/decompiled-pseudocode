/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1404B3408
 * Callers:
 *     LdrpGetParentLangId @ 0x1404AE270 (LdrpGetParentLangId.c)
 *     RtlLoadString @ 0x14077EE10 (RtlLoadString.c)
 *     LdrResSearchResource @ 0x1408E01B0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140A91BE0 (RtlCultureNameToLCID.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C4A598 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1404BCAF0 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1404FC020 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v5; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140005620, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName)) != 0LL
    && ((v5 = &(&off_140003AA0)[2 * word_140039620[(v3 - (_BYTE *)&off_140005620) >> 3]], (v2 & 2) != 0)
     || !(unsigned int)IsNeutralLanguageItem((const struct CultureDataType *)v5)) )
  {
    return *((unsigned __int16 *)v5 + 4);
  }
  else
  {
    return 0LL;
  }
}
