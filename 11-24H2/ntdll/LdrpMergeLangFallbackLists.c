/*
 * XREFs of LdrpMergeLangFallbackLists @ 0x180015940
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800173A0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 * Callees:
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     GetNameFromLangListNode @ 0x1800C7870 (GetNameFromLangListNode.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800C798C (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrpCreateLangFallbackList @ 0x1800C8560 (LdrpCreateLangFallbackList.c)
 *     NtIsUILanguageComitted @ 0x1801621C0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180162BC0 (NtQueryInstallUILanguage.c)
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
  _WORD *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  __int64 *v18; // rsi
  _WORD *v19; // rdx
  __int64 v20; // rax
  _WORD *v21; // rdx
  unsigned __int16 v22; // ax
  __int64 v23; // r8
  __int64 *v24; // rdi
  _WORD *v25; // rdx
  __int64 v26; // r9
  unsigned int i; // ecx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  _WORD *v33; // rdx
  __int64 v34; // rax
  unsigned int j; // edi
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
  wchar_t *v48[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v49; // [rsp+68h] [rbp-31h]
  unsigned int v50; // [rsp+70h] [rbp-29h]
  unsigned int v51; // [rsp+74h] [rbp-25h]
  __int64 v52; // [rsp+78h] [rbp-21h] BYREF
  _UNICODE_STRING String; // [rsp+80h] [rbp-19h] BYREF
  __int64 v54; // [rsp+90h] [rbp-9h]
  char v55; // [rsp+D8h] [rbp+3Fh]
  __int64 *InstallUILanguageId; // [rsp+E8h] [rbp+4Fh] BYREF
  va_list InstallUILanguageIda; // [rsp+E8h] [rbp+4Fh]
  __int64 v58; // [rsp+F0h] [rbp+57h]
  __int64 v59; // [rsp+F8h] [rbp+5Fh]
  __int64 v60; // [rsp+100h] [rbp+67h]
  __int64 v61; // [rsp+108h] [rbp+6Fh]
  __int64 v62; // [rsp+110h] [rbp+77h]
  __int64 v63; // [rsp+118h] [rbp+7Fh]
  va_list va1; // [rsp+120h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(InstallUILanguageIda, a2);
  InstallUILanguageId = va_arg(va1, __int64 *);
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
  v3 = InstallUILanguageId;
  LOWORD(v44) = -1;
  v43[0] = -1;
  v5 = a1;
  v52 = 0LL;
  Heap = 0LL;
  v41 = 0;
  v49 = 0LL;
  *(_OWORD *)v48 = 0LL;
  String = 0LL;
  if ( !InstallUILanguageId || !*InstallUILanguageId || !a2 || *(_WORD *)(*InstallUILanguageId + 4) )
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
  *(_QWORD *)v47 = InstallUILanguageId;
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
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x154uLL);
  if ( !Heap )
    return 3221225495LL;
  if ( !v7 )
  {
    v13 = v58;
    if ( v58 )
    {
      for ( i = 0; ; i = v45 + 1 )
      {
        v29 = *(unsigned __int16 *)(v13 + 4);
        v45 = i;
        if ( i >= v29 )
          break;
        v12 = (_WORD *)(*(_QWORD *)(v13 + 24) + 6LL * i);
        if ( *v12 )
        {
          v30 = *(_QWORD *)(v13 + 16);
          v48[1] = Heap;
          v31 = a2;
          LODWORD(v48[0]) = 11141120;
          if ( v30 )
            v31 = v30;
          if ( (int)GetNameFromLangListNode(v31, v12, v48, v12) >= 0 )
          {
            appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v42, v48[1]);
            if ( appended < 0 )
              goto LABEL_59;
          }
          v13 = v58;
        }
      }
      v5 = v55;
    }
  }
  v14 = v59;
  if ( v59 && !v7 )
  {
    for ( j = 0; j < *(unsigned __int16 *)(v14 + 4); ++j )
    {
      v12 = (_WORD *)(*(_QWORD *)(v14 + 24) + 6LL * j);
      if ( *v12 )
      {
        v36 = *(_QWORD *)(v14 + 16);
        v48[1] = Heap;
        v37 = a2;
        LODWORD(v48[0]) = 11141120;
        if ( v36 )
          v37 = v36;
        if ( (int)GetNameFromLangListNode(v37, v12, v48, v12) >= 0 )
        {
          appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v42, v48[1]);
          if ( appended < 0 )
            goto LABEL_59;
        }
        v14 = v59;
      }
    }
    v5 = v55;
  }
  v45 = v5 & 0x20;
  if ( (v5 & 0x20) != 0 && ((v15 = v60) != 0 && *(_WORD *)(v60 + 4) || (v15 = v61) != 0 && *(_WORD *)(v61 + 4)) )
  {
    v11 = v15;
    if ( *(_BYTE *)(v15 + 8) )
    {
      v16 = *(_QWORD *)(a2 + 40);
    }
    else
    {
      v49 = v62;
      if ( v62 )
      {
LABEL_24:
        v17 = 0;
        if ( *(_WORD *)(v11 + 4) )
        {
          v18 = *(__int64 **)v47;
          do
          {
            v19 = (_WORD *)(6LL * v17 + *(_QWORD *)(v11 + 24));
            v54 = 6LL * v17;
            if ( *v19 )
            {
              v48[1] = Heap;
              LODWORD(v48[0]) = 11141120;
              if ( (int)GetNameFromLangListNode(a2, v19, v48, v12) >= 0
                && (int)LdrpLangFallbackListAppendNode(v18, a2, 1, (__int16 *)&v42, v48[1]) >= 0
                && (v5 & 0x10) != 0 )
              {
                v20 = *(_QWORD *)(v11 + 24);
                if ( *(_WORD *)(v54 + v20) == 2 )
                {
                  v21 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * *(__int16 *)(v54 + v20 + 4));
                  if ( (*v21 & 7) != 0
                    && ((*v21 & 6) == 0 || (int)LdrpMergeParentBaseLanguagesToList(v18, v21, a2, v49, v38) >= 0) )
                  {
                    ++v46;
                  }
                }
              }
            }
            ++v17;
          }
          while ( v17 < *(unsigned __int16 *)(v11 + 4) );
          v3 = InstallUILanguageId;
        }
        goto LABEL_37;
      }
      v16 = *(_QWORD *)(a2 + 48);
    }
    v49 = v16;
    goto LABEL_24;
  }
LABEL_37:
  LOWORD(InstallUILanguageId) = 0;
  String.Buffer = Heap + 85;
  appended = 0;
  v22 = *(_WORD *)(a2 + 4);
  *(_DWORD *)&String.Length = 11141120;
  if ( !v22 )
  {
    appended = NtQueryInstallUILanguage((LANGID *)InstallUILanguageIda);
    if ( appended < 0 )
      goto LABEL_43;
    if ( NtIsUILanguageComitted() >= 0 )
    {
      RtlpLoadInstallLanguageFallback(a2, a2 + 6, a2 + 8);
      *(_WORD *)(a2 + 4) = (_WORD)InstallUILanguageId;
    }
    v22 = (unsigned __int16)InstallUILanguageId;
  }
  v2 = v22;
LABEL_43:
  if ( appended >= 0 )
  {
    if ( RtlLCIDToCultureName(v2, &String) )
    {
      LOBYTE(v23) = 1;
      appended = RtlpMuiRegGetInstalledLanguageIndexByLangId(a2, v2, v23, v43);
      if ( appended >= 0 )
      {
        if ( (v55 & 0x40) != 0 || (_BYTE)v63 && v46 )
        {
          v24 = *(__int64 **)v47;
          goto LABEL_58;
        }
        v24 = *(__int64 **)v47;
        appended = LdrpLangFallbackListAppendNode(*(__int64 **)v47, a2, 0, (__int16 *)&v44, String.Buffer);
        if ( appended < 0
          || !v45
          || (v25 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43[0]), (*(_BYTE *)v25 & 6) == 0)
          || (!v11 || !v49 ? (v26 = *(_QWORD *)(a2 + 40)) : (v26 = v49),
              appended = LdrpMergeParentBaseLanguagesToList(v24, v25, a2, v26, v39),
              appended >= 0) )
        {
LABEL_58:
          if ( v41 )
          {
            v32 = v50 >> 2;
            LOBYTE(v32) = (v50 & 4) != 0;
            appended = RtlpFilterandReplaceConsoleLanguages(*v24, a2, v32, v51, v3);
            if ( appended >= 0 && (v55 & 0x30) == 0x30 )
            {
              appended = LdrpLangFallbackListAppendNode(v3, a2, 0, (__int16 *)&v44, String.Buffer);
              if ( appended >= 0 )
              {
                v33 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL) + 28LL * v43[0]);
                if ( (*(_BYTE *)v33 & 6) != 0 )
                {
                  if ( !v11 || (v34 = v49) == 0 )
                    v34 = *(_QWORD *)(a2 + 40);
                  appended = LdrpMergeParentBaseLanguagesToList(v3, v33, a2, v34, v40);
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
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return (unsigned int)appended;
}
