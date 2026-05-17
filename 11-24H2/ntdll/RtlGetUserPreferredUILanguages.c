/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x1800DA0F0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180036A80 (InitializeTEBUserLangList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetSystemPreferredUILanguages @ 0x18007DD80 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpCreateLangFallbackList @ 0x1800DA720 (LdrpCreateLangFallbackList.c)
 *     RtlIsValidLocaleName @ 0x1800DA8C0 (RtlIsValidLocaleName.c)
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
  int SystemPreferredUILanguages; // ebx
  unsigned __int64 v19; // r14
  int v20; // eax
  _WORD *v21; // rdx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r8d
  __int64 v26; // rsi
  __int64 v27; // rax
  _WORD *v28; // rdx
  __int64 v29; // r9
  int v30; // eax
  __int16 v31; // [rsp+28h] [rbp-51h]
  bool v32; // [rsp+58h] [rbp-21h]
  __int16 v33; // [rsp+5Ch] [rbp-1Dh] BYREF
  int v34; // [rsp+60h] [rbp-19h] BYREF
  unsigned int v35; // [rsp+64h] [rbp-15h]
  unsigned __int64 v36; // [rsp+68h] [rbp-11h] BYREF
  int v37[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-1h]
  __int64 v39; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+88h] [rbp+Fh]
  unsigned int v42; // [rsp+E0h] [rbp+67h]

  v5 = a5;
  v33 = -1;
  v36 = 0LL;
  v8 = a1;
  *(_QWORD *)v37 = 0LL;
  v34 = 0;
  v35 = 0;
  v39 = 0LL;
  v32 = 0;
  if ( a5 )
    v35 = *a5;
  if ( a2 )
  {
    v8 = 4104;
    v32 = (a1 & 0x80) != 0;
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
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
  v38 = v11;
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
  result = RtlpCreateProcessRegistryInfo(&v39, 39040LL);
  if ( (int)result < 0 )
    return result;
  if ( a2 && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v39, a2, 1, &v33) < 0 )
  {
    SystemPreferredUILanguages = -1073741772;
    *a5 = 2;
    goto LABEL_52;
  }
  InitializeTEBUserLangList(v10 & 1, v39);
  v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  v15 = v39;
  if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
    v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
  else
    v16 = *(_QWORD *)(v39 + 48);
  v40 = v16;
  if ( (v10 & 0x800) != 0 )
  {
    if ( !v14 )
      goto LABEL_65;
    *a5 = v35;
    v23 = LdrpConvertLangFallbackListToMultiSz(v14, v15, a4, a5, v10, v11, &v34);
    SystemPreferredUILanguages = v23;
    if ( v23 >= 0 && *(_WORD *)(v14 + 4) )
      goto LABEL_30;
    if ( v23 != -1073741789 )
    {
LABEL_65:
      *a5 = v35;
      SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 2056 : 2052, a2, &v34, a4, a5);
    }
    goto LABEL_29;
  }
  v17 = LdrpCreateLangFallbackList(&v36, v39, 25LL, 0LL);
  SystemPreferredUILanguages = v17;
  if ( (v10 & 0x8080) != 0 )
  {
    if ( v17 >= 0 )
    {
      if ( !v36 )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x30, v15, &v36);
      if ( SystemPreferredUILanguages >= 0 )
      {
        v19 = v36;
        *a5 = v35;
        v20 = LdrpConvertLangFallbackListToMultiSz(v19, v15, a4, a5, v10, v11, &v34);
        SystemPreferredUILanguages = v20;
        if ( v20 >= 0 && *(_WORD *)(v19 + 4) || v20 == -1073741789 )
          goto LABEL_25;
        *a5 = v35;
        v22 = RtlGetSystemPreferredUILanguages(((v10 & 8) != 0 ? 8 : 4) | 0x8000u, a2, &v34, a4, a5);
        goto LABEL_69;
      }
    }
LABEL_86:
    v19 = v36;
    goto LABEL_25;
  }
  if ( v17 < 0 )
    goto LABEL_86;
  if ( !v36 )
    goto LABEL_30;
  v31 = 0;
  SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x20, v15, &v36);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_86;
  SystemPreferredUILanguages = LdrpCreateLangFallbackList(v37, v15, 25LL, 0LL);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_86;
  v19 = v36;
  if ( *(_QWORD *)v37 )
  {
    if ( a2 )
    {
      if ( v33 != -1 )
      {
        LOBYTE(v11) = v38;
        v21 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * v33);
        if ( v21 )
        {
          if ( (*(_BYTE *)v21 & 2) != 0 || v32 && (*(_BYTE *)v21 & 4) != 0 )
            LOBYTE(v11) = 0;
          if ( *(_BYTE *)(*(_QWORD *)v37 + 8LL) )
            v24 = *(_QWORD *)(v15 + 40);
          else
            v24 = v40;
          LdrpMergeParentBaseLanguagesToList((__int64 *)v37, v21, v15, v24, 0);
        }
      }
    }
    else
    {
      v25 = 0;
      v42 = 0;
      if ( *(_WORD *)(v36 + 4) )
      {
        LOBYTE(v11) = v38;
        v26 = v40;
        do
        {
          v27 = *(_QWORD *)(v19 + 24);
          if ( *(_WORD *)(v27 + 6LL * v25) == 2 )
          {
            v28 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * *(__int16 *)(v27 + 6LL * v25 + 4));
            if ( (*(_BYTE *)v28 & 2) != 0 )
              LOBYTE(v11) = 0;
            if ( (*(_BYTE *)v28 & 6) != 0 )
            {
              v29 = *(_BYTE *)(*(_QWORD *)v37 + 8LL) ? *(_QWORD *)(v15 + 40) : v26;
              v30 = LdrpMergeParentBaseLanguagesToList((__int64 *)v37, v28, v15, v29, v31);
              v25 = v42;
              SystemPreferredUILanguages = v30;
              if ( v30 >= 0 )
                break;
            }
          }
          v42 = ++v25;
        }
        while ( v25 < *(unsigned __int16 *)(v19 + 4) );
        v5 = a5;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v19 + 24) + 6LL * v25) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v35;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages((v10 & 8) != 0 ? 4104 : 4100, 0LL, &v34, a4, v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_25;
      }
    }
    v22 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v37, v15, a4, v5, v10, v11, &v34);
LABEL_69:
    SystemPreferredUILanguages = v22;
  }
LABEL_25:
  if ( v19 )
    RtlpMuiRegFreeLanguageList(v19);
  if ( *(_QWORD *)v37 )
    RtlpMuiRegFreeLanguageList(*(unsigned __int64 *)v37);
LABEL_29:
  if ( SystemPreferredUILanguages < 0 )
  {
LABEL_52:
    if ( a4 && v35 )
    {
      if ( v35 == 1 )
        *a4 = 0;
      else
        *(_DWORD *)a4 = 0;
    }
    return (unsigned int)SystemPreferredUILanguages;
  }
LABEL_30:
  *a3 = v34;
  return (unsigned int)SystemPreferredUILanguages;
}
