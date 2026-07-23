/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800CA620
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18000FB88 (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180011550 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlUnicodeStringToInteger @ 0x180013E20 (RtlUnicodeStringToInteger.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003ECF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800CAFA0 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlUnicodeStringToLcid @ 0x1800CB240 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800CB340 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800CB4CC (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1800CB614 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800CB7D0 (RtlpMuiFreeLangRegistryInfo.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  wchar_t *v8; // rdi
  ULONG v9; // r13d
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  PZZWSTR v12; // rdi
  PVOID v13; // r8
  PVOID v14; // rsi
  bool v15; // zf
  int v16; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r13
  size_t v21; // rax
  __int64 v22; // r8
  int InstalledLanguageIndexByLangId; // eax
  __int64 v24; // r9
  __int64 i; // r14
  wchar_t *v26; // rdi
  int v27; // eax
  int FallbackLanguageInfoByLangId; // eax
  PVOID Heap; // rax
  size_t v30; // rax
  size_t v31; // rax
  int v32; // r9d
  unsigned __int16 v33; // bx
  ULONG v34; // [rsp+30h] [rbp-61h]
  char v35; // [rsp+34h] [rbp-5Dh]
  _WORD v37[2]; // [rsp+40h] [rbp-51h] BYREF
  DWORD Lcid; // [rsp+44h] [rbp-4Dh] BYREF
  int v39; // [rsp+48h] [rbp-49h]
  PVOID v40; // [rsp+50h] [rbp-41h] BYREF
  _UNICODE_STRING v41; // [rsp+58h] [rbp-39h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-19h]
  PULONG v44; // [rsp+80h] [rbp-11h]
  __int128 v45; // [rsp+88h] [rbp-9h] BYREF
  __int64 v46; // [rsp+98h] [rbp+7h]
  int v47; // [rsp+A0h] [rbp+Fh]

  v37[0] = -1;
  v44 = Attributes;
  v46 = 0LL;
  v40 = 0LL;
  v47 = 0;
  Lcid = 0;
  v8 = (wchar_t *)Languages;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  LOBYTE(v39) = 0;
  BaseAddress = 0LL;
  v45 = 0LL;
  v41 = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  v34 = v9;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  if ( (Flags & 4) != 0 )
    v18 = 4LL;
  else
    v18 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(Languages, v18) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( FallbackLanguages )
  {
    if ( v9 )
      *FallbackLanguages = 0;
    if ( v9 > 1 )
      FallbackLanguages[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
  if ( (Flags & 0x80u) == 0 )
    v19 = RtlpCreateProcessRegistryInfo(&v40);
  else
    v19 = RtlpMuiRegCreateAndLoadRegistryInfo(&v40);
  v14 = v40;
  FallbackLanguagesAsMultiSZ = v19;
  if ( v19 >= 0 )
  {
    if ( !v40 )
    {
      v12 = FallbackLanguages;
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_12;
    }
    v20 = *((_QWORD *)v40 + 3);
    if ( (Flags & 4) != 0 )
    {
      v35 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( Heap )
      {
        String.Buffer = (wchar_t *)Heap;
        *(_DWORD *)&String.Length = 11141120;
        *(_DWORD *)(&v41.MaximumLength + 1) = 0;
        v41.Buffer = v8;
        v30 = 2 * wcslen(v8);
        if ( v30 >= 0xFFFE )
          LOWORD(v30) = -4;
        v41.Length = v30;
        v41.MaximumLength = v30 + 2;
        if ( (int)RtlUnicodeStringToLcid(&v41, &Lcid) < 0 || (v33 = Lcid, !RtlLCIDToCultureName(Lcid, &String)) )
        {
          v13 = BaseAddress;
          FallbackLanguagesAsMultiSZ = -1073741811;
          v12 = FallbackLanguages;
LABEL_11:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
          v14 = v40;
          v9 = v34;
          goto LABEL_12;
        }
        v14 = v40;
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v40, v33, 1, v37);
LABEL_53:
        FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
        if ( InstalledLanguageIndexByLangId < 0 )
        {
          v9 = v34;
          v12 = FallbackLanguages;
          if ( InstalledLanguageIndexByLangId == -1073741823 )
            FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_10:
          v13 = BaseAddress;
          if ( !BaseAddress )
            goto LABEL_12;
          goto LABEL_11;
        }
        if ( v37[0] >= 0 && v37[0] < (int)*(unsigned __int16 *)(v20 + 6) )
        {
          for ( i = *(_QWORD *)(v20 + 16) + 28LL * v37[0]; *v8; ++v8 )
            ;
          v26 = v8 + 1;
          v45 = *(_OWORD *)i;
          v46 = *(_QWORD *)(i + 16);
          v47 = *(_DWORD *)(i + 24);
          if ( (*(_WORD *)i & 1) == 0 )
          {
            LOBYTE(v27) = v39;
            while ( *v26 )
            {
              if ( (_BYTE)v27 )
                goto LABEL_93;
              if ( v35 )
              {
                v41.Buffer = v26;
                *(_DWORD *)(&v41.MaximumLength + 1) = 0;
                v31 = 2 * wcslen(v26);
                if ( v31 >= 0xFFFE )
                  LOWORD(v31) = -4;
                v41.Length = v31;
                v41.MaximumLength = v31 + 2;
                if ( RtlUnicodeStringToInteger(&v41, 0x10u, &Lcid) < 0 )
                {
LABEL_93:
                  FallbackLanguagesAsMultiSZ = -1073741811;
                  goto LABEL_9;
                }
                LOBYTE(v32) = 1;
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                 (_DWORD)v14,
                                                 (unsigned int)&v45,
                                                 (unsigned __int16)Lcid,
                                                 v32,
                                                 (__int64)&v45);
              }
              else
              {
                LOBYTE(v24) = 1;
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v14, &v45, v26, v24, &v45);
              }
              FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
              if ( FallbackLanguageInfoByLangId < 0 )
                goto LABEL_9;
              v27 = (unsigned __int8)v39;
              if ( (v45 & 0x20) != 0 )
                v27 = 1;
              v15 = *v26 == 0;
              v39 = v27;
              if ( !v15 )
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
            if ( v44 )
            {
              v16 = *(_WORD *)i & 0x419F | 0x20;
              if ( (*(_WORD *)i & 0x1000) != 0 )
                v16 = *(_WORD *)i & 0x419F;
              *v44 = v16 | 0x40;
            }
            if ( NumberOfFallbackLanguages )
            {
              v15 = (_BYTE)v39 == 0;
              v9 = v34;
              v12 = FallbackLanguages;
              *NumberOfFallbackLanguages = v34;
              if ( v15 )
                FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                               Flags,
                                               (_DWORD)v14,
                                               (unsigned int)&v45,
                                               (_DWORD)NumberOfFallbackLanguages,
                                               (__int64)FallbackLanguages);
              else
                *NumberOfFallbackLanguages = 2;
              goto LABEL_10;
            }
LABEL_9:
            v9 = v34;
            v12 = FallbackLanguages;
            goto LABEL_10;
          }
        }
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_9;
      }
      v14 = v40;
      FallbackLanguagesAsMultiSZ = -1073741801;
    }
    else
    {
      v35 = 0;
      *(_DWORD *)(&String.MaximumLength + 1) = 0;
      String.Buffer = v8;
      v21 = 2 * wcslen(v8);
      if ( v21 >= 0xFFFE )
        LOWORD(v21) = -4;
      String.Length = v21;
      String.MaximumLength = v21 + 2;
      if ( RtlCultureNameToLCID(&String, &Lcid) )
      {
        LOBYTE(v22) = 1;
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName(v14, v8, v22, v37);
        goto LABEL_53;
      }
      FallbackLanguagesAsMultiSZ = -1073741811;
    }
    v9 = v34;
  }
  v12 = FallbackLanguages;
LABEL_12:
  if ( (Flags & 0x80u) != 0 && v14 )
    RtlpMuiFreeLangRegistryInfo(v14);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 && v12 )
    return -1073741789;
  return FallbackLanguagesAsMultiSZ;
}
