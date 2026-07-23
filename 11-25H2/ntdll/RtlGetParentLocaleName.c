/*
 * XREFs of RtlGetParentLocaleName @ 0x1800A7380
 * Callers:
 *     LdrpGetParentLangId @ 0x1800A6FA8 (LdrpGetParentLangId.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1800A7164 (_RtlpMuiRegAddNeutralLanguage.c)
 * Callees:
 *     RtlpNlsGetNameIndex @ 0x18005C590 (RtlpNlsGetNameIndex.c)
 *     RtlpLoadNlsData @ 0x18005C67C (RtlpLoadNlsData.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlpGetCustomCultureData @ 0x180118940 (RtlpGetCustomCultureData.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlGetParentLocaleName(
        PCWSTR LocaleName,
        PUNICODE_STRING ParentLocaleName,
        ULONG Flags,
        BOOLEAN AllocateDestinationString)
{
  char v5; // bl
  PUNICODE_STRING v6; // rdi
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

  v5 = Flags;
  v6 = ParentLocaleName;
  if ( !LocaleName )
    return -1073741585;
  if ( !ParentLocaleName || !ParentLocaleName->Buffer )
    return -1073741584;
  if ( (Flags & 0xFFFFFFF9) != 0 )
    return -1073741583;
  v8 = Flags & 4;
  if ( (Flags & 4) != 0
    || !(unsigned __int8)RtlpIsCustomLocale((wchar_t *)LocaleName)
    || (LOBYTE(ParentLocaleName) = (v5 & 2) != 0,
        result = RtlpGetCustomCultureData(LocaleName, ParentLocaleName, AllocateDestinationString, v6),
        result < 0) )
  {
    if ( !pTblPtrs
      && !RtlpLoadNlsData(
            (__int64)LocaleName,
            (__int64)ParentLocaleName,
            *(__int64 *)&Flags,
            (ULONG *)AllocateDestinationString) )
    {
      return -1073741823;
    }
    NameIndex = RtlpNlsGetNameIndex((__int64)LocaleName);
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
            if ( !RtlCreateUnicodeString(v6, v13) )
              return -1073741801;
          }
          else
          {
            if ( v16 >= 0x55 )
              return -1073741789;
            v18 = 2LL * v16;
            if ( v6->MaximumLength <= v18 )
            {
              return -1073741789;
            }
            else
            {
              v19 = 2 * v16;
              memmove(v6->Buffer, v13, v19);
              v6->Buffer[v18 / 2] = 0;
              v6->Length = v19;
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
      return RtlpGetCustomCultureData(LocaleName, v21, AllocateDestinationString, v6);
    }
    return -1073741585;
  }
  return result;
}
