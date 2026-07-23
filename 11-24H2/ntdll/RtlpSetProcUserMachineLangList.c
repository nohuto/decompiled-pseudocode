/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x180016B90
 * Callers:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpQueryDefaultUILanguage @ 0x180015F40 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180016D00 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800CBFB0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, unsigned int a2)
{
  int PreferredUILanguages; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 LanguageList; // rcx
  bool v9; // sf
  int v10; // eax
  char v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  PreferredUILanguages = 0;
  v12 = 0LL;
  v11 = 0;
  if ( a1 && a2 <= 1 )
  {
    if ( a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !a2 )
      return 0LL;
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( *(_QWORD *)(a1 + 64) && a2 == 1 || *(_QWORD *)(a1 + 56) && !a2 )
      goto LABEL_27;
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, v6, a2, 3, (__int64)&v11, (__int64)&v12);
    LanguageList = v12;
    if ( !v12 )
    {
      LOBYTE(v7) = a2 != 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v7, a1);
      v12 = LanguageList;
      if ( !LanguageList )
      {
        PreferredUILanguages = -1073741801;
        goto LABEL_27;
      }
    }
    v9 = PreferredUILanguages < 0;
    if ( PreferredUILanguages )
    {
      if ( PreferredUILanguages != -1073741801 && v11 )
      {
        PreferredUILanguages = 0;
        goto LABEL_15;
      }
      v9 = PreferredUILanguages < 0;
    }
    if ( v9 )
    {
LABEL_27:
      RtlLeaveCriticalSection(&RegistryInfoCritSect);
      return (unsigned int)PreferredUILanguages;
    }
LABEL_15:
    v10 = *(_DWORD *)(LanguageList + 40) | 0x10;
    *(_DWORD *)(LanguageList + 40) = v10;
    *(_DWORD *)(LanguageList + 40) = v10 | 0x40;
    if ( a2 == 1 )
    {
      *(_QWORD *)(a1 + 64) = LanguageList;
      *(_DWORD *)a1 |= 0x20u;
    }
    else if ( !a2 )
    {
      *(_QWORD *)(a1 + 56) = LanguageList;
      *(_DWORD *)a1 |= 0x10u;
    }
    goto LABEL_27;
  }
  return 3221225485LL;
}
