/*
 * XREFs of RtlGetUILanguageInfo @ 0x18007B9D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1800122F0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x1800314F8 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x1800330E0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18007CC10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18007D580 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800EAF10 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1801124E0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180116B00 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 *     RtlUnicodeStringToLcid @ 0x180116D44 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180117D74 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, wchar_t *a2, _WORD *a3, unsigned int *a4, int *a5)
{
  const wchar_t *v8; // rdi
  unsigned int v9; // r13d
  unsigned int FallbackLanguagesAsMultiSZ; // ebx
  _WORD *v12; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  bool v16; // zf
  int v17; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // r13
  size_t v22; // rax
  __int64 v23; // r8
  int InstalledLanguageIndexByLangId; // eax
  __int64 v25; // r9
  __int64 i; // r14
  const wchar_t *v27; // rdi
  int v28; // eax
  int FallbackLanguageInfoByLangId; // eax
  __int64 Heap; // rax
  size_t v31; // rax
  size_t v32; // rax
  int v33; // r9d
  unsigned __int16 v34; // bx
  unsigned int v35; // [rsp+30h] [rbp-61h]
  char v36; // [rsp+34h] [rbp-5Dh]
  _WORD v38[2]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v39; // [rsp+44h] [rbp-4Dh] BYREF
  int v40; // [rsp+48h] [rbp-49h]
  __int64 v41; // [rsp+50h] [rbp-41h] BYREF
  __int128 v42; // [rsp+58h] [rbp-39h] BYREF
  int v43; // [rsp+68h] [rbp-29h] BYREF
  int v44; // [rsp+6Ch] [rbp-25h]
  __int64 v45; // [rsp+70h] [rbp-21h]
  unsigned __int64 v46; // [rsp+78h] [rbp-19h]
  int *v47; // [rsp+80h] [rbp-11h]
  __int128 v48; // [rsp+88h] [rbp-9h] BYREF
  __int64 v49; // [rsp+98h] [rbp+7h]
  int v50; // [rsp+A0h] [rbp+Fh]

  v38[0] = -1;
  v47 = a5;
  v49 = 0LL;
  v41 = 0LL;
  v50 = 0;
  v39 = 0;
  v8 = a2;
  v44 = 0;
  LOBYTE(v40) = 0;
  v46 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  v35 = v9;
  if ( !a2 || !*a2 || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  if ( (a1 & 4) != 0 )
    v19 = 4LL;
  else
    v19 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(a2, v19) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( a3 )
  {
    if ( v9 )
      *a3 = 0;
    if ( v9 > 1 )
      a3[1] = 0;
  }
  if ( a4 )
    *a4 = 2;
  if ( a5 )
    *a5 = 0;
  if ( (a1 & 0x80u) == 0 )
    v20 = RtlpCreateProcessRegistryInfo(&v41);
  else
    v20 = RtlpMuiRegCreateAndLoadRegistryInfo(&v41);
  v15 = v41;
  FallbackLanguagesAsMultiSZ = v20;
  if ( v20 >= 0 )
  {
    if ( !v41 )
    {
      v12 = a3;
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_12;
    }
    v21 = *(_QWORD *)(v41 + 24);
    if ( (a1 & 4) != 0 )
    {
      v36 = 1;
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      v46 = Heap;
      if ( Heap )
      {
        v45 = Heap;
        v43 = 11141120;
        DWORD1(v42) = 0;
        *((_QWORD *)&v42 + 1) = v8;
        v31 = 2 * wcslen(v8);
        if ( v31 >= 0xFFFE )
          LOWORD(v31) = -4;
        LOWORD(v42) = v31;
        WORD1(v42) = v31 + 2;
        if ( (int)RtlUnicodeStringToLcid(&v42, &v39) < 0
          || (v34 = v39, !(unsigned __int8)RtlLCIDToCultureName(v39, (__int64)&v43)) )
        {
          v13 = v46;
          FallbackLanguagesAsMultiSZ = -1073741811;
          v12 = a3;
LABEL_11:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13);
          v15 = v41;
          v9 = v35;
          goto LABEL_12;
        }
        v15 = v41;
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v41, v34, 1, v38);
LABEL_53:
        FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
        if ( InstalledLanguageIndexByLangId < 0 )
        {
          v9 = v35;
          v12 = a3;
          if ( InstalledLanguageIndexByLangId == -1073741823 )
            FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_10:
          v13 = v46;
          if ( !v46 )
            goto LABEL_12;
          goto LABEL_11;
        }
        v14 = v38[0];
        if ( v38[0] >= 0 && v38[0] < (int)*(unsigned __int16 *)(v21 + 6) )
        {
          for ( i = *(_QWORD *)(v21 + 16) + 28LL * v38[0]; *v8; ++v8 )
            ;
          v27 = v8 + 1;
          v48 = *(_OWORD *)i;
          v49 = *(_QWORD *)(i + 16);
          v50 = *(_DWORD *)(i + 24);
          if ( (*(_WORD *)i & 1) == 0 )
          {
            LOBYTE(v28) = v40;
            while ( *v27 )
            {
              if ( (_BYTE)v28 )
                goto LABEL_93;
              if ( v36 )
              {
                *((_QWORD *)&v42 + 1) = v27;
                DWORD1(v42) = 0;
                v32 = 2 * wcslen(v27);
                if ( v32 >= 0xFFFE )
                  LOWORD(v32) = -4;
                LOWORD(v42) = v32;
                WORD1(v42) = v32 + 2;
                if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)&v42, 0x10u, (int *)&v39) < 0 )
                {
LABEL_93:
                  FallbackLanguagesAsMultiSZ = -1073741811;
                  goto LABEL_9;
                }
                LOBYTE(v33) = 1;
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                 v15,
                                                 (unsigned int)&v48,
                                                 (unsigned __int16)v39,
                                                 v33,
                                                 (__int64)&v48);
              }
              else
              {
                LOBYTE(v25) = 1;
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v15, &v48, v27, v25, &v48);
              }
              FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
              if ( FallbackLanguageInfoByLangId < 0 )
                goto LABEL_9;
              v28 = (unsigned __int8)v40;
              if ( (v48 & 0x20) != 0 )
                v28 = 1;
              v16 = *v27 == 0;
              v40 = v28;
              if ( !v16 )
              {
                do
                  ++v27;
                while ( *v27 );
              }
              ++v27;
            }
            goto LABEL_24;
          }
          if ( (*(_WORD *)i & 6) != 0 )
          {
            FallbackLanguagesAsMultiSZ = -1073741595;
            goto LABEL_9;
          }
          if ( !*v27 )
          {
LABEL_24:
            if ( v47 )
            {
              v14 = *(_WORD *)i & 0x419F;
              v17 = v14 | 0x20;
              if ( (*(_WORD *)i & 0x1000) != 0 )
                v17 = *(_WORD *)i & 0x419F;
              *v47 = v17 | 0x40;
            }
            if ( a4 )
            {
              v16 = (_BYTE)v40 == 0;
              v9 = v35;
              v12 = a3;
              *a4 = v35;
              if ( v16 )
                FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                               a1,
                                               v15,
                                               (unsigned int)&v48,
                                               (_DWORD)a4,
                                               (__int64)a3);
              else
                *a4 = 2;
              goto LABEL_10;
            }
LABEL_9:
            v9 = v35;
            v12 = a3;
            goto LABEL_10;
          }
        }
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_9;
      }
      v15 = v41;
      FallbackLanguagesAsMultiSZ = -1073741801;
    }
    else
    {
      v36 = 0;
      v44 = 0;
      v45 = (__int64)v8;
      v22 = 2 * wcslen(v8);
      if ( v22 >= 0xFFFE )
        LOWORD(v22) = -4;
      LOWORD(v43) = v22;
      HIWORD(v43) = v22 + 2;
      if ( RtlCultureNameToLCID((unsigned __int16 *)&v43, (int *)&v39) )
      {
        LOBYTE(v23) = 1;
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v15, v8, v23, v38);
        goto LABEL_53;
      }
      FallbackLanguagesAsMultiSZ = -1073741811;
    }
    v9 = v35;
  }
  v12 = a3;
LABEL_12:
  if ( (a1 & 0x80u) != 0 && v15 )
    RtlpMuiFreeLangRegistryInfo(v15, v14);
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v9 && v12 )
    return (unsigned int)-1073741789;
  return FallbackLanguagesAsMultiSZ;
}
