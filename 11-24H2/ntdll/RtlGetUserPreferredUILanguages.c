/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x1800C7F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     InitializeTEBUserLangList @ 0x180016D00 (InitializeTEBUserLangList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpCreateLangFallbackList @ 0x1800C8560 (LdrpCreateLangFallbackList.c)
 *     RtlGetSystemPreferredUILanguages @ 0x1800C9E60 (RtlGetSystemPreferredUILanguages.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlIsValidLocaleName @ 0x1800CBF00 (RtlIsValidLocaleName.c)
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
  __int64 v14; // r8
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // eax
  NTSTATUS SystemPreferredUILanguages; // ebx
  __int64 v20; // r14
  int v21; // eax
  _WORD *v22; // rdx
  NTSTATUS v23; // eax
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rsi
  __int64 v28; // rax
  _WORD *v29; // rdx
  __int64 v30; // r9
  int v31; // eax
  __int16 v32; // [rsp+28h] [rbp-51h]
  bool v33; // [rsp+58h] [rbp-21h]
  __int16 v34; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG NumberOfLanguagesa; // [rsp+60h] [rbp-19h] BYREF
  ULONG v36; // [rsp+64h] [rbp-15h]
  __int64 v37; // [rsp+68h] [rbp-11h] BYREF
  int v38[2]; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v39; // [rsp+78h] [rbp-1h]
  __int64 v40; // [rsp+80h] [rbp+7h] BYREF
  __int64 v41; // [rsp+88h] [rbp+Fh]
  unsigned int LocaleNameb; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v34 = -1;
  v37 = 0LL;
  v8 = Flags;
  *(_QWORD *)v38 = 0LL;
  NumberOfLanguagesa = 0;
  v36 = 0;
  v40 = 0LL;
  v33 = 0;
  if ( ReturnLength )
    v36 = *ReturnLength;
  if ( LocaleName )
  {
    v8 = 4104;
    v33 = (Flags & 0x80) != 0;
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
  v39 = v11;
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
  result = RtlpCreateProcessRegistryInfo(&v40);
  if ( result < 0 )
    return result;
  if ( LocaleName )
  {
    LOBYTE(v14) = 1;
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v40, LocaleName, v14, &v34) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      *ReturnLength = 2;
      goto LABEL_52;
    }
  }
  InitializeTEBUserLangList(v10 & 1, v40);
  v15 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
  v16 = v40;
  if ( *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1) )
    v17 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
  else
    v17 = *(_QWORD *)(v40 + 48);
  v41 = v17;
  if ( (v10 & 0x800) != 0 )
  {
    if ( !v15 )
      goto LABEL_65;
    *ReturnLength = v36;
    v24 = LdrpConvertLangFallbackListToMultiSz(v15, v16, Languages, ReturnLength, v10, v11, &NumberOfLanguagesa);
    SystemPreferredUILanguages = v24;
    if ( v24 >= 0 && *(_WORD *)(v15 + 4) )
      goto LABEL_30;
    if ( v24 != -1073741789 )
    {
LABEL_65:
      *ReturnLength = v36;
      SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                     (v10 & 8) != 0 ? 2056 : 2052,
                                     LocaleName,
                                     &NumberOfLanguagesa,
                                     Languages,
                                     ReturnLength);
    }
    goto LABEL_29;
  }
  v18 = LdrpCreateLangFallbackList(&v37, v40, 25LL, 0LL);
  SystemPreferredUILanguages = v18;
  if ( (v10 & 0x8080) != 0 )
  {
    if ( v18 >= 0 )
    {
      if ( !v37 )
        goto LABEL_30;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x30, v16, &v37);
      if ( SystemPreferredUILanguages >= 0 )
      {
        v20 = v37;
        *ReturnLength = v36;
        v21 = LdrpConvertLangFallbackListToMultiSz(v20, v16, Languages, ReturnLength, v10, v11, &NumberOfLanguagesa);
        SystemPreferredUILanguages = v21;
        if ( v21 >= 0 && *(_WORD *)(v20 + 4) || v21 == -1073741789 )
          goto LABEL_25;
        *ReturnLength = v36;
        v23 = RtlGetSystemPreferredUILanguages(
                ((v10 & 8) != 0 ? 8 : 4) | 0x8000,
                LocaleName,
                &NumberOfLanguagesa,
                Languages,
                ReturnLength);
        goto LABEL_69;
      }
    }
LABEL_86:
    v20 = v37;
    goto LABEL_25;
  }
  if ( v18 < 0 )
    goto LABEL_86;
  if ( !v37 )
    goto LABEL_30;
  v32 = 0;
  SystemPreferredUILanguages = LdrpMergeLangFallbackLists(v10 | 0x20, v16, &v37);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_86;
  SystemPreferredUILanguages = LdrpCreateLangFallbackList(v38, v16, 25LL, 0LL);
  if ( SystemPreferredUILanguages < 0 )
    goto LABEL_86;
  v20 = v37;
  if ( *(_QWORD *)v38 )
  {
    if ( LocaleName )
    {
      if ( v34 != -1 )
      {
        LOBYTE(v11) = v39;
        v22 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 16LL) + 28LL * v34);
        if ( v22 )
        {
          if ( (*(_BYTE *)v22 & 2) != 0 || v33 && (*(_BYTE *)v22 & 4) != 0 )
            LOBYTE(v11) = 0;
          if ( *(_BYTE *)(*(_QWORD *)v38 + 8LL) )
            v25 = *(_QWORD *)(v16 + 40);
          else
            v25 = v41;
          LdrpMergeParentBaseLanguagesToList((__int64 *)v38, v22, v16, v25, 0);
        }
      }
    }
    else
    {
      v26 = 0;
      LocaleNameb = 0;
      if ( *(_WORD *)(v37 + 4) )
      {
        LOBYTE(v11) = v39;
        v27 = v41;
        do
        {
          v28 = *(_QWORD *)(v20 + 24);
          if ( *(_WORD *)(v28 + 6LL * v26) == 2 )
          {
            v29 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 24) + 16LL) + 28LL * *(__int16 *)(v28 + 6LL * v26 + 4));
            if ( (*(_BYTE *)v29 & 2) != 0 )
              LOBYTE(v11) = 0;
            if ( (*(_BYTE *)v29 & 6) != 0 )
            {
              v30 = *(_BYTE *)(*(_QWORD *)v38 + 8LL) ? *(_QWORD *)(v16 + 40) : v27;
              v31 = LdrpMergeParentBaseLanguagesToList((__int64 *)v38, v29, v16, v30, v32);
              v26 = LocaleNameb;
              SystemPreferredUILanguages = v31;
              if ( v31 >= 0 )
                break;
            }
          }
          LocaleNameb = ++v26;
        }
        while ( v26 < *(unsigned __int16 *)(v20 + 4) );
        v5 = ReturnLength;
      }
      if ( !*(_WORD *)(*(_QWORD *)(v20 + 24) + 6LL * v26) || SystemPreferredUILanguages < 0 )
      {
        *v5 = v36;
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
    v23 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v38, v16, Languages, v5, v10, v11, &NumberOfLanguagesa);
LABEL_69:
    SystemPreferredUILanguages = v23;
  }
LABEL_25:
  if ( v20 )
    RtlpMuiRegFreeLanguageList((_BYTE *)v20);
  if ( *(_QWORD *)v38 )
    RtlpMuiRegFreeLanguageList(*(_BYTE **)v38);
LABEL_29:
  if ( SystemPreferredUILanguages < 0 )
  {
LABEL_52:
    if ( Languages && v36 )
    {
      if ( v36 == 1 )
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
