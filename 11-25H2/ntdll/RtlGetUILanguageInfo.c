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

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char v5; // r15
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
  int InstalledLanguageIndexByLangId; // eax
  __int64 i; // r14
  wchar_t *v24; // rdi
  int v25; // eax
  int FallbackLanguageInfoByLangId; // eax
  PVOID Heap; // rax
  size_t v28; // rax
  size_t v29; // rax
  unsigned __int16 v30; // bx
  ULONG v31; // [rsp+30h] [rbp-61h]
  char v32; // [rsp+34h] [rbp-5Dh]
  _WORD v34[2]; // [rsp+40h] [rbp-51h] BYREF
  DWORD Lcid; // [rsp+44h] [rbp-4Dh] BYREF
  int v36; // [rsp+48h] [rbp-49h]
  PVOID v37; // [rsp+50h] [rbp-41h] BYREF
  _UNICODE_STRING v38; // [rsp+58h] [rbp-39h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-19h]
  PULONG v41; // [rsp+80h] [rbp-11h]
  __int128 v42; // [rsp+88h] [rbp-9h] BYREF
  __int64 v43; // [rsp+98h] [rbp+7h]
  int v44; // [rsp+A0h] [rbp+Fh]

  v34[0] = -1;
  v5 = Flags;
  v41 = Attributes;
  v43 = 0LL;
  v37 = 0LL;
  v44 = 0;
  Lcid = 0;
  v8 = (wchar_t *)Languages;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  LOBYTE(v36) = 0;
  BaseAddress = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  v31 = v9;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  if ( (v5 & 4) != 0 )
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
  if ( v5 >= 0 )
    v19 = RtlpCreateProcessRegistryInfo(&v37);
  else
    v19 = RtlpMuiRegCreateAndLoadRegistryInfo(&v37);
  v14 = v37;
  FallbackLanguagesAsMultiSZ = v19;
  if ( v19 >= 0 )
  {
    if ( !v37 )
    {
      v12 = FallbackLanguages;
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_12;
    }
    v20 = *((_QWORD *)v37 + 3);
    if ( (v5 & 4) != 0 )
    {
      v32 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( Heap )
      {
        String.Buffer = (wchar_t *)Heap;
        *(_DWORD *)&String.Length = 11141120;
        *(_DWORD *)(&v38.MaximumLength + 1) = 0;
        v38.Buffer = v8;
        v28 = 2 * wcslen(v8);
        if ( v28 >= 0xFFFE )
          LOWORD(v28) = -4;
        v38.Length = v28;
        v38.MaximumLength = v28 + 2;
        if ( (int)RtlUnicodeStringToLcid(&v38, &Lcid) < 0 || (v30 = Lcid, !RtlLCIDToCultureName(Lcid, &String)) )
        {
          v13 = BaseAddress;
          FallbackLanguagesAsMultiSZ = -1073741811;
          v12 = FallbackLanguages;
LABEL_11:
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v13);
          v14 = v37;
          v9 = v31;
          goto LABEL_12;
        }
        v14 = v37;
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v37, v30, 1, v34);
LABEL_53:
        FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
        if ( InstalledLanguageIndexByLangId < 0 )
        {
          v9 = v31;
          v12 = FallbackLanguages;
          if ( InstalledLanguageIndexByLangId == -1073741823 )
            FallbackLanguagesAsMultiSZ = -1073741772;
LABEL_10:
          v13 = BaseAddress;
          if ( !BaseAddress )
            goto LABEL_12;
          goto LABEL_11;
        }
        if ( v34[0] >= 0 && v34[0] < (int)*(unsigned __int16 *)(v20 + 6) )
        {
          for ( i = *(_QWORD *)(v20 + 16) + 28LL * v34[0]; *v8; ++v8 )
            ;
          v24 = v8 + 1;
          v42 = *(_OWORD *)i;
          v43 = *(_QWORD *)(i + 16);
          v44 = *(_DWORD *)(i + 24);
          if ( (*(_WORD *)i & 1) == 0 )
          {
            LOBYTE(v25) = v36;
            while ( *v24 )
            {
              if ( (_BYTE)v25 )
                goto LABEL_93;
              if ( v32 )
              {
                v38.Buffer = v24;
                *(_DWORD *)(&v38.MaximumLength + 1) = 0;
                v29 = 2 * wcslen(v24);
                if ( v29 >= 0xFFFE )
                  LOWORD(v29) = -4;
                v38.Length = v29;
                v38.MaximumLength = v29 + 2;
                if ( RtlUnicodeStringToInteger(&v38, 0x10u, &Lcid) < 0 )
                {
LABEL_93:
                  FallbackLanguagesAsMultiSZ = -1073741811;
                  goto LABEL_9;
                }
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                                 (__int64)v14,
                                                 (__int64)&v42,
                                                 Lcid,
                                                 1,
                                                 (__int64)&v42);
              }
              else
              {
                FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(
                                                 (__int64)v14,
                                                 (__int64)&v42,
                                                 v24,
                                                 1,
                                                 (__int64)&v42);
              }
              FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
              if ( FallbackLanguageInfoByLangId < 0 )
                goto LABEL_9;
              v25 = (unsigned __int8)v36;
              if ( (v42 & 0x20) != 0 )
                v25 = 1;
              v15 = *v24 == 0;
              v36 = v25;
              if ( !v15 )
              {
                do
                  ++v24;
                while ( *v24 );
              }
              ++v24;
            }
            goto LABEL_24;
          }
          if ( (*(_WORD *)i & 6) != 0 )
          {
            FallbackLanguagesAsMultiSZ = -1073741595;
            goto LABEL_9;
          }
          if ( !*v24 )
          {
LABEL_24:
            if ( v41 )
            {
              v16 = *(_WORD *)i & 0x419F | 0x20;
              if ( (*(_WORD *)i & 0x1000) != 0 )
                v16 = *(_WORD *)i & 0x419F;
              *v41 = v16 | 0x40;
            }
            if ( NumberOfFallbackLanguages )
            {
              v15 = (_BYTE)v36 == 0;
              v9 = v31;
              v12 = FallbackLanguages;
              *NumberOfFallbackLanguages = v31;
              if ( v15 )
                FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                               v5,
                                               (__int64)v14,
                                               &v42,
                                               NumberOfFallbackLanguages,
                                               FallbackLanguages);
              else
                *NumberOfFallbackLanguages = 2;
              goto LABEL_10;
            }
LABEL_9:
            v9 = v31;
            v12 = FallbackLanguages;
            goto LABEL_10;
          }
        }
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_9;
      }
      v14 = v37;
      FallbackLanguagesAsMultiSZ = -1073741801;
    }
    else
    {
      v32 = 0;
      *(_DWORD *)(&String.MaximumLength + 1) = 0;
      String.Buffer = v8;
      v21 = 2 * wcslen(v8);
      if ( v21 >= 0xFFFE )
        LOWORD(v21) = -4;
      String.Length = v21;
      String.MaximumLength = v21 + 2;
      if ( RtlCultureNameToLCID(&String, &Lcid) )
      {
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v14, v8, 1, v34);
        goto LABEL_53;
      }
      FallbackLanguagesAsMultiSZ = -1073741811;
    }
    v9 = v31;
  }
  v12 = FallbackLanguages;
LABEL_12:
  if ( v5 < 0 && v14 )
    RtlpMuiFreeLangRegistryInfo(v14);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 && v12 )
    return -1073741789;
  return FallbackLanguagesAsMultiSZ;
}
