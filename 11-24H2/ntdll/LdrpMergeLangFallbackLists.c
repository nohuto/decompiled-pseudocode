/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x1800356C0
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180037120 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpLangFallbackListAppendNode @ 0x180031E20 (LdrpLangFallbackListAppendNode.c)
 *     GetNameFromLangListNode @ 0x180033ED0 (GetNameFromLangListNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800D9B58 (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpCreateLangFallbackList @ 0x1800DA720 (LdrpCreateLangFallbackList.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 */

__int64 LdrpMergeLangFallbackLists(int a1, __int64 a2, ...)
{
  unsigned __int16 v2; // bx
  __int64 *v3; // rsi
  char v5; // r12
  wchar_t *Heap; // r15
  int v7; // edi
  void *UserPrefLanguages; // rcx
  unsigned int v9; // eax
  int appended; // r12d
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 *v17; // rsi
  unsigned __int16 *v18; // rdx
  __int64 v19; // rax
  _WORD *v20; // rdx
  unsigned __int16 v21; // ax
  __int64 *v22; // rdi
  _WORD *v23; // rdx
  __int64 v24; // r9
  unsigned int i; // ecx
  unsigned int v27; // eax
  unsigned __int16 *v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  _WORD *v32; // rdx
  __int64 v33; // rax
  unsigned int j; // edi
  unsigned __int16 *v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  __int16 v38; // [rsp+28h] [rbp-71h]
  __int16 v39; // [rsp+28h] [rbp-71h]
  __int16 v40; // [rsp+28h] [rbp-71h]
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
  va_list va; // [rsp+E8h] [rbp+4Fh]
  __int64 v58; // [rsp+F0h] [rbp+57h]
  __int64 v59; // [rsp+F8h] [rbp+5Fh]
  __int64 v60; // [rsp+100h] [rbp+67h]
  __int64 v61; // [rsp+108h] [rbp+6Fh]
  __int64 v62; // [rsp+110h] [rbp+77h]
  __int64 v63; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v56 = va_arg(va1, __int64 *);
  v58 = va_arg(va1, _QWORD);
  v59 = va_arg(va1, _QWORD);
  v60 = va_arg(va1, _QWORD);
  v61 = va_arg(va1, _QWORD);
  v62 = va_arg(va1, _QWORD);
  v63 = va_arg(va1, _QWORD);
  v55 = a1;
  v2 = 0;
  v51 = 0;
  v46 = 0;
  LOWORD(v42) = -1;
  v3 = v56;
  LOWORD(v44) = -1;
  v43[0] = -1;
  v5 = a1;
  v52 = 0LL;
  Heap = 0LL;
  v41 = 0;
  v49 = 0LL;
  *(_OWORD *)String = 0LL;
  *(_OWORD *)v53 = 0LL;
  if ( !v56 || !*v56 || !a2 || *(_WORD *)(*v56 + 4) )
    return 3221225485LL;
  v7 = a1 & 0x10000;
  if ( NtCurrentTeb()->UserPrefLanguages
    && (UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages, *(_QWORD *)UserPrefLanguages) )
  {
    v9 = *(_DWORD *)(*(_QWORD *)UserPrefLanguages + 40LL);
    v50 = v9;
  }
  else
  {
    v9 = 0;
    v50 = 0;
  }
  *(_QWORD *)v47 = v56;
  if ( !v7 && (v9 & 6) != 0 )
  {
    v51 = HIWORD(v9);
    v41 = 1;
    *(_QWORD *)v47 = &v52;
    appended = LdrpCreateLangFallbackList(&v52, a2, 25LL, 0LL);
    if ( appended < 0 )
      goto LABEL_59;
    v5 = v55;
  }
  v11 = 0LL;
  Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  if ( !Heap )
    return 3221225495LL;
  if ( !v7 )
  {
    v12 = v58;
    if ( v58 )
    {
      for ( i = 0; ; i = v45 + 1 )
      {
        v27 = *(unsigned __int16 *)(v12 + 4);
        v45 = i;
        if ( i >= v27 )
          break;
        v28 = (unsigned __int16 *)(*(_QWORD *)(v12 + 24) + 6LL * i);
        if ( *v28 )
        {
          v29 = *(_QWORD *)(v12 + 16);
          String[1] = Heap;
          v30 = a2;
          LODWORD(String[0]) = 11141120;
          if ( v29 )
            v30 = v29;
          if ( (int)GetNameFromLangListNode(v30, v28, (UNICODE_STRING *)String) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v42, String[1]);
            if ( appended < 0 )
              goto LABEL_59;
          }
          v12 = v58;
        }
      }
      v5 = v55;
    }
  }
  v13 = v59;
  if ( v59 && !v7 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(v13 + 4); ++j )
    {
      v35 = (unsigned __int16 *)(*(_QWORD *)(v13 + 24) + 6LL * j);
      if ( *v35 )
      {
        v36 = *(_QWORD *)(v13 + 16);
        String[1] = Heap;
        v37 = a2;
        LODWORD(String[0]) = 11141120;
        if ( v36 )
          v37 = v36;
        if ( (int)GetNameFromLangListNode(v37, v35, (UNICODE_STRING *)String) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v42, String[1]);
          if ( appended < 0 )
            goto LABEL_59;
        }
        v13 = v59;
      }
    }
    v5 = v55;
  }
  v45 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 && ((v14 = v60) != 0 && *(_WORD *)(v60 + 4) || (v14 = v61) != 0 && *(_WORD *)(v61 + 4)) )
  {
    v11 = v14;
    if ( *(_BYTE *)(v14 + 8) )
    {
      v15 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v49 = v62;
      if ( v62 )
      {
LABEL_24:
        v16 = 0;
        if ( *(_WORD *)(v11 + 4) )
        {
          v17 = *(__int64 **)v47;
          do
          {
            v18 = (unsigned __int16 *)(6LL * v16 + *(_QWORD *)(v11 + 24));
            v54 = 6LL * v16;
            if ( *v18 )
            {
              String[1] = Heap;
              LODWORD(String[0]) = 11141120;
              if ( (int)GetNameFromLangListNode(a2, v18, (UNICODE_STRING *)String) >= 0
                && (int)LdrpLangFallbackListAppendNode(v17, a2, 1, (__int16 *)&v42, String[1]) >= 0
                && (v5 & 0x10) != 0 )
              {
                v19 = *(_QWORD *)(v11 + 24);
                if ( *(_WORD *)(v54 + v19) == 2 )
                {
                  v20 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v54 + v19 + 4));
                  if ( (*v20 & 7) != 0
                    && ((*v20 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v17, v20, a2, v49, v38) >= 0) )
                  {
                    ++v46;
                  }
                }
              }
            }
            ++v16;
          }
          while ( v16 < *(unsigned __int16 *)(v11 + 4) );
          v3 = v56;
        }
        goto LABEL_37;
      }
      v15 = *(_QWORD *)(a2 + 48);
    }
    v49 = v15;
    goto LABEL_24;
  }
