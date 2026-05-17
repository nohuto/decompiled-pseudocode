/*
 * XREFs of RtlGetUILanguageInfo @ 0x18008A190
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180059FC8 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18005B950 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x18005C370 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180088D50 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180088DA0 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180088F5C (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800890A4 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlUnicodeStringToLcid @ 0x180089820 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180089F60 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18008BAC0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGetUILanguageInfo(int a1, wchar_t *a2, wchar_t *a3, unsigned int *a4, int *a5)
{
  char v5; // r15
  const wchar_t *v8; // rdi
  unsigned int v9; // r13d
  unsigned int FallbackLanguagesAsMultiSZ; // ebx
  wchar_t *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rsi
  bool v17; // zf
  int v18; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r13
  size_t v23; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 i; // r14
  const wchar_t *v26; // rdi
  int v27; // eax
  int FallbackLanguageInfoByLangId; // eax
  __int64 Heap; // rax
  size_t v30; // rax
  size_t v31; // rax
  unsigned __int16 v32; // bx
  unsigned int v33; // [rsp+30h] [rbp-61h]
  char v34; // [rsp+34h] [rbp-5Dh]
  _WORD v36[2]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v37; // [rsp+44h] [rbp-4Dh] BYREF
  int v38; // [rsp+48h] [rbp-49h]
  __int64 v39; // [rsp+50h] [rbp-41h] BYREF
  __int128 v40; // [rsp+58h] [rbp-39h] BYREF
  int v41; // [rsp+68h] [rbp-29h] BYREF
  int v42; // [rsp+6Ch] [rbp-25h]
  __int64 v43; // [rsp+70h] [rbp-21h]
  __int64 v44; // [rsp+78h] [rbp-19h]
  int *v45; // [rsp+80h] [rbp-11h]
  __int128 v46; // [rsp+88h] [rbp-9h] BYREF
  __int64 v47; // [rsp+98h] [rbp+7h]
  int v48; // [rsp+A0h] [rbp+Fh]

  v36[0] = -1;
  v5 = a1;
  v45 = a5;
  v47 = 0LL;
  v39 = 0LL;
  v48 = 0;
  v37 = 0;
  v8 = a2;
  v42 = 0;
  LOBYTE(v38) = 0;
  v44 = 0LL;
  v46 = 0LL;
  v40 = 0LL;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  v33 = v9;
  if ( !a2 || !*a2 || (a1 & 0xC) == 0xC || (a1 & 0xFFFFFF73) != 0 || v9 && !a3 )
    return 3221225485LL;
  if ( (v5 & 4) != 0 )
    v20 = 4LL;
  else
    v20 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(a2, v20) < 0 )
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
  if ( v5 >= 0 )
    v21 = RtlpCreateProcessRegistryInfo(&v39);
  else
    v21 = RtlpMuiRegCreateAndLoadRegistryInfo(&v39);
  v16 = v39;
  FallbackLanguagesAsMultiSZ = v21;
  if ( v21 >= 0 )
  {
    if ( !v39 )
    {
      v12 = a3;
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_12;
    }
    v22 = *(_QWORD *)(v39 + 24);
    if ( (v5 & 4) != 0 )
    {
      v34 = 1;
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      v44 = Heap;
      if ( Heap )
      {
        v43 = Heap;
        v41 = 11141120;
        DWORD1(v40) = 0;
        *((_QWORD *)&v40 + 1) = v8;
        v30 = 2 * wcslen(v8);
        if ( v30 >= 0xFFFE )
          LOWORD(v30) = -4;
        LOWORD(v40) = v30;
        WORD1(v40) = v30 + 2;
        if ( (int)RtlUnicodeStringToLcid((unsigned __int16 *)&v40, (int *)&v37) < 0
          || (v32 = v37, !(unsigned __int8)RtlLCIDToCultureName(v37, (__int64)&v41)) )
        {
          v13 = v44;
          FallbackLanguagesAsMultiSZ = -1073741811;
          v12 = a3;
LABEL_11:
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v13, v15);
          v16 = v39;
          v9 = v33;
          goto LABEL_12;
        }
        v16 = v39;
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v39, v32, 1, v36);
LABEL_53:
        FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
        if ( InstalledLanguageIndexByLangId < 0 )
        {
          v9 = v33;
          v12 = a3;
          if ( InstalledLanguageIndexByLangId == -1073741823 )
            FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_10:
          v13 = v44;
          if ( !v44 )
            goto LABEL_12;
          goto LABEL_11;
        }
        v14 = v36[0];
        if ( v36[0] >= 0 && v36[0] < (int)*(unsigned __int16 *)(v22 + 6) )
        {
          for ( i = *(_QWORD *)(v22 + 16) + 28LL * v36[0]; *v8; ++v8 )
            ;
          v26 = v8 + 1;
          v46 = *(_OWORD *)i;
          v47 = *(_QWORD *)(i + 16);
          v48 = *(_DWORD *)(i + 24);
          if ( (*(_WORD *)i & 1) == 0 )
          {
            LOBYTE(v27) = v38;
            while ( *v26 )
            {
              if ( (_BYTE)v27 )
                goto LABEL_93;
              if ( v34 )
              {
                *((_QWORD *)&v40 + 1) = v26;
                DWORD1(v40) = 0;
                v31 = 2 * wcslen(v26);
                if ( v31 >= 0xFFFE )
                  LOWORD(v31) = -4;
                LOWORD(v40) = v31;
                WORD1(v40) = v31 + 2;
                if ( (int)RtlUnicodeStringToInteger((unsigned __int16 *)&v40, 0x10u, (int *)&v37) < 0 )
                {
LABEL_93:
                  FallbackLanguagesAsMultiSZ = -1073741811;
                  goto LABEL_9;
                }
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                 v16,
                                                 (__int64)&v46,
                                                 v37,
                                                 1,
                                                 (__int64)&v46);
              }
              else
              {
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(
                                                 v16,
                                                 (__int64)&v46,
                                                 v26,
                                                 1,
                                                 (__int64)&v46);
              }
              FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
              if ( FallbackLanguageInfoByLangId < 0 )
                goto LABEL_9;
              v27 = (unsigned __int8)v38;
              if ( (v46 & 0x20) != 0 )
                v27 = 1;
              v17 = *v26 == 0;
              v38 = v27;
              if ( !v17 )
              {
                do
                  ++v26;
                while ( *v26 );
              }
              ++v26;
            }
            goto LABEL_24;
          }
          if ( (*(_WORD *)i & 6) != 0 )
          {
            FallbackLanguagesAsMultiSZ = -1073741595;
            goto LABEL_9;
          }
          if ( !*v26 )
          {
LABEL_24:
            if ( v45 )
            {
              v14 = *(_WORD *)i & 0x419F;
              v18 = v14 | 0x20;
              if ( (*(_WORD *)i & 0x1000) != 0 )
                v18 = *(_WORD *)i & 0x419F;
              *v45 = v18 | 0x40;
            }
            if ( a4 )
            {
              v17 = (_BYTE)v38 == 0;
              v9 = v33;
              v12 = a3;
              *a4 = v33;
              if ( v17 )
                FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(v5, v16, &v46, a4, a3);
              else
                *a4 = 2;
              goto LABEL_10;
            }
LABEL_9:
            v9 = v33;
            v12 = a3;
            goto LABEL_10;
          }
        }
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_9;
      }
      v16 = v39;
      FallbackLanguagesAsMultiSZ = -1073741801;
    }
    else
    {
      v34 = 0;
      v42 = 0;
      v43 = (__int64)v8;
      v23 = 2 * wcslen(v8);
      if ( v23 >= 0xFFFE )
        LOWORD(v23) = -4;
      LOWORD(v41) = v23;
      HIWORD(v41) = v23 + 2;
      if ( RtlCultureNameToLCID((unsigned __int16 *)&v41, (int *)&v37) )
      {
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v16, v8, 1, v36);
        goto LABEL_53;
      }
      FallbackLanguagesAsMultiSZ = -1073741811;
    }
    v9 = v33;
  }
  v12 = a3;
LABEL_12:
  if ( v5 < 0 && v16 )
    RtlpMuiFreeLangRegistryInfo(v16, v14, v13, v15);
  if ( !FallbackLanguagesAsMultiSZ && a4 && *a4 > v9 && v12 )
    return (unsigned int)-1073741789;
  return FallbackLanguagesAsMultiSZ;
}
