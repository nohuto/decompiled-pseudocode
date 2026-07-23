/*
 * XREFs of RtlFindUnicodeSubstring @ 0x18007BDD0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x18007C4E0 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x18007BF60 (NLS_UPCASE.c)
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

// local variable allocation has failed, the output may be wrong!
PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  __int64 v3; // r9
  __int64 Length; // rax
  size_t v6; // r14
  WCHAR *Buffer; // rbx
  WCHAR *v8; // rsi
  wchar_t *v9; // r11
  wchar_t *v10; // r10
  bool v11; // zf
  signed __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  __int64 v15; // r10
  __int64 v16; // r8
  __int16 v17; // ax

  Length = SearchString->Length;
  if ( FullString->Length >= (unsigned __int16)Length )
  {
    v6 = SearchString->Length;
    Buffer = FullString->Buffer;
    v8 = (WCHAR *)((char *)Buffer + FullString->Length - Length);
    if ( CaseInSensitive )
    {
      v9 = (wchar_t *)((char *)SearchString->Buffer + Length);
      while ( Buffer <= v8 )
      {
        v10 = SearchString->Buffer;
        v11 = v10 == v9;
        if ( v10 < v9 )
        {
          v12 = (char *)Buffer - (char *)v10;
          do
          {
            v13 = *v10;
            if ( *(wchar_t *)((char *)v10 + v12) != (_WORD)v13 )
            {
              v14 = NLS_UPCASE(qword_1801CC038, v13, CaseInSensitive, v3);
              v17 = NLS_UPCASE(qword_1801CC038, *(unsigned __int16 *)(v12 + v15), v16, v14);
              if ( v17 != (_WORD)v3 )
                break;
            }
            ++v10;
          }
          while ( v10 < v9 );
          v11 = v10 == v9;
        }
        if ( v11 )
          return Buffer;
        ++Buffer;
      }
    }
    else
    {
      while ( Buffer <= v8 )
      {
        if ( !memcmp(Buffer, SearchString->Buffer, v6) )
          return Buffer;
        ++Buffer;
      }
    }
  }
  return 0LL;
}
