/*
 * XREFs of RtlGetParentLocaleName @ 0x180012850
 * Callers:
 *     _RtlpMuiRegAddNeutralLanguage @ 0x180098E48 (_RtlpMuiRegAddNeutralLanguage.c)
 *     LdrpGetParentLangId @ 0x180099B74 (LdrpGetParentLangId.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x1800143C0 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x1800144AC (RtlpLoadNlsData.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180110BE4 (RtlpGetCustomCultureData.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // bl
  ULONG v8; // esi
  int NameIndex; // eax
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  const WCHAR *v13; // rdx
  _WORD *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  NTSTATUS v17; // ebp
  unsigned __int64 v18; // rsi
  unsigned __int16 v19; // bx
  NTSTATUS result; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx

  v5 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale((wchar_t *)LocaleName)
    || (LOBYTE(v22) = (v5 & 2) != 0,
        result = RtlpGetCustomCultureData(LocaleName, v22, AllocateDestinationString, ParentLocaleName),
        result < 0) )
  {
    if ( !pTblPtrs && !(unsigned __int8)RtlpLoadNlsData() )
      return -1073741823;
    NameIndex = RtlpNlsGetNameIndex(LocaleName);
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
          return -1073741585;
      }
      _mm_lfence();
      v11 = *(unsigned __int16 *)(pTblPtrs + 48)
          * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * NameIndex + 2);
      v12 = *(_QWORD *)(pTblPtrs + 32) + 2LL;
      v13 = (const WCHAR *)(v12 + 2LL * *(unsigned int *)(v11 + *(_QWORD *)(pTblPtrs + 8) + 184));
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
          if ( AllocateDestinationString )
          {
            if ( !RtlCreateUnicodeString(ParentLocaleName, v13) )
              return -1073741801;
          }
          else
          {
            if ( v16 >= 0x55 )
              return -1073741789;
            v18 = 2LL * v16;
            if ( ParentLocaleName->MaximumLength <= v18 )
            {
              return -1073741789;
            }
            else
            {
              v19 = 2 * v16;
              memmove(ParentLocaleName->Buffer, v13, v19);
              ParentLocaleName->Buffer[v18 / 2] = 0;
              ParentLocaleName->Length = v19;
            }
          }
          return v17;
        }
        return -1073741823;
      }
    }
    if ( v8 && (unsigned __int8)RtlpIsCustomLocale((wchar_t *)LocaleName) )
    {
      LOBYTE(v21) = v10 != 0;
      return RtlpGetCustomCultureData(LocaleName, v21, AllocateDestinationString, ParentLocaleName);
    }
    return -1073741585;
  }
  return result;
}
