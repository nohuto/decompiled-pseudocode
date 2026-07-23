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
  int appended; // r12d
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  unsigned int v23; // edi
  __int64 *v24; // rsi
  unsigned __int16 *v25; // rdx
  __int64 v26; // rax
  __int16 v27; // ax
  unsigned __int16 v28; // ax
  __int64 *v29; // rdi
  unsigned int i; // ecx
  unsigned int v32; // eax
  unsigned __int16 *v33; // r9
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int j; // edi
  unsigned __int16 *v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // [rsp+28h] [rbp-71h]
  int v42; // [rsp+28h] [rbp-71h]
  int v43; // [rsp+28h] [rbp-71h]
  char v44; // [rsp+38h] [rbp-61h]
  int v45; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int16 v46[2]; // [rsp+40h] [rbp-59h] BYREF
  int v47; // [rsp+44h] [rbp-55h] BYREF
  int v48; // [rsp+48h] [rbp-51h]
  int v49; // [rsp+4Ch] [rbp-4Dh]
  int v50[2]; // [rsp+50h] [rbp-49h]
  wchar_t *v51[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v52; // [rsp+68h] [rbp-31h]
  unsigned int v53; // [rsp+70h] [rbp-29h]
  unsigned int v54; // [rsp+74h] [rbp-25h]
  __int64 v55; // [rsp+78h] [rbp-21h] BYREF
  _UNICODE_STRING String; // [rsp+80h] [rbp-19h] BYREF
  __int64 v57; // [rsp+90h] [rbp-9h]
  char v58; // [rsp+D8h] [rbp+3Fh]
  __int64 *InstallUILanguageId; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v60; // [rsp+F0h] [rbp+57h]

  v60 = a4;
  InstallUILanguageId = a3;
  v58 = a1;
  v9 = 0;
  v54 = 0;
  v49 = 0;
  LOWORD(v45) = -1;
  v10 = a3;
  LOWORD(v47) = -1;
  v46[0] = -1;
  v12 = a1;
  v55 = 0LL;
  Heap = 0LL;
  v44 = 0;
  v52 = 0LL;
  *(_OWORD *)v51 = 0LL;
  String = 0LL;
  if ( !a3 || !*a3 || !a2 || *(_WORD *)(*a3 + 4) )
    return 3221225485LL;
  v14 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages
    && (UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages, *(_QWORD *)UserPrefLanguages) )
  {
    v16 = *(_DWORD *)(*(_QWORD *)UserPrefLanguages + 40LL);
    v53 = v16;
  }
  else
  {
    v16 = 0;
    v53 = 0;
  }
  *(_QWORD *)v50 = a3;
  if ( !v14 && (v16 & 6) != 0 )
  {
    v54 = HIWORD(v16);
    v44 = 1;
    *(_QWORD *)v50 = &v55;
    appended = LdrpCreateLangFallbackList(&v55, a2, 25LL, 0LL);
    if ( appended < 0 )
      goto LABEL_56;
    v12 = v58;
  }
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  if ( !Heap )
    return 3221225495LL;
  if ( !v14 )
  {
    v18 = v60;
    if ( v60 )
    {
      for ( i = 0; ; i = v48 + 1 )
      {
        v32 = *(unsigned __int16 *)(v18 + 4);
        v48 = i;
        if ( i >= v32 )
          break;
        v33 = (unsigned __int16 *)(*(_QWORD *)(v18 + 24) + 6LL * i);
        if ( *v33 )
        {
          v34 = *(_QWORD *)(v18 + 16);
          v51[1] = Heap;
          v35 = a2;
          LODWORD(v51[0]) = 11141120;
          if ( v34 )
            v35 = v34;
          if ( (int)GetNameFromLangListNode(v35, v33, (_UNICODE_STRING *)v51) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(*(__int64 **)v50, a2, 0, (__int16 *)&v45, v51[1]);
            if ( appended < 0 )
              goto LABEL_56;
          }
          v18 = v60;
        }
      }
      v12 = v58;
    }
  }
  v19 = a5;
  if ( a5 && !v14 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(v19 + 4); ++j )
    {
      v38 = (unsigned __int16 *)(*(_QWORD *)(v19 + 24) + 6LL * j);
      if ( *v38 )
      {
        v39 = *(_QWORD *)(v19 + 16);
        v51[1] = Heap;
        v40 = a2;
        LODWORD(v51[0]) = 11141120;
        if ( v39 )
          v40 = v39;
        if ( (int)GetNameFromLangListNode(v40, v38, (_UNICODE_STRING *)v51) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode(*(__int64 **)v50, a2, 0, (__int16 *)&v45, v51[1]);
          if ( appended < 0 )
            goto LABEL_56;
        }
        v19 = a5;
      }
    }
    v12 = v58;
  }
  v48 = v12 & 0x20;
  if ( (v12 & 0x20) != 0 && ((v20 = a6) != 0 && *(_WORD *)(a6 + 4) || (v20 = a7) != 0 && *(_WORD *)(a7 + 4)) )
  {
    v21 = v20;
    if ( *(_BYTE *)(v20 + 8) )
    {
      v22 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v52 = a8;
      if ( a8 )
      {
LABEL_24:
        v23 = 0;
        if ( *(_WORD *)(v21 + 4) )
        {
          v24 = *(__int64 **)v50;
          do
          {
            v25 = (unsigned __int16 *)(6LL * v23 + *(_QWORD *)(v21 + 24));
            v57 = 6LL * v23;
            if ( *v25 )
            {
              v51[1] = Heap;
              LODWORD(v51[0]) = 11141120;
              if ( (int)GetNameFromLangListNode(a2, v25, (_UNICODE_STRING *)v51) >= 0
                && (int)LdrpLangFallbackListAppendNode(v24, a2, 1, (__int16 *)&v45, v51[1]) >= 0
                && (v12 & 0x10) != 0 )
              {
                v26 = *(_QWORD *)(v21 + 24);
                if ( *(_WORD *)(v57 + v26) == 2 )
                {
                  v27 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v57 + v26 + 4));
                  if ( (v27 & 7) != 0 && ((v27 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList((int)v24, v41) >= 0) )
                    ++v49;
                }
              }
            }
            ++v23;
          }
          while ( v23 < *(unsigned __int16 *)(v21 + 4) );
          v10 = InstallUILanguageId;
        }
        goto LABEL_37;
      }
      v22 = *(_QWORD *)(a2 + 48);
    }
    v52 = v22;
    goto LABEL_24;
  }
