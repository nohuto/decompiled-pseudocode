/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x1800A8A50
 * Callers:
 *     <none>
 * Callees:
 *     InitializeTEBUserLangList @ 0x18005D320 (InitializeTEBUserLangList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180089230 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     RtlIsValidLocaleName @ 0x1800A8400 (RtlIsValidLocaleName.c)
 *     LdrpCreateLangFallbackList @ 0x1800A9080 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 */

__int64 __fastcall RtlGetUserPreferredUILanguages(int a1, wchar_t *a2, _DWORD *a3, wchar_t *a4, unsigned int *a5)
{
  unsigned int *v5; // rsi
  int v8; // ebx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r12d
  int v12; // eax
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int SystemPreferredUILanguages; // ebx
  __int64 v21; // r14
  int v22; // eax
  _BYTE *v23; // rdx
  int v24; // eax
  int v25; // eax
  unsigned int v26; // r8d
  __int64 v27; // rax
  _BYTE *v28; // rdx
  int v29; // eax
  int v30; // [rsp+28h] [rbp-51h]
  bool v31; // [rsp+58h] [rbp-21h]
  __int16 v32; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v33; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-15h]
  __int64 v35; // [rsp+68h] [rbp-11h] BYREF
  int v36[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v37; // [rsp+78h] [rbp-1h]
  __int64 v38; // [rsp+80h] [rbp+7h] BYREF
  __int64 v39; // [rsp+88h] [rbp+Fh]
  unsigned int v41; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v32 = -1;
  v35 = 0LL;
  v8 = a1;
  *(_QWORD *)v36 = 0LL;
  v33 = 0;
  v34 = 0;
  v38 = 0LL;
  v31 = 0;
  if ( a5 )
    v34 = *a5;
  if ( a2 )
  {
    v8 = 4104;
    v31 = (a1 & 0x80) != 0;
    if ( !RtlIsValidLocaleName(a2, 2) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( a5 )
        *a5 = 2;
      goto LABEL_52;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return 3221225485LL;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return 3221225485LL;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v37 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) != 0 )
  {
    if ( v12 != 2048 && v12 != 128 && v12 != 4096 && v12 != 0x8000 )
      return 3221225485LL;
  }
  else
  {
    v10 |= 0x8000u;
  }
  if ( !a5 || *a5 && !a4 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo(&v38);
  if ( (int)result < 0 )
    return result;
  if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v38, a2, 1, &v32) < 0 )
  {
    SystemPreferredUILanguages = -1073741772;
    *a5 = 2;
    goto LABEL_52;
  }
  InitializeTEBUserLangList(v10 & 1, v38);
  v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  v15 = v38;
  if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
    v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
  else
    v16 = *(_QWORD *)(v38 + 48);
  v39 = v16;
  if ( (v10 & 0x800) != 0 )
  {
    if ( !v14 )
      goto LABEL_65;
    *a5 = v34;
    v25 = LdrpConvertLangFallbackListToMultiSz(v14, v15, a4, a5, v10, v11, &v33);
    SystemPreferredUILanguages = v25;
    if ( v25 >= 0 && *(_WORD *)(v14 + 4) )
      goto LABEL_30;
    if ( v25 != -1073741789 )
    {
LABEL_65:
      *a5 = v34;
      SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 2056 : 2052, a2, &v33, a4, a5);
    }
    goto LABEL_29;
  }
  v17 = LdrpCreateLangFallbackList(&v35, v38, 25LL, 0LL);
  SystemPreferredUILanguages = v17;
  if ( (v10 & 0x8080) != 0 )
  {
    if ( v17 >= 0 )
    {
      if ( !v35 )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v10 | 0x30,
                                     v15,
                                     &v35,
                                     0LL,
                                     0LL,
                                     v14,
                                     *(_QWORD *)(v15 + 56),
                                     v39,
                                     1);
      if ( SystemPreferredUILanguages >= 0 )
      {
        v21 = v35;
        *a5 = v34;
        v22 = LdrpConvertLangFallbackListToMultiSz(v21, v15, a4, a5, v10, v11, &v33);
        SystemPreferredUILanguages = v22;
        if ( v22 >= 0 && *(_WORD *)(v21 + 4) || v22 == -1073741789 )
          goto LABEL_25;
        *a5 = v34;
        v24 = RtlGetSystemPreferredUILanguages(((v10 & 8) != 0 ? 8 : 4) | 0x8000u, a2, &v33, a4, a5);
        goto LABEL_67;
      }
    }
LABEL_83:
    v21 = v35;
    goto LABEL_25;
  }
  if ( v17 < 0 )
    goto LABEL_83;
  if ( !v35 )
    goto LABEL_30;
  SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x20, v15, &v35, 0LL, 0LL, v14, 0LL, v39, 0);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_83;
  SystemPreferredUILanguages = LdrpCreateLangFallbackList(v36, v15, 25LL, 0LL);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_83;
  v21 = v35;
  if ( *(_QWORD *)v36 )
  {
    if ( a2 )
    {
      if ( v32 != -1 )
      {
        LOBYTE(v11) = v37;
        v23 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * v32);
        if ( v23 )
        {
          if ( (*v23 & 2) != 0 || v31 && (*v23 & 4) != 0 )
            LOBYTE(v11) = 0;
          LdrpMergeParentBaseLanguagesToList((int)v36, v30);
        }
      }
    }
    else
    {
      v26 = 0;
      v41 = 0;
      if ( *(_WORD *)(v35 + 4) )
      {
        LOBYTE(v11) = v37;
        do
        {
          v27 = *(_QWORD *)(v21 + 24);
          if ( *(_WORD *)(v27 + 6LL * v26) == 2 )
          {
            v28 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * *(__int16 *)(v27 + 6LL * v26 + 4));
            if ( (*v28 & 2) != 0 )
              LOBYTE(v11) = 0;
            if ( (*v28 & 6) != 0 )
            {
              v29 = LdrpMergeParentBaseLanguagesToList((int)v36, v30);
              v26 = v41;
              SystemPreferredUILanguages = v29;
              if ( v29 >= 0 )
                break;
            }
          }
          v41 = ++v26;
        }
        while ( v26 < *(unsigned __int16 *)(v21 + 4) );
        v5 = a5;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v21 + 24) + 6LL * v26) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v34;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 4104 : 4100, 0LL, &v33, a4, v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_25;
      }
    }
    v24 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v36, v15, a4, v5, v10, v11, &v33);
LABEL_67:
    SystemPreferredUILanguages = v24;
  }
LABEL_25:
  if ( v21 )
    RtlpMuiRegFreeLanguageList(v21, v18, v19, 0LL);
  if ( *(_QWORD *)v36 )
    RtlpMuiRegFreeLanguageList(*(__int64 *)v36, v18, v19, 0LL);
LABEL_29:
  if ( SystemPreferredUILanguages < 0 )
  {
LABEL_52:
    if ( a4 && v34 )
    {
      if ( v34 == 1 )
        *a4 = 0;
      else
        *(_DWORD *)a4 = 0;
    }
    return (unsigned int)SystemPreferredUILanguages;
  }
LABEL_30:
  *a3 = v33;
  return (unsigned int)SystemPreferredUILanguages;
}
