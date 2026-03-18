/*
 * XREFs of DownLevelLangIDToLanguageName @ 0x1404B067C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1402F2AFC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1402F4C50 (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140954E84 (PnpGetDeviceInterfacePropertyData.c)
 *     ExpSetPendingUILanguage @ 0x140A6EE30 (ExpSetPendingUILanguage.c)
 *     PnpGetDeviceInstancePropertyData @ 0x140AAC3E0 (PnpGetDeviceInstancePropertyData.c)
 *     RtlLCIDToCultureName @ 0x140AB5EA0 (RtlLCIDToCultureName.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140C37164 (CmSelectQualifiedInstallLanguage.c)
 * Callees:
 *     ?IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z @ 0x1404C2D10 (-IsNeutralLanguageItem@@YAHPEBUCultureDataType@@@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1404C68C0 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     bsearch @ 0x1404FBFE0 (bsearch.c)
 */

__int64 __fastcall DownLevelLangIDToLanguageName(__int16 a1, unsigned __int16 *a2, int a3, int a4)
{
  unsigned __int64 v4; // rsi
  char v5; // bl
  const struct CultureDataType *v7; // rcx
  const unsigned __int16 *v8; // r8
  __int64 v9; // r11
  __int16 Key; // [rsp+40h] [rbp+8h] BYREF

  Key = a1;
  v4 = a3;
  v5 = a4;
  if ( !a2 && a3 )
    return 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 0LL;
  v7 = (const struct CultureDataType *)bsearch(
                                         &Key,
                                         &off_140003A90,
                                         0x1B4uLL,
                                         0x10uLL,
                                         (int (__cdecl *)(const void *, const void *))CompareLangIDs);
  if ( !v7 || (v5 & 2) == 0 && (unsigned int)IsNeutralLanguageItem(v7) )
    return 0LL;
  v8 = *(const unsigned __int16 **)v7;
  v9 = -1LL;
  do
    ++v9;
  while ( v8[v9] );
  if ( a2 && (int)StringCchCopyNW(a2, v4, v8, v9 + 1) < 0 )
    return 0LL;
  else
    return (unsigned int)(v9 + 1);
}
