/*
 * XREFs of RtlGetParentLocaleName @ 0x180033970
 * Callers:
 *     LdrpGetParentLangId @ 0x1800D1514 (LdrpGetParentLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800D24B4 (_RtlpMuiRegAddNeutralLanguage.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     RtlpNlsGetNameIndex @ 0x180033300 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800333EC (RtlpLoadNlsData.c)
 *     RtlpIsCustomLocale @ 0x1800F77DC (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180115750 (RtlpGetCustomCultureData.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlGetParentLocaleName(wchar_t *String, __int64 a2, int a3, unsigned __int8 a4)
{
  char v5; // bl
  int v8; // esi
  int NameIndex; // eax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  const wchar_t *v13; // rdx
  _WORD *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // ebp
  unsigned __int64 v18; // rsi
  unsigned __int16 v19; // bx
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx

  v5 = a3;
  if ( !String )
    return 3221225711LL;
  if ( !a2 || !*(_QWORD *)(a2 + 8) )
    return 3221225712LL;
  if ( (a3 & 0xFFFFFFF9) != 0 )
    return 3221225713LL;
  v8 = a3 & 4;
  if ( (a3 & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale(String)
    || (LOBYTE(v22) = (v5 & 2) != 0, result = RtlpGetCustomCultureData(String, v22, a4, a2), (int)result < 0) )
  {
    if ( !pTblPtrs && !RtlpLoadNlsData() )
      return 3221225473LL;
    NameIndex = RtlpNlsGetNameIndex((__int64)String);
    v10 = v5 & 2;
    if ( NameIndex >= 0 )
    {
      if ( !v10 )
      {
        _mm_lfence();
        if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 48)
                       * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2)
                       + *(_QWORD *)(pTblPtrs + 8)
                       + 24LL) & 1) == 0 )
          return 3221225711LL;
      }
      _mm_lfence();
      v11 = *(unsigned __int16 *)(pTblPtrs + 48)
          * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
      v12 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
      v13 = (const wchar_t *)(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184));
      if ( v13 )
      {
        v14 = (_WORD *)(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184));
        v15 = 85LL;
        do
        {
          if ( !*v14 )
            break;
          ++v14;
          --v15;
        }
        while ( v15 );
        v16 = 85 - v15;
        v17 = 0;
        if ( v15 )
        {
          if ( a4 )
          {
            if ( !RtlCreateUnicodeString(a2, v13) )
              return (unsigned int)-1073741801;
          }
          else
          {
            if ( v16 >= 0x55 )
              return (unsigned int)-1073741789;
            v18 = 2LL * v16;
            if ( *(unsigned __int16 *)(a2 + 2) <= v18 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              v19 = 2 * v16;
              memmove(*(void **)(a2 + 8), v13, v19);
              *(_WORD *)(v18 + *(_QWORD *)(a2 + 8)) = 0;
              *(_WORD *)a2 = v19;
            }
          }
          return v17;
        }
        return 3221225473LL;
      }
    }
    if ( v8 && (unsigned __int8)RtlpIsCustomLocale(String) )
    {
      LOBYTE(v21) = v10 != 0;
      return RtlpGetCustomCultureData(String, v21, a4, a2);
    }
    return 3221225711LL;
  }
  return result;
}
