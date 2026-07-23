/*
 * XREFs of RtlSetThreadPreferredUILanguages @ 0x180011A20
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18000FB88 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpInitMuiCriticalSection @ 0x1800115D4 (RtlpInitMuiCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpUpdateTEBLanguage @ 0x180015820 (RtlpUpdateTEBLanguage.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlpInitializeUserList @ 0x1800C87E0 (RtlpInitializeUserList.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800C9DCC (RtlpMuiRegDupLanguageList.c)
 */

__int64 __fastcall RtlSetThreadPreferredUILanguages(int a1, _WORD *a2, int *a3)
{
  unsigned __int64 v3; // rbx
  char v4; // r12
  int v7; // esi
  PVOID v8; // rbp
  int RegistryInfo; // edi
  __int64 v10; // rdx
  __int16 v11; // r9
  _WORD *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _WORD *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned int v18; // ebx
  unsigned __int16 *Heap; // rax
  unsigned __int16 *v20; // rcx
  int v21; // eax
  _BYTE *MergedPrefLanguages; // rcx
  __int64 v23; // rax
  __int64 *UserPrefLanguages; // rcx
  __int64 v25; // rbx
  int v26; // eax
  _QWORD *v27; // rax
  _QWORD *v28; // rdi
  int v29; // eax
  __int64 v30; // rax
  unsigned __int16 *v31; // [rsp+40h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+90h] [rbp+8h] BYREF
  ULONG NumberOfLanguages; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  NumberOfLanguages = 0;
  ReturnLength = 0;
  v31 = 0LL;
  v7 = a1;
  if ( (a1 & 0xFFFF7CF2) != 0 )
    return 3221225485LL;
  if ( (a1 & 0xC) != 0 )
  {
    if ( (a1 & 0xC) == 0xC )
      return 3221225485LL;
  }
  else
  {
    v7 = a1 | 8;
  }
  if ( (v7 & 0x300) == 0x300 || (v7 & 1) != 0 && (v7 & 0x300) != 0 )
    return 3221225485LL;
  v8 = g_RegInfo;
  RegistryInfo = 0;
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
  if ( (v7 & 0x301) != 0 )
  {
    if ( !a2 )
    {
      v4 = 1;
      RtlpInitializeUserList(v8);
      goto LABEL_45;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    v10 = 4LL;
    if ( (v7 & 4) == 0 )
      v10 = 85LL;
    if ( (int)RtlpCheckMuiMultiStringSafe(a2, v10) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlSetThreadPreferredUILanguages is not a valid multi-string!\n");
    v11 = *a2;
    v12 = a2 + 1;
    if ( *a2 )
      v12 = a2;
    LOBYTE(v3) = v11 == 0;
    while ( *v12 )
    {
      if ( v3 > 0x7FFFFFFF )
        return (unsigned int)-1073741811;
      v13 = 0x7FFFFFFF - v3;
      if ( v3 > 0x7FFFFFFF && v3 != 0 )
        return (unsigned int)-1073741811;
      v14 = 0x7FFFFFFF - v3;
      v15 = v12;
      if ( v13 )
      {
        while ( *v15 )
        {
          ++v15;
          if ( !--v14 )
            goto LABEL_26;
        }
      }
      else
      {
LABEL_26:
        if ( !v14 )
          return (unsigned int)-1073741811;
      }
      v16 = v13 - v14;
      v3 += v16 + 1;
      v12 += v16 + 1;
    }
    v18 = v3 + 1;
    if ( v18 < 2 || v11 || a2[1] )
    {
      if ( !v8 )
        return (unsigned int)-1073741801;
      Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x5EuLL);
      v20 = Heap;
      if ( Heap )
      {
        *(_DWORD *)Heap = 94;
        *((_BYTE *)Heap + 8) = 0;
        *((_DWORD *)Heap + 1) = 327680;
        *((_QWORD *)Heap + 3) = Heap + 32;
        *((_DWORD *)Heap + 10) = 0;
        *((_QWORD *)Heap + 2) = v8;
      }
      else
      {
        v20 = 0LL;
      }
      v31 = v20;
      if ( !v20 )
        return (unsigned int)-1073741801;
      RegistryInfo = RtlpMuiRegAddMultiSzToLangFallbackList(g_RegInfo, a2, v18, v7 | 2u, 26, 5, &v31);
      if ( RegistryInfo < 0 )
      {
        RtlpMuiRegFreeLanguageList(v31);
        return (unsigned int)RegistryInfo;
      }
      v21 = v31[2];
      if ( !(_WORD)v21 )
      {
        RtlpMuiRegFreeLanguageList(v31);
        return (unsigned int)-1073741823;
      }
      if ( a3 )
        *a3 = v21;
    }
  }
  if ( NtCurrentTeb()->PreferredLanguages )
  {
    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->PreferredLanguages);
    NtCurrentTeb()->PreferredLanguages = 0LL;
  }
  NtCurrentTeb()->PreferredLanguages = v31;
LABEL_45:
  if ( NtCurrentTeb()->MergedPrefLanguages )
  {
    MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
    if ( (MergedPrefLanguages[40] & 0x40) != 0 )
    {
      v23 = ((__int64 (*)(void))RtlpMuiRegDupLanguageList)();
      MergedPrefLanguages = (_BYTE *)v23;
      if ( !v23 )
        return (unsigned int)-1073741823;
      *(_DWORD *)(v23 + 40) &= ~0x40u;
    }
    *((_DWORD *)MergedPrefLanguages + 10) |= 0x80u;
    NtCurrentTeb()->MergedPrefLanguages = MergedPrefLanguages;
  }
  if ( RegistryInfo || !v4 )
    return (unsigned int)RegistryInfo;
  if ( !NtCurrentTeb()->UserPrefLanguages
    || (UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages, (v25 = *UserPrefLanguages) == 0) )
  {
LABEL_31:
    RtlGetThreadPreferredUILanguages(v7 | 0x30, &NumberOfLanguages, 0LL, &ReturnLength);
    return (unsigned int)RegistryInfo;
  }
  if ( (v7 & 1) != 0 )
  {
    *(_DWORD *)(v25 + 40) &= 0xFFFFFFF9;
    goto LABEL_31;
  }
  v26 = *(_DWORD *)(v25 + 40) & 0x40;
  if ( (v7 & 0x100) != 0 )
  {
    if ( v26 )
    {
      v30 = RtlpMuiRegDupLanguageList(*UserPrefLanguages);
      v25 = v30;
      if ( !v30 )
        return 3221225473LL;
      RegistryInfo = RtlpUpdateTEBLanguage(v30, 0LL, 4LL);
      if ( RegistryInfo )
        return 3221225473LL;
      *(_DWORD *)(v25 + 40) &= ~0x40u;
    }
    *(_DWORD *)(v25 + 40) = *(_DWORD *)(v25 + 40) & 0xFFFFFFF9 | 2;
    if ( (v7 & 0x8000) == 0 )
      goto LABEL_31;
    if ( !a3 )
      goto LABEL_31;
    v29 = *a3;
    if ( !*a3 )
      goto LABEL_31;
LABEL_75:
    *(_WORD *)(v25 + 42) = 0;
    *(_DWORD *)(v25 + 40) |= v29 << 16;
    goto LABEL_31;
  }
  if ( !v26 )
  {
LABEL_72:
    *(_DWORD *)(v25 + 40) = *(_DWORD *)(v25 + 40) & 0xFFFFFFF9 | 4;
    if ( (v7 & 0x8000) == 0 )
      goto LABEL_31;
    if ( !a3 )
      goto LABEL_31;
    v29 = *a3;
    if ( !*a3 )
      goto LABEL_31;
    goto LABEL_75;
  }
  v25 = RtlpMuiRegDupLanguageList(*UserPrefLanguages);
  if ( v25 )
  {
    if ( NtCurrentTeb()->UserPrefLanguages )
    {
      v28 = NtCurrentTeb()->UserPrefLanguages;
    }
    else
    {
      v27 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
      v28 = v27;
      if ( !v27 )
        return 3221225473LL;
      *v27 = 0LL;
      v27[1] = 0LL;
      NtCurrentTeb()->UserPrefLanguages = v27;
    }
    if ( *v28 )
    {
      *(_DWORD *)(v25 + 40) = *(_DWORD *)(*v28 + 40LL);
      RtlpMuiRegFreeLanguageList(*v28);
    }
    *v28 = v25;
    RegistryInfo = 0;
    *(_DWORD *)(v25 + 40) &= ~0x40u;
    goto LABEL_72;
  }
  return 3221225473LL;
}
