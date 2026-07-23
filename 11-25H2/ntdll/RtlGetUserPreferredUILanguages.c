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

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // rsi
  ULONG v8; // ebx
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // r12d
  int v12; // eax
  NTSTATUS result; // eax
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // eax
  NTSTATUS SystemPreferredUILanguages; // ebx
  __int64 v19; // r14
  int v20; // eax
  _BYTE *v21; // rdx
  NTSTATUS v22; // eax
  int v23; // eax
  unsigned int v24; // r8d
  __int64 v25; // rax
  _BYTE *v26; // rdx
  int v27; // eax
  int v28; // [rsp+28h] [rbp-51h]
  bool v29; // [rsp+58h] [rbp-21h]
  __int16 v30; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG NumberOfLanguagesa; // [rsp+60h] [rbp-19h] BYREF
  ULONG v32; // [rsp+64h] [rbp-15h]
  __int64 v33; // [rsp+68h] [rbp-11h] BYREF
  int v34[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-1h]
  __int64 v36; // [rsp+80h] [rbp+7h] BYREF
  __int64 v37; // [rsp+88h] [rbp+Fh]
  unsigned int LocaleNameb; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v30 = -1;
  v33 = 0LL;
  v8 = Flags;
  *(_QWORD *)v34 = 0LL;
  NumberOfLanguagesa = 0;
  v32 = 0;
  v36 = 0LL;
  v29 = 0;
  if ( ReturnLength )
    v32 = *ReturnLength;
  if ( LocaleName )
  {
    v8 = 4104;
    v29 = (Flags & 0x80) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( ReturnLength )
        *ReturnLength = 2;
      goto LABEL_52;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return -1073741811;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return -1073741811;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 >> 1;
  LOBYTE(v11) = (v10 & 2) == 0;
  v35 = v11;
  v12 = v10 & 0x9880;
  if ( (v10 & 0x9880) != 0 )
  {
    if ( v12 != 2048 && v12 != 128 && v12 != 4096 && v12 != 0x8000 )
      return -1073741811;
  }
  else
  {
    v10 |= 0x8000u;
  }
  if ( !ReturnLength || *ReturnLength && !Languages )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v36);
  if ( result < 0 )
    return result;
  if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v36, (wchar_t *)LocaleName, 1, &v30) < 0 )
  {
    SystemPreferredUILanguages = -1073741772;
    *ReturnLength = 2;
    goto LABEL_52;
  }
  InitializeTEBUserLangList(v10 & 1, v36);
  v14 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  v15 = v36;
  if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
    v16 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
  else
    v16 = *(_QWORD *)(v36 + 48);
  v37 = v16;
  if ( (v10 & 0x800) != 0 )
  {
    if ( !v14 )
      goto LABEL_65;
    *ReturnLength = v32;
    v23 = LdrpConvertLangFallbackListToMultiSz(v14, v15, Languages, ReturnLength, v10, v11, &NumberOfLanguagesa);
    SystemPreferredUILanguages = v23;
    if ( v23 >= 0 && *(_WORD *)(v14 + 4) )
      goto LABEL_30;
    if ( v23 != -1073741789 )
    {
LABEL_65:
      *ReturnLength = v32;
      SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                     (v10 & 8) != 0 ? 2056 : 2052,
                                     LocaleName,
                                     &NumberOfLanguagesa,
                                     Languages,
                                     ReturnLength);
    }
    goto LABEL_29;
  }
  v17 = LdrpCreateLangFallbackList(&v33, v36, 25LL, 0LL);
  SystemPreferredUILanguages = v17;
  if ( (v10 & 0x8080) != 0 )
  {
    if ( v17 >= 0 )
    {
      if ( !v33 )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v10 | 0x30,
                                     v15,
                                     &v33,
                                     0LL,
                                     0LL,
                                     v14,
                                     *(_QWORD *)(v15 + 56),
                                     v37,
                                     1);
      if ( SystemPreferredUILanguages >= 0 )
      {
        v19 = v33;
        *ReturnLength = v32;
        v20 = LdrpConvertLangFallbackListToMultiSz(v19, v15, Languages, ReturnLength, v10, v11, &NumberOfLanguagesa);
        SystemPreferredUILanguages = v20;
        if ( v20 >= 0 && *(_WORD *)(v19 + 4) || v20 == -1073741789 )
          goto LABEL_25;
        *ReturnLength = v32;
        v22 = RtlGetSystemPreferredUILanguages(
                ((v10 & 8) != 0 ? 8 : 4) | 0x8000,
                LocaleName,
                &NumberOfLanguagesa,
                Languages,
                ReturnLength);
        goto LABEL_67;
      }
    }
LABEL_83:
    v19 = v33;
    goto LABEL_25;
  }
  if ( v17 < 0 )
    goto LABEL_83;
  if ( !v33 )
    goto LABEL_30;
  SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x20, v15, &v33, 0LL, 0LL, v14, 0LL, v37, 0);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_83;
  SystemPreferredUILanguages = LdrpCreateLangFallbackList(v34, v15, 25LL, 0LL);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_83;
  v19 = v33;
  if ( *(_QWORD *)v34 )
  {
    if ( LocaleName )
    {
      if ( v30 != -1 )
      {
        LOBYTE(v11) = v35;
        v21 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * v30);
        if ( v21 )
        {
          if ( (*v21 & 2) != 0 || v29 && (*v21 & 4) != 0 )
            LOBYTE(v11) = 0;
          LdrpMergeParentBaseLanguagesToList((int)v34, v28);
        }
      }
    }
    else
    {
      v24 = 0;
      LocaleNameb = 0;
      if ( *(_WORD *)(v33 + 4) )
      {
        LOBYTE(v11) = v35;
        do
        {
          v25 = *(_QWORD *)(v19 + 24);
          if ( *(_WORD *)(v25 + 6LL * v24) == 2 )
          {
            v26 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 24) + 16LL) + 28LL * *(__int16 *)(v25 + 6LL * v24 + 4));
            if ( (*v26 & 2) != 0 )
              LOBYTE(v11) = 0;
            if ( (*v26 & 6) != 0 )
            {
              v27 = LdrpMergeParentBaseLanguagesToList((int)v34, v28);
              v24 = LocaleNameb;
              SystemPreferredUILanguages = v27;
              if ( v27 >= 0 )
                break;
            }
          }
          LocaleNameb = ++v24;
        }
        while ( v24 < *(unsigned __int16 *)(v19 + 4) );
        v5 = ReturnLength;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v19 + 24) + 6LL * v24) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v32;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v10 & 8) != 0 ? 4104 : 4100,
                                       0LL,
                                       &NumberOfLanguagesa,
                                       Languages,
                                       v5);
        if ( SystemPreferredUILanguages >= 0 )
          goto LABEL_25;
      }
    }
    v22 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v34, v15, Languages, v5, v10, v11, &NumberOfLanguagesa);
LABEL_67:
    SystemPreferredUILanguages = v22;
  }
LABEL_25:
  if ( v19 )
    RtlpMuiRegFreeLanguageList((_BYTE *)v19);
  if ( *(_QWORD *)v34 )
    RtlpMuiRegFreeLanguageList(*(_BYTE **)v34);
LABEL_29:
  if ( SystemPreferredUILanguages < 0 )
  {
LABEL_52:
    if ( Languages && v32 )
    {
      if ( v32 == 1 )
        *Languages = 0;
      else
        *(_DWORD *)Languages = 0;
    }
    return SystemPreferredUILanguages;
  }
LABEL_30:
  *NumberOfLanguages = NumberOfLanguagesa;
  return SystemPreferredUILanguages;
}