LABEL_37:
  LOWORD(v56) = 0;
  v53[1] = Heap + 85;
  appended = 0;
  v21 = *(_WORD *)(a2 + 4);
  LODWORD(v53[0]) = 11141120;
  if ( !v21 )
  {
    appended = NtQueryInstallUILanguage((__int64 **)va);
    if ( appended < 0 )
      goto LABEL_43;
    if ( (int)NtIsUILanguageComitted() >= 0 )
    {
      RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
      *(_WORD *)(a2 + 4) = (_WORD)v56;
    }
    v21 = (unsigned __int16)v56;
  }
  v2 = v21;
LABEL_43:
  if ( appended >= 0 )
  {
    if ( (unsigned __int8)RtlLCIDToCultureName(v2, v53) )
    {
      appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v2, 1, v43);
      if ( appended >= 0 )
      {
        if ( (v55 & 0x40) != 0 || (_BYTE)v63 && v46 )
        {
          v22 = *(__int64 **)v47;
          goto LABEL_58;
        }
        v22 = *(__int64 **)v47;
        appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v44, v53[1]);
        if ( appended < 0
          || !v45
          || (v23 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43[0]), (*(_BYTE *)v23 & 6) == 0)
          || (!v11 || !v49 ? (v24 = *(_QWORD *)(a2 + 40)) : (v24 = v49),
              appended = LdrpMergeParentBaseLanguagesToList(v22, v23, a2, v24, v39),
              appended >= 0) )
        {
LABEL_58:
          if ( v41 )
          {
            v31 = v50 >> 2;
            LOBYTE(v31) = (v50 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v22, a2, v31, v51, v3);
            if ( appended >= 0 && (v55 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode(v3, a2, 0, (__int16 *)&v44, v53[1]);
              if ( appended >= 0 )
              {
                v32 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43[0]);
                if ( (*(_BYTE *)v32 & 6) != 0 )
                {
                  if ( !v11 || (v33 = v49) == 0 )
                    v33 = *(_QWORD *)(a2 + 40);
                  appended = LdrpMergeParentBaseLanguagesToList(v3, v32, a2, v33, v40);
                }
              }
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
LABEL_59:
  if ( v52 )
    RtlpMuiRegFreeLanguageList(v52);
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  return (unsigned int)appended;
}
