/*
 * XREFs of _RtlpMuiRegPopulateBaseLanguages @ 0x18014A770
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1801491C0 (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     RtlInitUnicodeString @ 0x1800DA0A0 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800E8D50 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x180149E98 (_RtlpMuiRegAddBaseLanguage.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x18014ABB8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     ZwEnumerateValueKey @ 0x180161EF0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     NtIsUILanguageComitted @ 0x180163E00 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x180164800 (NtQueryInstallUILanguage.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpMuiRegPopulateBaseLanguages(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v8; // r15
  __int16 v9; // ax
  unsigned int v10; // edi
  __int64 result; // rax
  unsigned __int16 v12; // si
  unsigned __int16 v13; // r14
  bool v14; // sf
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned int i; // eax
  unsigned __int64 v18; // rsi
  __int16 v19; // r14
  unsigned int *v20; // rax
  _WORD v21[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 56) = a2;
  *(_QWORD *)(v4 + 64) = a4;
  *(_DWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 32) = 0LL;
  memset_thunk_772440563353939046((void *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 80), 0, 0xAAuLL);
  memset_thunk_772440563353939046((void *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 768), 0, 0xAAuLL);
  memset_thunk_772440563353939046((void *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 944), 0, 0xAAuLL);
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0;
  LODWORD(v8) = 0;
  *(_WORD *)v4 = 0;
  *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( !a1 || !a3 || !a2 )
    return 3221225485LL;
  v9 = *(_WORD *)(a1 + 4);
  v10 = 0;
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
  if ( v9 )
  {
    v12 = *(_WORD *)(a1 + 6);
    v13 = *(_WORD *)(a1 + 8);
    *(_WORD *)v4 = v9;
  }
  else
  {
    result = NtQueryInstallUILanguage((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL);
    if ( (int)result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback(a1, (_WORD *)(v4 + 8), (_WORD *)(v4 + 12)) >= 0 )
    {
      v12 = *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v13 = *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
    }
    else
    {
      v12 = 0;
      v13 = 0;
    }
    v14 = (int)NtIsUILanguageComitted() < 0;
    v9 = *(_WORD *)v4;
    if ( !v14 )
    {
      *(_WORD *)(a1 + 8) = v13;
      *(_WORD *)(a1 + 6) = v12;
      *(_WORD *)(a1 + 4) = v9;
    }
  }
  v15 = -1LL;
  if ( a3[2] == v9 )
  {
    if ( v12 )
    {
      *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = ((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 768;
      *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
      *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x22) = 170;
      if ( (unsigned __int8)RtlLCIDToCultureName(v12, v4 + 32) )
      {
        if ( (int)NtQueryValueKey(
                    *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                    v4 + 32,
                    1LL,
                    v4 + 256,
                    512,
                    v4 + 4) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, v4 + 256, v13, v4 + 944) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, 0, v4 + 256, (wchar_t *)(v4 + 944)) >= 0 )
        {
          v10 = 1;
          v8 = -1LL;
          do
            ++v8;
          while ( *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x300 + 2 * v8) );
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 32), L"DefaultFallback");
  v16 = *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 1;
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(v16, v4 + 32, (_DWORD *)(v4 + 12), (void *)(v4 + 80), (unsigned int *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) == 1
    && (!(_DWORD)v8
     || (unsigned int)RtlCompareUnicodeStrings(
                        (unsigned __int16 *)(v4 + 80),
                        (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
                        (_BYTE *)(v4 + 768),
                        (unsigned int)v8,
                        1))
    && (RtlInitUnicodeString((PUNICODE_STRING)(v4 + 32), (PCWSTR)(v4 + 80)),
        *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512,
        (int)NtQueryValueKey(v16, v4 + 32, 1LL, v4 + 256, 512, v4 + 4) >= 0)
    && *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
    && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v10, v4 + 256, 0LL) >= 0 )
  {
    ++v10;
    do
      ++v15;
    while ( *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * v15) );
  }
  else
  {
    v15 = *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  }
  for ( i = *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v10 < 4 && (int)ZwEnumerateValueKey(v16, i, 1LL, v4 + 256, 512, v4 + 48) >= 0;
        *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = i )
  {
    if ( *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
      && *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) <= 0x200u )
    {
      if ( !(_DWORD)v15 && !(_DWORD)v8 )
        goto LABEL_43;
      v18 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1;
      v19 = *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18);
      *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18) = 0;
      if ( (!(_DWORD)v8
         || (unsigned int)RtlCompareUnicodeStrings(
                            (unsigned __int16 *)(v4 + 276),
                            (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
                            (_BYTE *)(v4 + 768),
                            (unsigned int)v8,
                            1))
        && (!(_DWORD)v15
         || (unsigned int)RtlCompareUnicodeStrings(
                            (unsigned __int16 *)(v4 + 276),
                            (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
                            (_BYTE *)(v4 + 80),
                            (unsigned int)v15,
                            1)) )
      {
        *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18) = v19;
LABEL_43:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v10, v4 + 256, 0LL) >= 0 )
          ++v10;
      }
    }
    v16 = *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    i = *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 1;
  }
  v20 = *(unsigned int **)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
  if ( v20 )
    *v20 = v10;
  return 0LL;
}
