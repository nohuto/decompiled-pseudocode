/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x18014A770 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800EA0C0 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x18014B448 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014C168 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     ZwEnumerateValueKey @ 0x180163480 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     NtIsUILanguageComitted @ 0x180165390 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180165D90 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegPopulateBaseLanguages(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r15
  __int16 v11; // ax
  unsigned int v12; // edi
  __int64 result; // rax
  __int64 v14; // r9
  unsigned __int16 v15; // si
  unsigned __int16 v16; // r14
  bool v17; // sf
  __int64 v18; // r12
  __int64 v19; // r14
  unsigned int i; // eax
  unsigned __int64 v21; // rsi
  __int16 v22; // r14
  unsigned int *v23; // rax
  _WORD v24[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 56) = a2;
  *(_QWORD *)(v4 + 64) = a4;
  *(_DWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 32) = 0LL;
  memset_thunk_772440563353939046((void *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 80), 0, 0xAAuLL);
  memset_thunk_772440563353939046((void *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 768), 0, 0xAAuLL);
  memset_thunk_772440563353939046((void *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 944), 0, 0xAAuLL);
  *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  LODWORD(v10) = 0;
  *(_WORD *)v4 = 0;
  *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( !a1 || !a3 || !a2 )
    return 3221225485LL;
  v11 = *(_WORD *)(a1 + 4);
  v12 = 0;
  *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
  if ( v11 )
  {
    v15 = *(_WORD *)(a1 + 6);
    v16 = *(_WORD *)(a1 + 8);
    *(_WORD *)v4 = v11;
  }
  else
  {
    result = NtQueryInstallUILanguage((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL, v8, v9);
    if ( (int)result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback(a1, (_WORD *)(v4 + 8), (_WORD *)(v4 + 12), v14) >= 0 )
    {
      v15 = *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v16 = *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
    }
    else
    {
      v15 = 0;
      v16 = 0;
    }
    v17 = (int)NtIsUILanguageComitted() < 0;
    v11 = *(_WORD *)v4;
    if ( !v17 )
    {
      *(_WORD *)(a1 + 8) = v16;
      *(_WORD *)(a1 + 6) = v15;
      *(_WORD *)(a1 + 4) = v11;
    }
  }
  v18 = -1LL;
  if ( a3[2] == v11 )
  {
    if ( v15 )
    {
      *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = ((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 768;
      *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
      *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x22) = 170;
      if ( (unsigned __int8)RtlLCIDToCultureName(v15, v4 + 32) )
      {
        if ( (int)NtQueryValueKey(
                    *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                    v4 + 32,
                    1LL,
                    v4 + 256,
                    512,
                    v4 + 4) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, v4 + 256, v16, v4 + 944) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, 0, v4 + 256, (wchar_t *)(v4 + 944)) >= 0 )
        {
          v12 = 1;
          v10 = -1LL;
          do
            ++v10;
          while ( *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x300 + 2 * v10) );
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 32), L"DefaultFallback");
  v19 = *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
  *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 1;
  *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(v19, v4 + 32, (_DWORD *)(v4 + 12), (void *)(v4 + 80), (unsigned int *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) == 1
    && (!(_DWORD)v10
     || (unsigned int)RtlCompareUnicodeStrings(
                        (unsigned __int16 *)(v4 + 80),
                        (unsigned __int64)*(unsigned int *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
                        (_BYTE *)(v4 + 768),
                        (unsigned int)v10,
                        1))
    && (RtlInitUnicodeString((PUNICODE_STRING)(v4 + 32), (PCWSTR)(v4 + 80)),
        *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
        (int)NtQueryValueKey(v19, v4 + 32, 1LL, v4 + 256, 512, v4 + 4) >= 0)
    && *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v12, v4 + 256, 0LL) >= 0 )
  {
    ++v12;
    do
      ++v18;
    while ( *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * v18) );
  }
  else
  {
    v18 = *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  }
  for ( i = *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v12 < 4 && (int)ZwEnumerateValueKey(v19, i, 1LL, v4 + 256, 512, v4 + 48) >= 0;
        *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = i )
  {
    if ( *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
      && *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) <= 0x200u )
    {
      if ( !(_DWORD)v18 && !(_DWORD)v10 )
        goto LABEL_43;
      v21 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1;
      v22 = *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v21);
      *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v21) = 0;
      if ( (!(_DWORD)v10
         || (unsigned int)RtlCompareUnicodeStrings(
                            (unsigned __int16 *)(v4 + 276),
                            (unsigned __int64)*(unsigned int *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
                            (_BYTE *)(v4 + 768),
                            (unsigned int)v10,
                            1))
        && (!(_DWORD)v18
         || (unsigned int)RtlCompareUnicodeStrings(
                            (unsigned __int16 *)(v4 + 276),
                            (unsigned __int64)*(unsigned int *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
                            (_BYTE *)(v4 + 80),
                            (unsigned int)v18,
                            1)) )
      {
        *(_WORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v21) = v22;
LABEL_43:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v12, v4 + 256, 0LL) >= 0 )
          ++v12;
      }
    }
    v19 = *(_QWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    i = *(_DWORD *)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 1;
  }
  v23 = *(unsigned int **)(((unsigned __int64)v24 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v23 )
    *v23 = v12;
  return 0LL;
}
