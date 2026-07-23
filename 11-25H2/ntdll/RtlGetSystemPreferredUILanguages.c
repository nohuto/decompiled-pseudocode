/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x180089230
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x1800A8A50 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpSetProcUserMachineLangList @ 0x18005D1B0 (RtlpSetProcUserMachineLangList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18005E960 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180089780 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpMergeLangFallbackLists @ 0x18008D050 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18008D870 (RtlpMuiRegFreeLanguageList.c)
 *     RtlIsValidLocaleName @ 0x1800A8400 (RtlIsValidLocaleName.c)
 *     LdrpCreateLangFallbackList @ 0x1800A9080 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800A93A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

NTSTATUS __cdecl RtlGetSystemPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PZZWSTR v6; // rsi
  ULONG v8; // r12d
  ULONG v9; // edi
  bool v10; // r15
  NTSTATUS result; // eax
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 LanguageList; // rsi
  NTSTATUS v17; // ebx
  int v18; // eax
  char v19; // r15
  wchar_t *v20; // r8
  __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r9
  int LangFallbackList; // eax
  char v25; // r8
  _WORD *v26; // r10
  NTSTATUS v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int16 v31; // ax
  int v32; // eax
  unsigned int v33; // eax
  int v34; // [rsp+20h] [rbp-60h]
  char v35; // [rsp+20h] [rbp-60h]
  unsigned __int16 v36[2]; // [rsp+50h] [rbp-30h] BYREF
  ULONG v37; // [rsp+54h] [rbp-2Ch] BYREF
  int v38; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+60h] [rbp-20h] BYREF
  int v40[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+70h] [rbp-10h] BYREF
  char v43; // [rsp+C8h] [rbp+48h]
  char v44; // [rsp+C8h] [rbp+48h]
  char ReturnLengtha; // [rsp+E0h] [rbp+60h]

  v37 = 0;
  v39 = 0LL;
  v6 = Languages;
  *(_QWORD *)v40 = 0LL;
  v8 = *ReturnLength;
  v38 = -1;
  v36[0] = -1;
  v41 = 0LL;
  if ( LocaleName )
  {
    v10 = (Flags & 0x80) != 0;
    wcslen(LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      v17 = -1073741772;
      goto LABEL_72;
    }
    v9 = 4104;
    ReturnLengtha = 1;
    v12 = 4096;
  }
  else
  {
    if ( (Flags & 0xFFFF6373) != 0 )
      return -1073741811;
    v9 = Flags | 0x80;
    if ( (Flags & 0x9880) != 0 )
      v9 = Flags;
    v10 = 0;
    if ( (v9 & 0xC) == 0xC )
      return -1073741811;
    if ( (v9 & 0xC) == 0 )
      v9 |= 8u;
    ReturnLengtha = (v9 & 0x400) == 0;
    v12 = v9 & 0x9880;
    if ( (v9 & 0x9880) == 0 )
    {
      v9 |= 0x8000u;
      goto LABEL_11;
    }
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
    return -1073741811;
LABEL_11:
  v8 = *ReturnLength;
  if ( *ReturnLength && !v6 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v41);
  if ( result < 0 )
    return result;
  v13 = v41;
  if ( LocaleName )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v41, LocaleName, 0LL, v36) < 0 )
    {
      v17 = -1073741772;
      goto LABEL_72;
    }
    v38 = v36[0];
  }
  result = RtlpSetProcUserMachineLangList(v13, 0);
  if ( result < 0 )
    return result;
  if ( (v9 & 0x800) == 0 )
  {
    if ( (v9 & 0x8080) != 0 )
    {
      if ( !v13 )
      {
        v17 = -1073741811;
        goto LABEL_72;
      }
      LOBYTE(v14) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(25LL, v14, v13);
      v39 = LanguageList;
      if ( !LanguageList )
      {
        v17 = -1073741801;
        goto LABEL_24;
      }
      v18 = LdrpMergeLangFallbackLists(v9 | 0x30, v13, &v39, 0LL, 0LL, 0LL, *(_QWORD *)(v13 + 56), 0LL, 1);
      LanguageList = v39;
      v17 = v18;
      if ( v18 < 0 )
        goto LABEL_24;
      v19 = ReturnLengtha;
      v20 = Languages;
LABEL_23:
      v17 = LdrpConvertLangFallbackListToMultiSz(LanguageList, v13, v20, ReturnLength, v9, v19, &v37);
      goto LABEL_24;
    }
    LOBYTE(v15) = 1;
    v17 = LdrpCreateLangFallbackList(&v39, v13, 25LL, v15);
    if ( v17 >= 0 )
    {
      v17 = LdrpMergeLangFallbackLists(v9 | 0x30, v13, &v39, 0LL, 0LL, 0LL, *(_QWORD *)(v13 + 56), 0LL, 0);
      if ( v17 >= 0 )
      {
        LOBYTE(v23) = 1;
        LangFallbackList = LdrpCreateLangFallbackList(v40, v13, 25LL, v23);
        LanguageList = v39;
        v17 = LangFallbackList;
        if ( LangFallbackList >= 0 )
        {
          if ( LocaleName )
          {
            v25 = ReturnLengtha;
            if ( (_WORD)v38 != 0xFFFF )
            {
              v26 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 16LL) + 28LL * (__int16)v38);
              if ( v26 )
              {
                if ( (*v26 & 2) != 0 || (v43 = ReturnLengtha, v10) && (v43 = ReturnLengtha, (*v26 & 4) != 0) )
                  v43 = 0;
                v27 = LdrpMergeParentBaseLanguagesToList((int)v40, v34);
                v25 = v43;
                v17 = v27;
LABEL_67:
                if ( v17 < 0 )
                  goto LABEL_24;
              }
            }
          }
          else
          {
            v28 = 0;
            v25 = ReturnLengtha;
            v38 = 0;
            if ( *(_WORD *)(v39 + 4) )
            {
              while ( 1 )
              {
                v29 = 3LL * v28;
                v30 = *(_QWORD *)(LanguageList + 24);
                if ( *(_WORD *)(v30 + 2 * v29) == 2 )
                {
                  v31 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 24) + 16LL) + 28LL * *(__int16 *)(v30 + 2 * v29 + 4));
                  if ( (v31 & 2) != 0 )
                    v25 = 0;
                  v44 = v25;
                  if ( (v31 & 6) != 0 )
                  {
                    v32 = LdrpMergeParentBaseLanguagesToList((int)v40, v34);
                    v25 = v44;
                    v17 = v32;
                    if ( v32 >= 0 )
                      break;
                  }
                }
                v33 = *(unsigned __int16 *)(LanguageList + 4);
                v28 = v38 + 1;
                v38 = v28;
                if ( v28 >= v33 )
                  goto LABEL_67;
              }
            }
          }
          v35 = v9;
          v21 = *(_QWORD *)v40;
          v17 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v40, v13, Languages, ReturnLength, v35, v25, &v37);
          goto LABEL_25;
        }
