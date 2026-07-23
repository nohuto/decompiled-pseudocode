/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x1800C9E60
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x1800C7F30 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800145C0 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180016160 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180016B90 (RtlpSetProcUserMachineLangList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180018270 (LdrpConvertLangFallbackListToMultiSz.c)
 *     LdrpCreateLangFallbackList @ 0x1800C8560 (LdrpCreateLangFallbackList.c)
 *     RtlpMuiRegCreateLanguageList @ 0x1800CA3B0 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlIsValidLocaleName @ 0x1800CBF00 (RtlIsValidLocaleName.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
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
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 LanguageList; // rsi
  NTSTATUS v16; // ebx
  int v17; // eax
  char v18; // r15
  wchar_t *v19; // r8
  _BYTE *v20; // rdi
  int LangFallbackList; // eax
  char v22; // r8
  _WORD *v23; // r10
  __int64 v24; // r9
  NTSTATUS v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  _WORD *v29; // rdx
  __int64 v30; // r9
  int v31; // eax
  unsigned int v32; // eax
  __int16 v33; // [rsp+20h] [rbp-60h]
  char v34; // [rsp+20h] [rbp-60h]
  unsigned __int16 v35[2]; // [rsp+50h] [rbp-30h] BYREF
  ULONG v36; // [rsp+54h] [rbp-2Ch] BYREF
  int v37; // [rsp+58h] [rbp-28h]
  __int64 v38; // [rsp+60h] [rbp-20h] BYREF
  int v39[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v40; // [rsp+70h] [rbp-10h] BYREF
  char v42; // [rsp+C8h] [rbp+48h]
  char v43; // [rsp+C8h] [rbp+48h]
  char ReturnLengtha; // [rsp+E0h] [rbp+60h]

  v36 = 0;
  v38 = 0LL;
  v6 = Languages;
  *(_QWORD *)v39 = 0LL;
  v8 = *ReturnLength;
  v37 = -1;
  v35[0] = -1;
  v40 = 0LL;
  if ( LocaleName )
  {
    v10 = (Flags & 0x80) != 0;
    wcslen(LocaleName);
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      v16 = -1073741772;
      goto LABEL_78;
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
  result = RtlpCreateProcessRegistryInfo(&v40);
  if ( result < 0 )
    return result;
  v13 = v40;
  if ( LocaleName )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v40, LocaleName, 0LL, v35) < 0 )
    {
      v16 = -1073741772;
      goto LABEL_78;
    }
    v37 = v35[0];
  }
  result = RtlpSetProcUserMachineLangList((__int64)v13, 0);
  if ( result < 0 )
    return result;
  if ( (v9 & 0x800) == 0 )
  {
    if ( (v9 & 0x8080) != 0 )
    {
      if ( !v13 )
      {
        v16 = -1073741811;
        goto LABEL_78;
      }
      LOBYTE(v14) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(25LL, v14, v13);
      v38 = LanguageList;
      if ( !LanguageList )
      {
        v16 = -1073741801;
        goto LABEL_24;
      }
      v17 = LdrpMergeLangFallbackLists(v9 | 0x30, (__int64)v13, &v38, 0LL, 0LL, 0LL, v13[7], 0LL, 1);
      LanguageList = v38;
      v16 = v17;
      if ( v17 < 0 )
        goto LABEL_24;
      v18 = ReturnLengtha;
      v19 = Languages;
LABEL_23:
      v16 = LdrpConvertLangFallbackListToMultiSz(LanguageList, (__int64)v13, v19, ReturnLength, v9, v18, &v36);
      goto LABEL_24;
    }
    v16 = LdrpCreateLangFallbackList(&v38, (__int64)v13, 25, 1);
    if ( v16 >= 0 )
    {
      v33 = 0;
      v16 = LdrpMergeLangFallbackLists(v9 | 0x30, (__int64)v13, &v38, 0LL);
      if ( v16 >= 0 )
      {
        LangFallbackList = LdrpCreateLangFallbackList(v39, (__int64)v13, 25, 1);
        LanguageList = v38;
        v16 = LangFallbackList;
        if ( LangFallbackList >= 0 )
        {
          if ( LocaleName )
          {
            v22 = ReturnLengtha;
            if ( (_WORD)v37 != 0xFFFF )
            {
              v23 = (_WORD *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * (__int16)v37);
              if ( v23 )
              {
                if ( (*v23 & 2) != 0 || (v42 = ReturnLengtha, v10) && (v42 = ReturnLengtha, (*v23 & 4) != 0) )
                  v42 = 0;
                v24 = *(_BYTE *)(v38 + 8) ? v13[5] : v13[6];
                v25 = LdrpMergeParentBaseLanguagesToList((__int64 *)v39, v23, (__int64)v13, v24, 0);
                v22 = v42;
                v16 = v25;
LABEL_73:
                if ( v16 < 0 )
                  goto LABEL_24;
              }
            }
          }
          else
          {
            v26 = 0;
            v22 = ReturnLengtha;
            v37 = 0;
            if ( *(_WORD *)(v38 + 4) )
            {
              while ( 1 )
              {
                v27 = 3LL * v26;
                v28 = *(_QWORD *)(LanguageList + 24);
                if ( *(_WORD *)(v28 + 2 * v27) == 2 )
                {
                  v29 = (_WORD *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * *(__int16 *)(v28 + 2 * v27 + 4));
                  if ( (*v29 & 2) != 0 )
                    v22 = 0;
                  v43 = v22;
                  if ( (*v29 & 6) != 0 )
                  {
                    v30 = *(_BYTE *)(LanguageList + 8) ? v13[5] : v13[6];
                    v31 = LdrpMergeParentBaseLanguagesToList((__int64 *)v39, v29, (__int64)v13, v30, v33);
                    v22 = v43;
                    v16 = v31;
                    if ( v31 >= 0 )
                      break;
                  }
                }
                v32 = *(unsigned __int16 *)(LanguageList + 4);
                v26 = v37 + 1;
                v37 = v26;
                if ( v26 >= v32 )
                  goto LABEL_73;
              }
            }
          }
          v34 = v9;
          v20 = *(_BYTE **)v39;
          v16 = LdrpConvertLangFallbackListToMultiSz(
                  *(__int64 *)v39,
                  (__int64)v13,
                  Languages,
                  ReturnLength,
                  v34,
                  v22,
                  &v36);
          goto LABEL_25;
        }
LABEL_24:
        v20 = *(_BYTE **)v39;
LABEL_25:
        if ( LanguageList )
          RtlpMuiRegFreeLanguageList((_BYTE *)LanguageList);
        if ( v20 )
          RtlpMuiRegFreeLanguageList(v20);
        if ( v16 >= 0 )
          goto LABEL_30;
        v6 = Languages;
LABEL_78:
        if ( v6 )
        {
          if ( v8 )
            *v6 = 0;
          if ( v8 > 1 )
            v6[1] = 0;
        }
        return v16;
      }
    }
    goto LABEL_75;
  }
  v18 = ReturnLengtha;
  *ReturnLength = v8;
  v16 = LdrpConvertLangFallbackListToMultiSz(v13[7], (__int64)v13, v6, ReturnLength, v9, ReturnLengtha, &v36);
  if ( v16 < 0 || !v36 )
  {
    v16 = LdrpCreateLangFallbackList(&v38, (__int64)v13, 25, 1);
    if ( v16 >= 0 )
    {
      v16 = LdrpMergeLangFallbackLists(v9 | 0x30, (__int64)v13, &v38, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( v16 >= 0 )
      {
        v19 = v6;
        *ReturnLength = v8;
        LanguageList = v38;
        goto LABEL_23;
      }
    }
LABEL_75:
    LanguageList = v38;
    goto LABEL_24;
  }
LABEL_30:
  *NumberOfLanguages = v36;
  return v16;
}
