/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180035CC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     GetLCIDFromLangListNode @ 0x1800345E0 (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     RtlpInitMuiCriticalSection @ 0x18007CC94 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800D16D0 (RtlpGetSystemDefaultUILanguage.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  __int64 LanguageList; // rdi
  __int64 v6; // rbx
  int RegistryInfo; // ebx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int PreferredUILanguages; // eax
  __int64 v12; // rdx
  int SystemDefaultUILanguage; // ebp
  char v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  LanguageList = 0LL;
  if ( !a1 )
  {
LABEL_21:
    SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(a1, v4);
    if ( SystemDefaultUILanguage < 0 )
      *a1 = 0;
    goto LABEL_29;
  }
  *a1 = 0;
  v6 = g_RegInfo;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection(a1, 0LL);
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    RegistryInfo = 0;
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    if ( RegistryInfo < 0 )
    {
      v4 = 0LL;
      goto LABEL_21;
    }
    v6 = g_RegInfo;
  }
  v8 = InitializeTEBUserLangList(a2, v6);
  v4 = v6;
  if ( v8 < 0 )
    goto LABEL_21;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    LanguageList = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v16 = LanguageList;
    if ( !LanguageList )
      goto LABEL_13;
    if ( *(_WORD *)(LanguageList + 4) )
    {
      SystemDefaultUILanguage = GetLCIDFromLangListNode(v6, *(unsigned __int16 **)(LanguageList + 24), a1);
      if ( SystemDefaultUILanguage >= 0 )
      {
        LanguageList = 0LL;
        goto LABEL_29;
      }
    }
    LanguageList = 0LL;
  }
  v16 = 0LL;
LABEL_13:
  v15 = 0;
  v10 = 3 - (unsigned int)(a2 != 0);
  if ( !v6 )
  {
    v4 = 0LL;
    goto LABEL_21;
  }
  if ( a2 )
  {
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(v6, v4, 0, v10, (__int64)&v15, (__int64)&v16);
    LanguageList = v16;
    if ( v16 )
    {
      if ( PreferredUILanguages && v15 && PreferredUILanguages != -1073741801 )
        PreferredUILanguages = 0;
    }
    else
    {
      LOBYTE(v12) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v12, v6);
      PreferredUILanguages = 0;
      if ( !LanguageList )
        PreferredUILanguages = -1073741801;
    }
  }
  else
  {
    PreferredUILanguages = RtlpSetProcUserMachineLangList(v6, 0LL, v9, v10);
    if ( PreferredUILanguages >= 0 )
      LanguageList = *(_QWORD *)(v6 + 56);
  }
  v4 = v6;
  if ( PreferredUILanguages < 0 )
    goto LABEL_21;
  if ( !LanguageList )
    goto LABEL_21;
  if ( !*(_WORD *)(LanguageList + 4) )
    goto LABEL_21;
  SystemDefaultUILanguage = GetLCIDFromLangListNode(v6, *(unsigned __int16 **)(LanguageList + 24), a1);
  v4 = v6;
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_21;
LABEL_29:
  if ( LanguageList )
    RtlpMuiRegFreeLanguageList(LanguageList);
  return (unsigned int)SystemDefaultUILanguage;
}
