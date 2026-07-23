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

__int64 __fastcall RtlpQueryDefaultUILanguage(_WORD *DefaultUILanguageId, char a2)
{
  DWORD *v4; // rdx
  _WORD *LanguageList; // rdi
  DWORD *v6; // rbx
  int RegistryInfo; // ebx
  int v8; // eax
  int v9; // eax
  NTSTATUS SystemDefaultUILanguage; // ebp
  char v12; // [rsp+60h] [rbp+8h] BYREF
  _WORD *v13; // [rsp+70h] [rbp+18h] BYREF

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
  v8 = InitializeTEBUserLangList(a2, (__int64)v6);
  v4 = v6;
  if ( v8 < 0 )
    goto LABEL_21;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    LanguageList = *(_WORD **)NtCurrentTeb()->UserPrefLanguages;
    v13 = LanguageList;
    if ( !LanguageList )
      goto LABEL_13;
    if ( LanguageList[2] )
    {
      SystemDefaultUILanguage = GetLCIDFromLangListNode(v6, *((_QWORD *)LanguageList + 3), DefaultUILanguageId);
      if ( SystemDefaultUILanguage >= 0 )
      {
        LanguageList = 0LL;
        goto LABEL_29;
      }
    }
    LanguageList = 0LL;
  }
  v13 = 0LL;
LABEL_13:
  v12 = 0;
  if ( !v6 )
  {
    v4 = 0LL;
    goto LABEL_21;
  }
  if ( a2 )
  {
    v9 = RtlpMuiRegLoadPreferredUILanguages(
           (__int64)v6,
           (ULONG)v4,
           0,
           3 - (unsigned int)(a2 != 0),
           &v12,
           (__int64 *)&v13);
    LanguageList = v13;
    if ( v13 )
    {
      if ( v9 && v12 && v9 != -1073741801 )
        v9 = 0;
    }
    else
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, 1, (__int64)v6);
      v9 = 0;
      if ( !LanguageList )
        v9 = -1073741801;
    }
  }
  else
  {
    v9 = RtlpSetProcUserMachineLangList((__int64)v6, 0);
    if ( v9 >= 0 )
      LanguageList = (_WORD *)*((_QWORD *)v6 + 7);
  }
  v4 = v6;
  if ( v9 < 0 )
    goto LABEL_21;
  if ( !LanguageList )
    goto LABEL_21;
  if ( !LanguageList[2] )
    goto LABEL_21;
  SystemDefaultUILanguage = GetLCIDFromLangListNode(v6, *((_QWORD *)LanguageList + 3), DefaultUILanguageId);
  v4 = v6;
  if ( SystemDefaultUILanguage < 0 )
    goto LABEL_21;
LABEL_29:
  if ( LanguageList )
    RtlpMuiRegFreeLanguageList(LanguageList);
  return (unsigned int)SystemDefaultUILanguage;
}
