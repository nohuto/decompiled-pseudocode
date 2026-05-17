/*
 * XREFs of RtlGetSystemPreferredUILanguages @ 0x18007DD80
 * Callers:
 *     RtlGetUserPreferredUILanguages @ 0x1800DA0F0 (RtlGetUserPreferredUILanguages.c)
 * Callees:
 *     LdrpMergeParentBaseLanguagesToList @ 0x180034340 (LdrpMergeParentBaseLanguagesToList.c)
 *     LdrpMergeLangFallbackLists @ 0x1800356C0 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegFreeLanguageList @ 0x180035EE0 (RtlpMuiRegFreeLanguageList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180036910 (RtlpSetProcUserMachineLangList.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x180037FF0 (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegCreateLanguageList @ 0x18007E2D0 (RtlpMuiRegCreateLanguageList.c)
 *     LdrpCreateLangFallbackList @ 0x1800DA720 (LdrpCreateLangFallbackList.c)
 *     RtlIsValidLocaleName @ 0x1800DA8C0 (RtlIsValidLocaleName.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall RtlGetSystemPreferredUILanguages(int a1, wchar_t *a2, _DWORD *a3, wchar_t *a4, unsigned int *a5)
{
  wchar_t *v6; // rsi
  unsigned int v8; // r12d
  int v9; // edi
  bool v10; // r15
  __int64 result; // rax
  int v12; // eax
  _QWORD *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 LanguageList; // rsi
  int v17; // ebx
  int v18; // eax
  char v19; // r15
  wchar_t *v20; // r8
  unsigned __int64 v21; // rdi
  __int64 v22; // r9
  __int64 v23; // r9
  int LangFallbackList; // eax
  char v25; // r8
  _WORD *v26; // r10
  __int64 v27; // r9
  int v28; // eax
  unsigned int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rax
  _WORD *v32; // rdx
  __int64 v33; // r9
  int v34; // eax
  unsigned int v35; // eax
  __int16 v36; // [rsp+20h] [rbp-60h]
  char v37; // [rsp+20h] [rbp-60h]
  unsigned __int16 v38[2]; // [rsp+50h] [rbp-30h] BYREF
  int v39; // [rsp+54h] [rbp-2Ch] BYREF
  int v40; // [rsp+58h] [rbp-28h]
  __int64 v41; // [rsp+60h] [rbp-20h] BYREF
  int v42[2]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD *v43; // [rsp+70h] [rbp-10h] BYREF
  char v45; // [rsp+C8h] [rbp+48h]
  char v46; // [rsp+C8h] [rbp+48h]
  char v49; // [rsp+E0h] [rbp+60h]

  v39 = 0;
  v41 = 0LL;
  v6 = a4;
  *(_QWORD *)v42 = 0LL;
  v8 = *a5;
  v40 = -1;
  v38[0] = -1;
  v43 = 0LL;
  if ( a2 )
  {
    v10 = (a1 & 0x80) != 0;
    wcslen(a2);
    if ( !(unsigned __int8)RtlIsValidLocaleName(a2) )
    {
      v17 = -1073741772;
      goto LABEL_78;
    }
    v9 = 4104;
    v49 = 1;
    v12 = 4096;
  }
  else
  {
    if ( (a1 & 0xFFFF6373) != 0 )
      return 3221225485LL;
    v9 = a1 | 0x80;
    if ( (a1 & 0x9880) != 0 )
      v9 = a1;
    v10 = 0;
    if ( (v9 & 0xC) == 0xC )
      return 3221225485LL;
    if ( (v9 & 0xC) == 0 )
      v9 |= 8u;
    v49 = (v9 & 0x400) == 0;
    v12 = v9 & 0x9880;
    if ( (v9 & 0x9880) == 0 )
    {
      v9 |= 0x8000u;
      goto LABEL_11;
    }
  }
  if ( v12 != 128 && v12 != 2048 && v12 != 4096 && v12 != 0x8000 )
    return 3221225485LL;
LABEL_11:
  v8 = *a5;
  if ( *a5 && !v6 )
    return 3221225485LL;
  result = RtlpCreateProcessRegistryInfo((__int64 *)&v43, (__int64)a2);
  if ( (int)result < 0 )
    return result;
  v13 = v43;
  if ( a2 )
  {
    if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v43, a2, 0, v38) < 0 )
    {
      v17 = -1073741772;
      goto LABEL_78;
    }
    v40 = v38[0];
  }
  result = RtlpSetProcUserMachineLangList((__int64)v13, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( (v9 & 0x800) == 0 )
  {
    if ( (v9 & 0x8080) != 0 )
    {
      if ( !v13 )
      {
        v17 = -1073741811;
        goto LABEL_78;
      }
      LOBYTE(v14) = 1;
      LanguageList = RtlpMuiRegCreateLanguageList(25LL, v14, v13);
      v41 = LanguageList;
      if ( !LanguageList )
      {
        v17 = -1073741801;
        goto LABEL_24;
      }
      v18 = LdrpMergeLangFallbackLists(v9 | 0x30u, (__int64)v13, &v41, 0LL, 0LL, 0LL, v13[7], 0LL, 1);
      LanguageList = v41;
      v17 = v18;
      if ( v18 < 0 )
        goto LABEL_24;
      v19 = v49;
      v20 = a4;
LABEL_23:
      v17 = LdrpConvertLangFallbackListToMultiSz(LanguageList, (__int64)v13, v20, a5, v9, v19, &v39);
      goto LABEL_24;
    }
    LOBYTE(v15) = 1;
    v17 = LdrpCreateLangFallbackList(&v41, v13, 25LL, v15);
    if ( v17 >= 0 )
    {
      v36 = 0;
      v17 = LdrpMergeLangFallbackLists(v9 | 0x30u, (__int64)v13, &v41, 0LL);
      if ( v17 >= 0 )
      {
        LOBYTE(v23) = 1;
        LangFallbackList = LdrpCreateLangFallbackList(v42, v13, 25LL, v23);
        LanguageList = v41;
        v17 = LangFallbackList;
        if ( LangFallbackList >= 0 )
        {
          if ( a2 )
          {
            v25 = v49;
            if ( (_WORD)v40 != 0xFFFF )
            {
              v26 = (_WORD *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * (__int16)v40);
              if ( v26 )
              {
                if ( (*v26 & 2) != 0 || (v45 = v49, v10) && (v45 = v49, (*v26 & 4) != 0) )
                  v45 = 0;
                v27 = *(_BYTE *)(v41 + 8) ? v13[5] : v13[6];
                v28 = LdrpMergeParentBaseLanguagesToList((__int64 *)v42, v26, (__int64)v13, v27, 0);
                v25 = v45;
                v17 = v28;
LABEL_73:
                if ( v17 < 0 )
                  goto LABEL_24;
              }
            }
          }
          else
          {
            v29 = 0;
            v25 = v49;
            v40 = 0;
            if ( *(_WORD *)(v41 + 4) )
            {
              while ( 1 )
              {
                v30 = 3LL * v29;
                v31 = *(_QWORD *)(LanguageList + 24);
                if ( *(_WORD *)(v31 + 2 * v30) == 2 )
                {
                  v32 = (_WORD *)(*(_QWORD *)(v13[3] + 16LL) + 28LL * *(__int16 *)(v31 + 2 * v30 + 4));
                  if ( (*v32 & 2) != 0 )
                    v25 = 0;
                  v46 = v25;
                  if ( (*v32 & 6) != 0 )
                  {
                    v33 = *(_BYTE *)(LanguageList + 8) ? v13[5] : v13[6];
                    v34 = LdrpMergeParentBaseLanguagesToList((__int64 *)v42, v32, (__int64)v13, v33, v36);
                    v25 = v46;
                    v17 = v34;
                    if ( v34 >= 0 )
                      break;
                  }
                }
                v35 = *(unsigned __int16 *)(LanguageList + 4);
                v29 = v40 + 1;
                v40 = v29;
                if ( v29 >= v35 )
                  goto LABEL_73;
              }
            }
          }
          v37 = v9;
          v21 = *(_QWORD *)v42;
          v17 = LdrpConvertLangFallbackListToMultiSz(*(__int64 *)v42, (__int64)v13, a4, a5, v37, v25, &v39);
          goto LABEL_25;
        }
LABEL_24:
        v21 = *(_QWORD *)v42;
LABEL_25:
        if ( LanguageList )
          RtlpMuiRegFreeLanguageList(LanguageList);
        if ( v21 )
          RtlpMuiRegFreeLanguageList(v21);
        if ( v17 >= 0 )
          goto LABEL_30;
        v6 = a4;
LABEL_78:
        if ( v6 )
        {
          if ( v8 )
            *v6 = 0;
          if ( v8 > 1 )
            v6[1] = 0;
        }
        return (unsigned int)v17;
      }
    }
    goto LABEL_75;
  }
  v19 = v49;
  *a5 = v8;
  v17 = LdrpConvertLangFallbackListToMultiSz(v13[7], (__int64)v13, v6, a5, v9, v49, &v39);
  if ( v17 < 0 || !v39 )
  {
    LOBYTE(v22) = 1;
    v17 = LdrpCreateLangFallbackList(&v41, v13, 25LL, v22);
    if ( v17 >= 0 )
    {
      v17 = LdrpMergeLangFallbackLists(v9 | 0x30u, (__int64)v13, &v41, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
      if ( v17 >= 0 )
      {
        v20 = v6;
        *a5 = v8;
        LanguageList = v41;
        goto LABEL_23;
      }
    }
LABEL_75:
    LanguageList = v41;
    goto LABEL_24;
  }
LABEL_30:
  *a3 = v39;
  return (unsigned int)v17;
}
