/*
 * XREFs of DownLevelLanguageNameToLangID @ 0x1404B9498
 * Callers:
 *     LdrpGetParentLangId @ 0x1404B40F0 (LdrpGetParentLangId.c)
 *     RtlLoadString @ 0x14076FC90 (RtlLoadString.c)
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 *     RtlCultureNameToLCID @ 0x140A91310 (RtlCultureNameToLCID.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1404C2D10 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 */

__int64 __fastcall DownLevelLanguageNameToLangID(const void *a1, int a2)
{
  char v2; // bl
  _BYTE *v3; // rax
  wchar_t **v5; // rcx

  v2 = a2;
  if ( a1
    && (a2 & 0xFFFFFFFD) == 0
    && (v3 = bsearch(a1, &off_140005610, 0x1B3uLL, 8uLL, (int (__cdecl *)(const void *, const void *))CompareLangName)) != 0LL
    && ((v5 = &(&off_140003A90)[2 * word_140038CB0[(v3 - (_BYTE *)&off_140005610) >> 3]], (v2 & 2) != 0)
     || !(unsigned int)IsNeutralLanguageItem((const struct CultureDataType *)v5)) )
  {
    return *((unsigned __int16 *)v5 + 4);
  }
  else
  {
    return 0LL;
  }
}
