/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x1800E1030
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x18013F11C (RtlpAddLanguagesToMultiSZ.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18014AC60 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x1800360C0 (RtlLCIDToCultureName.c)
 *     RtlStringCbCopyW @ 0x1800E1140 (RtlStringCbCopyW.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  size_t v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int16 v9; // r10

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(__int16 *)(a2 + 6);
    if ( (__int16)v5 <= 0 )
    {
      if ( ((*(_WORD *)(a2 + 4) - 4096) & 0xFBFF) != 0 )
        return (unsigned __int8)RtlLCIDToCultureName(*(unsigned __int16 *)(a2 + 4), a3) == 0 ? 0xC00000E5 : 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      v7 = *(__int16 *)(*(_QWORD *)(v6 + 16) + 2 * v5);
      v8 = *(_QWORD *)(v6 + 24) + 2 * v7;
      LOWORD(v5) = 0;
      if ( v8 )
      {
        v5 = 2 * wcslen((const wchar_t *)(*(_QWORD *)(v6 + 24) + 2 * v7));
        if ( v5 >= 0xFFFE )
          LOWORD(v5) = -4;
      }
      if ( (unsigned __int16)v5 <= *(_WORD *)(a3 + 2)
        && (int)RtlStringCbCopyW(*(_QWORD *)(a3 + 8), *(unsigned __int16 *)(a3 + 2), v8) >= 0 )
      {
        *(_WORD *)a3 = v9;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
