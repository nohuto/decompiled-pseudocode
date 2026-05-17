/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x18008D050
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x18005D9C0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800A8A50 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x18005A8F0 (LdrpLangFallbackListAppendNode.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     GetNameFromLangListNode @ 0x18008BF90 (GetNameFromLangListNode.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800A84AC (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpCreateLangFallbackList @ 0x1800A9080 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     NtIsUILanguageComitted @ 0x180165390 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall LdrpMergeLangFallbackLists(
        int a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned __int16 v9; // bx
  __int64 *v10; // rsi
  char v12; // r12
  wchar_t *Heap; // r15
  int v14; // edi
  void *UserPrefLanguages; // rcx
  unsigned int v16; // eax
  unsigned __int16 *v17; // r9
  int appended; // r12d
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 *v25; // rsi
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  __int64 *v28; // rdi
  unsigned int i; // ecx
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int j; // edi
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // [rsp+28h] [rbp-71h]
  int v39; // [rsp+28h] [rbp-71h]
  int v40; // [rsp+28h] [rbp-71h]
  char v41; // [rsp+38h] [rbp-61h]
  int v42; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int16 v43[2]; // [rsp+40h] [rbp-59h] BYREF
  int v44; // [rsp+44h] [rbp-55h] BYREF
  int v45; // [rsp+48h] [rbp-51h]
  int v46; // [rsp+4Ch] [rbp-4Dh]
  int v47[2]; // [rsp+50h] [rbp-49h]
  wchar_t *String[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v49; // [rsp+68h] [rbp-31h]
  unsigned int v50; // [rsp+70h] [rbp-29h]
  unsigned int v51; // [rsp+74h] [rbp-25h]
  __int64 v52; // [rsp+78h] [rbp-21h] BYREF
  wchar_t *v53[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v54; // [rsp+90h] [rbp-9h]
  char v55; // [rsp+D8h] [rbp+3Fh]
  __int64 *v56; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v57; // [rsp+F0h] [rbp+57h]

  v57 = a4;
  v56 = a3;
  v55 = a1;
  v9 = 0;
  v51 = 0;
  v46 = 0;
  LOWORD(v42) = -1;
  v10 = a3;
  LOWORD(v44) = -1;
  v43[0] = -1;
  v12 = a1;
  v52 = 0LL;
  Heap = 0LL;
  v41 = 0;
  v49 = 0LL;
  *(_OWORD *)String = 0LL;
  *(_OWORD *)v53 = 0LL;
  if ( !a3 || !*a3 || !a2 || *(_WORD *)(*a3 + 4) )
    return 3221225485LL;
  v14 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages
    && (UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages, *(_QWORD *)UserPrefLanguages) )
  {
    v16 = *(_DWORD *)(*(_QWORD *)UserPrefLanguages + 40LL);
    v50 = v16;
  }
  else
  {
    v16 = 0;
    v50 = 0;
  }
  *(_QWORD *)v47 = a3;
  if ( !v14 && (v16 & 6) != 0 )
  {
    v51 = HIWORD(v16);
    v41 = 1;
    *(_QWORD *)v47 = &v52;
    appended = LdrpCreateLangFallbackList(&v52, a2, 25LL, 0LL);
    if ( appended < 0 )
      goto LABEL_56;
    v12 = v55;
  }
  Heap = (wchar_t *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  if ( !Heap )
    return 3221225495LL;
  if ( !v14 )
  {
    v19 = v57;
    if ( v57 )
    {
      for ( i = 0; ; i = v45 + 1 )
      {
        v31 = *(unsigned __int16 *)(v19 + 4);
        v45 = i;
        if ( i >= v31 )
          break;
        v17 = (unsigned __int16 *)(*(_QWORD *)(v19 + 24) + 6LL * i);
        if ( *v17 )
        {
          v32 = *(_QWORD *)(v19 + 16);
          String[1] = Heap;
          v33 = a2;
          LODWORD(String[0]) = 11141120;
          if ( v32 )
            v33 = v32;
          if ( (int)GetNameFromLangListNode(v33, v17, (UNICODE_STRING *)String) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v42, String[1]);
            if ( appended < 0 )
              goto LABEL_56;
          }
          v19 = v57;
        }
      }
      v12 = v55;
    }
  }
  v20 = a5;
  if ( a5 && !v14 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(v20 + 4); ++j )
    {
      v17 = (unsigned __int16 *)(*(_QWORD *)(v20 + 24) + 6LL * j);
      if ( *v17 )
      {
        v36 = *(_QWORD *)(v20 + 16);
        String[1] = Heap;
        v37 = a2;
        LODWORD(String[0]) = 11141120;
        if ( v36 )
          v37 = v36;
        if ( (int)GetNameFromLangListNode(v37, v17, (UNICODE_STRING *)String) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v42, String[1]);
          if ( appended < 0 )
            goto LABEL_56;
        }
        v20 = a5;
      }
    }
    v12 = v55;
  }
  v45 = v12 & 0x20;
  if ( (v12 & 0x20) != 0 && ((v21 = a6) != 0 && *(_WORD *)(a6 + 4) || (v21 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v22 = v21;
    if ( *(_BYTE *)(v21 + 8) )
    {
      v23 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v49 = a8;
      if ( a8 )
      {
LABEL_24:
        v24 = 0;
        if ( *(_WORD *)(v22 + 4) )
        {
          v25 = *(__int64 **)v47;
          do
          {
            v20 = 6LL * v24 + *(_QWORD *)(v22 + 24);
            v54 = 6LL * v24;
            if ( *(_WORD *)v20 )
            {
              String[1] = Heap;
              LODWORD(String[0]) = 11141120;
              if ( (int)GetNameFromLangListNode(a2, (unsigned __int16 *)v20, (UNICODE_STRING *)String) >= 0
                && (int)LdrpLangFallbackListAppendNode(v25, a2, 1, (__int16 *)&v42, String[1]) >= 0
                && (v12 & 0x10) != 0 )
              {
                v26 = *(_QWORD *)(v22 + 24);
                if ( *(_WORD *)(v54 + v26) == 2 )
                {
                  v20 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v54 + v26 + 4);
                  if ( (*(_WORD *)v20 & 7) != 0
                    && ((*(_WORD *)v20 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList((int)v25, v38) >= 0) )
                  {
                    ++v46;
                  }
                }
              }
            }
            ++v24;
          }
          while ( v24 < *(unsigned __int16 *)(v22 + 4) );
          v10 = v56;
        }
        goto LABEL_37;
      }
      v23 = *(_QWORD *)(a2 + 48);
    }
    v49 = v23;
    goto LABEL_24;
  }
LABEL_37:
  LOWORD(v56) = 0;
  v53[1] = Heap + 85;
  appended = 0;
  v27 = *(_WORD *)(a2 + 4);
  LODWORD(v53[0]) = 11141120;
  if ( !v27 )
  {
    appended = NtQueryInstallUILanguage(&v56, v20, 170LL);
    if ( appended < 0 )
      goto LABEL_43;
    if ( (int)NtIsUILanguageComitted() >= 0 )
    {
      RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
      *(_WORD *)(a2 + 4) = (_WORD)v56;
    }
    v27 = (unsigned __int16)v56;
  }
  v9 = v27;
LABEL_43:
  if ( appended >= 0 )
  {
    if ( (unsigned __int8)RtlLCIDToCultureName(v9, (__int64)v53) )
    {
      appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v9, 1, v43);
      if ( appended >= 0 )
      {
        if ( (v55 & 0x40) != 0 || a9 && v46 )
        {
          v28 = *(__int64 **)v47;
          goto LABEL_55;
        }
        v28 = *(__int64 **)v47;
        appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v44, v53[1]);
        if ( appended < 0
          || !v45
          || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43[0]) & 6) == 0
          || (appended = LdrpMergeParentBaseLanguagesToList((int)v28, v39), appended >= 0) )
        {
LABEL_55:
          if ( v41 )
          {
            v34 = v50 >> 2;
            LOBYTE(v34) = (v50 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v28, a2, v34, v51, v10);
            if ( appended >= 0 && (v55 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode(v10, a2, 0, (__int16 *)&v44, v53[1]);
              if ( appended >= 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43[0]) & 6) != 0 )
                appended = LdrpMergeParentBaseLanguagesToList((int)v10, v40);
            }
          }
        }
      }
    }
    else
    {
      appended = -1073741823;
    }
  }
LABEL_56:
  if ( v52 )
    RtlpMuiRegFreeLanguageList(v52);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, (__int64)v17);
  return (unsigned int)appended;
}
