/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x180015F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     GetLCIDFromLangListNode @ 0x180014860 (GetLCIDFromLangListNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x180016D00 (InitializeTEBUserLangList.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x180099AC0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, unsigned __int8 a2)
{
  DWORD *v4; // rdx
  __int64 LanguageList; // rdi
  DWORD *v6; // rbx
  int RegistryInfo; // ebx
  int v8; // eax
  int PreferredUILanguages; // eax
  __int64 v10; // rdx
  int SystemDefaultUILanguage; // ebp
  char v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  LanguageList = 0LL;
  if ( !DefaultUILanguageId )
  {
LABEL_21:
    SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage((LANGID)DefaultUILanguageId, v4);
    if ( SystemDefaultUILanguage < 0 )
      *DefaultUILanguageId = 0;
    goto LABEL_29;
  }
  *DefaultUILanguageId = 0;
  v6 = (DWORD *)g_RegInfo;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    RegistryInfo = 0;
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    if ( RegistryInfo < 0 )
    {
      v4 = 0LL;
      goto LABEL_21;
    }
    v6 = (DWORD *)g_RegInfo;
  }
  v8 = InitializeTEBUserLangList(a2, v6);
  v4 = v6;
  if ( v8 < 0 )
    goto LABEL_21;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    LanguageList = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v14 = LanguageList;
    if ( !LanguageList )
      goto LABEL_13;
    if ( *(_WORD *)(LanguageList + 4) )
    {
      SystemDefaultUILanguage = GetLCIDFromLangListNode(
                                  v6,
                                  *(unsigned __int16 **)(LanguageList + 24),
                                  DefaultUILanguageId);
      if ( SystemDefaultUILanguage >= 0 )
      {
        LanguageList = 0LL;
        goto LABEL_29;
      }
    }
    LanguageList = 0LL;
  }
  v14 = 0LL;
LABEL_13:
  v13 = 0;
  if ( !v6 )
  {
    v4 = 0LL;
    goto LABEL_21;
  }
  if ( a2 )
  {
    PreferredUILanguages = RtlpMuiRegLoadPreferredUILanguages(
                             (_DWORD)v6,
                             (_DWORD)v4,
                             0,
                             3 - (unsigned int)(a2 != 0),
                             (__int64)&v13,
                             (__int64)&v14);
    LanguageList = v14;
    if ( v14 )
    {
      if ( PreferredUILanguages && v13 && PreferredUILanguages != -1073741801 )
        PreferredUILanguages = 0;
    }
    else
    {
      LOBYTE(v10) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(1LL, v10, v6);
      PreferredUILanguages = 0;
      if ( !LanguageList )
        PreferredUILanguages = -1073741801;
    }
  }
  else
  {
    PreferredUILanguages = RtlpSetProcUserMachineLangList(v6, 0LL);
    if ( PreferredUILanguages >= 0 )
      LanguageList = *((_QWORD *)v6 + 7);
  }
  v4 = v6;
  if ( PreferredUILanguages < 0 )
    goto LABEL_21;
  if ( !LanguageList )
    goto LABEL_21;
  if ( !*(_WORD *)(LanguageList + 4) )
    goto LABEL_21;
  SystemDefaultUILanguage = GetLCIDFromLangListNode(v6, *(unsigned __int16 **)(LanguageList + 24), DefaultUILanguageId);
  v4 = v6;
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_21;
LABEL_29:
  if ( LanguageList )
    RtlpMuiRegFreeLanguageList(LanguageList);
  return (unsigned int)SystemDefaultUILanguage;
}
