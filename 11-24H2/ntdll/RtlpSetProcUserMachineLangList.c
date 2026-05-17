/*
 * XREFs of RtlpSetProcUserMachineLangList @ 0x180036910
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180035CC0 (RtlpQueryDefaultUILanguage.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800EAF60 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetProcUserMachineLangList(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int PreferredUILanguages; // esi
  int v6; // edx
  __int64 v7; // rdx
  __int64 LanguageList; // rcx
  bool v9; // sf
  int v10; // eax
  char v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  PreferredUILanguages = 0;
  v12 = 0LL;
  v11 = 0;
  if ( a1 && (unsigned int)a2 <= 1 )
  {
    if ( (_DWORD)a2 == 1 && *(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 56) && !(_DWORD)a2 )
      return 0LL;
    RtlpInitMuiCriticalSection(a1, a2);
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    if ( *(_QWORD *)(a1 + 64) && v2 == 1 || *(_QWORD *)(a1 + 56) && !v2 )
      goto LABEL_27;
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(a1, v6, v2, 3, (__int64)&v11, (__int64)&v12);
    LanguageList = v12;
    if ( !v12 )
    {
      LOBYTE(v7) = v2 != 1;
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
      RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
      return (unsigned int)PreferredUILanguages;
    }
LABEL_15:
    v10 = *(_DWORD *)(LanguageList + 40) | 0x10;
    *(_DWORD *)(LanguageList + 40) = v10;
    *(_DWORD *)(LanguageList + 40) = v10 | 0x40;
    if ( v2 == 1 )
    {
      *(_QWORD *)(a1 + 64) = LanguageList;
      *(_DWORD *)a1 |= 0x20u;
    }
    else if ( !v2 )
    {
      *(_QWORD *)(a1 + 56) = LanguageList;
      *(_DWORD *)a1 |= 0x10u;
    }
    goto LABEL_27;
  }
  return 3221225485LL;
}
