/*
 * XREFs of GetNameFromLangListNode @ 0x1800C7870
 * Callers:
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpMergeLangFallbackLists @ 0x180015940 (LdrpMergeLangFallbackLists.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x1800C798C (RtlpFilterandReplaceConsoleLanguages.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall GetNameFromLangListNode(__int64 a1, unsigned __int16 *a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  const wchar_t *v13; // rcx
  size_t v14; // rax
  int v16; // r8d
  LCID v17; // ecx

  v3 = 0;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v6 = *a2;
  if ( v6 == 2 )
  {
    v7 = 28LL * (__int16)a2[2];
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v9 = *(__int16 *)(v7 + v8 + 6);
    if ( (__int16)v9 > 0 )
    {
      v10 = *(_QWORD *)(a1 + 32);
      v11 = *(__int16 *)(*(_QWORD *)(v10 + 16) + 2 * v9);
      v12 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)&a3->Length = 0LL;
      v13 = (const wchar_t *)(v12 + 2 * v11);
      a3->Buffer = (wchar_t *)v13;
      if ( v13 )
      {
        v14 = 2 * wcslen(v13);
        if ( v14 >= 0xFFFE )
          LOWORD(v14) = -4;
        a3->Length = v14;
        a3->MaximumLength = v14 + 2;
      }
      return v3;
    }
    if ( !*(_WORD *)(v7 + v8 + 4) )
      return (unsigned int)-1073741595;
    v17 = *(unsigned __int16 *)(v7 + v8 + 4);
    goto LABEL_13;
  }
  v16 = v6 - 1;
  if ( !v16 )
  {
    v17 = (__int16)a2[2];
LABEL_13:
    if ( RtlLCIDToCultureName(v17, a3) )
      return v3;
    return (unsigned int)-1073741595;
  }
  if ( v16 != 2 )
    return (unsigned int)-1073741595;
  RtlInitUnicodeString(
    a3,
    (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
           + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * (__int16)a2[2])));
  return 0LL;
}
