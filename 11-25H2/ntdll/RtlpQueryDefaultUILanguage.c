/*
 * XREFs of RtlpQueryDefaultUILanguage @ 0x18008D650
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpInitMuiCriticalSection @ 0x18008BB44 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     GetLCIDFromLangListNode @ 0x18008D8A0 (GetLCIDFromLangListNode.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800A8000 (RtlpGetSystemDefaultUILanguage.c)
 */

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 LanguageList; // rdi
  __int64 v8; // rbx
  int RegistryInfo; // ebx
  int v10; // eax
  int v11; // eax
  int SystemDefaultUILanguage; // ebp
  char v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0LL;
  LanguageList = 0LL;
  if ( !a1 )
  {
LABEL_21:
    SystemDefaultUILanguage = RtlpGetSystemDefaultUILanguage(a1, v6);
    if ( SystemDefaultUILanguage < 0 )
      *a1 = 0;
    goto LABEL_29;
  }
  *a1 = 0;
  v8 = g_RegInfo;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection((__int64)a1, 0LL, a3, a4);
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    RegistryInfo = 0;
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
    if ( RegistryInfo < 0 )
    {
      v6 = 0LL;
      goto LABEL_21;
    }
    v8 = g_RegInfo;
  }
  v10 = InitializeTEBUserLangList(a2, v8);
  v6 = v8;
  if ( v10 < 0 )
    goto LABEL_21;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    LanguageList = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    v15 = LanguageList;
    if ( !LanguageList )
      goto LABEL_13;
    if ( *(_WORD *)(LanguageList + 4) )
    {
      SystemDefaultUILanguage = GetLCIDFromLangListNode(v8, *(_QWORD *)(LanguageList + 24), a1);
      if ( SystemDefaultUILanguage >= 0 )
      {
        LanguageList = 0LL;
        goto LABEL_29;
      }
    }
    LanguageList = 0LL;
  }
  v15 = 0LL;
LABEL_13:
  v14 = 0;
  if ( !v8 )
  {
    v6 = 0LL;
    goto LABEL_21;
  }
  if ( a2 )
  {
    v11 = RtlpMuiRegLoadPreferredUILanguages(v8, v6, 0, 3 - (unsigned int)(a2 != 0), &v14, &v15);
    LanguageList = v15;
    if ( v15 )
    {
      if ( v11 && v14 && v11 != -1073741801 )
        v11 = 0;
    }
    else
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v8);
      v11 = 0;
      if ( !LanguageList )
        v11 = -1073741801;
    }
  }
  else
  {
    v11 = RtlpSetProcUserMachineLangList(v8, 0);
    if ( v11 >= 0 )
      LanguageList = *(_QWORD *)(v8 + 56);
  }
  v6 = v8;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( !LanguageList )
    goto LABEL_21;
  if ( !*(_WORD *)(LanguageList + 4) )
    goto LABEL_21;
  SystemDefaultUILanguage = GetLCIDFromLangListNode(v8, *(_QWORD *)(LanguageList + 24), a1);
  v6 = v8;
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_21;
LABEL_29:
  if ( LanguageList )
    RtlpMuiRegFreeLanguageList(LanguageList);
  return (unsigned int)SystemDefaultUILanguage;
}
