/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x1800DC580
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x18013D30C (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180149010 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x180016340 (RtlLCIDToCultureName.c)
 *     RtlStringCbCopyW @ 0x1800DC690 (RtlStringCbCopyW.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  size_t v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int16 v8; // r10

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      if ( ((*(_WORD *)(a2 + 4) - 4096) & 0xFBFF) != 0 )
        return RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) == 0 ? 0xC00000E5 : 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v5);
      LOWORD(v5) = 0;
      if ( *(_QWORD *)(v6 + 24) + 2 * v7 )
      {
        v5 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v6 + 24) + 2 * v7));
        if ( v5 >= 0xFFFE )
          LOWORD(v5) = -4;
      }
      if ( (unsigned __int16)v5 <= a3->MaximumLength && (int)RtlStringCbCopyW(a3->Buffer, a3->MaximumLength) >= 0 )
      {
        a3->Length = v8;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