LABEL_24:
        v21 = *(_QWORD *)v40;
LABEL_25:
        if ( LanguageList )
          RtlpMuiRegFreeLanguageList(LanguageList);
        if ( v21 )
          RtlpMuiRegFreeLanguageList(v21);
        if ( v17 >= 0 )
          goto LABEL_30;
        v6 = Languages;
LABEL_72:
        if ( v6 )
        {
          if ( v8 )
            *v6 = 0;
          if ( v8 > 1 )
            v6[1] = 0;
        }
        return v17;
      }
    }
    goto LABEL_69;
  }
  v19 = ReturnLengtha;
  *ReturnLength = v8;
  v17 = LdrpConvertLangFallbackListToMultiSz(*(_QWORD *)(v13 + 56), v13, v6, ReturnLength, v9, ReturnLengtha, &v37);
  if ( v17 < 0 || !v37 )
  {
    LOBYTE(v22) = 1;
    v17 = LdrpCreateLangFallbackList(&v39, v13, 25LL, v22);
    if ( v17 >= 0 )
    {
      v17 = LdrpMergeLangFallbackLists(v9 | 0x30, v13, &v39, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( v17 >= 0 )
      {
        v20 = v6;
        *ReturnLength = v8;
        LanguageList = v39;
        goto LABEL_23;
      }
    }
LABEL_69:
    LanguageList = v39;
    goto LABEL_24;
  }
LABEL_30:
  *NumberOfLanguages = v37;
  return v17;
}
