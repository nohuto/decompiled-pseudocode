/*
 * XREFs of RtlSetProcessPreferredUILanguages @ 0x18000F8D0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18000FB88 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlSetProcessPreferredUILanguages(int a1, _WORD *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  int v6; // r14d
  int RegistryInfo; // ebp
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int16 v10; // r9
  _WORD *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  _WORD *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v23 = 0LL;
  v6 = a1;
  if ( NtCurrentTeb()->IsImpersonating )
    return 3221225741LL;
  if ( a1 )
  {
    if ( (a1 & 0xC) == 0xC || (a1 & 0xFFFFFFF3) != 0 )
      return 3221225485LL;
  }
  else
  {
    v6 = 8;
  }
  RegistryInfo = 0;
  v8 = g_RegInfo;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v8 = g_RegInfo;
  }
  if ( RegistryInfo < 0 )
    return (unsigned int)RegistryInfo;
  if ( !a2 )
    goto LABEL_45;
  v9 = 4LL;
  if ( (v6 & 4) == 0 )
    v9 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(a2, v9) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetProcessPreferredUILanguages is not a valid multi-string!\n");
  v10 = *a2;
  v11 = a2 + 1;
  if ( *a2 )
    v11 = a2;
  LOBYTE(v3) = v10 == 0;
  while ( *v11 )
  {
    if ( v3 > 0x7FFFFFFF )
      return (unsigned int)-1073741811;
    v12 = 0x7FFFFFFF - v3;
    if ( v3 > 0x7FFFFFFF && v3 != 0 )
      return (unsigned int)-1073741811;
    v13 = 0x7FFFFFFF - v3;
    v14 = v11;
    if ( v12 )
    {
      while ( *v14 )
      {
        ++v14;
        if ( !--v13 )
          goto LABEL_23;
      }
    }
    else
    {
LABEL_23:
      if ( !v13 )
        return (unsigned int)-1073741811;
    }
    v15 = v12 - v13;
    v3 += v15 + 1;
    v11 += v15 + 1;
  }
  v16 = v3 + 1;
  if ( v16 < 2 || v10 || a2[1] )
  {
    RegistryInfo = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v16, v6 | 2u, 26, 5, &v23);
    if ( RegistryInfo < 0 )
    {
      v21 = v23;
      goto LABEL_35;
    }
    v17 = v23;
    if ( !v23 || (v18 = *(unsigned __int16 *)(v23 + 4), !(_WORD)v18) )
    {
      RtlpMuiRegFreeLanguageList(v23);
      return (unsigned int)-1073741823;
    }
    if ( a3 )
      *a3 = v18;
  }
  else
  {
LABEL_45:
    v17 = v23;
  }
  RtlpInitMuiCriticalSection();
  RtlEnterCriticalSection(&RegistryInfoCritSect);
  v19 = v8[9];
  v8[9] = v17;
  ++*((_DWORD *)v8 + 4);
  v20 = v8[12];
  if ( v20 )
    *(_DWORD *)(v20 + 40) |= 0x80u;
  RtlLeaveCriticalSection(&RegistryInfoCritSect);
  if ( v19 )
  {
    v21 = v19;
LABEL_35:
    RtlpMuiRegFreeLanguageList(v21);
  }
  return (unsigned int)RegistryInfo;
}