LABEL_37:
  LOWORD(InstallUILanguageId) = 0;
  String.Buffer = Heap + 85;
  appended = 0;
  v28 = *(_WORD *)(a2 + 4);
  *(_DWORD *)&String.Length = 11141120;
  if ( !v28 )
  {
    appended = NtQueryInstallUILanguage((LANGID *)&InstallUILanguageId);
    if ( appended < 0 )
      goto LABEL_43;
    if ( NtIsUILanguageComitted() >= 0 )
    {
      RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
      *(_WORD *)(a2 + 4) = (_WORD)InstallUILanguageId;
    }
    v28 = (unsigned __int16)InstallUILanguageId;
  }
  v9 = v28;
LABEL_43:
  if ( appended >= 0 )
  {
    if ( RtlLCIDToCultureName(v9, &String) )
    {
      appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v9, 1, v46);
      if ( appended >= 0 )
      {
        if ( (v58 & 0x40) != 0 || a9 && v49 )
        {
          v29 = *(__int64 **)v50;
          goto LABEL_55;
        }
        v29 = *(__int64 **)v50;
        appended = LdrpLangFallbackListAppendNode(*(__int64 **)v50, a2, 0, (__int16 *)&v47, String.Buffer);
        if ( appended < 0
          || !v48
          || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46[0]) & 6) == 0
          || (appended = LdrpMergeParentBaseLanguagesToList((int)v29, v42), appended >= 0) )
        {
LABEL_55:
          if ( v44 )
          {
            v36 = v53 >> 2;
            LOBYTE(v36) = (v53 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v29, a2, v36, v54, v10);
            if ( appended >= 0 && (v58 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode(v10, a2, 0, (__int16 *)&v47, String.Buffer);
              if ( appended >= 0 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v46[0]) & 6) != 0 )
                appended = LdrpMergeParentBaseLanguagesToList((int)v10, v43);
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
  if ( v55 )
    RtlpMuiRegFreeLanguageList(v55);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)appended;
}
