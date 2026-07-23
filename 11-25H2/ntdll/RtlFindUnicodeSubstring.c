/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180068EF0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180069600 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  __int64 Length; // rax
  size_t v5; // r14
  WCHAR *Buffer; // rbx
  WCHAR *v7; // rsi
  wchar_t *v8; // r11
  wchar_t *v9; // r10
  bool v10; // zf
  signed __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r10
  __int16 v14; // ax
  __int16 v15; // r9

  Length = SearchString->Length;
  if ( FullString->Length >= (unsigned __int16)Length )
  {
    v5 = SearchString->Length;
    Buffer = FullString->Buffer;
    v7 = (WCHAR *)((char *)Buffer + FullString->Length - Length);
    if ( CaseInSensitive )
    {
      v8 = (wchar_t *)((char *)SearchString->Buffer + Length);
      while ( Buffer <= v7 )
      {
        v9 = SearchString->Buffer;
        v10 = v9 == v8;
        if ( v9 < v8 )
        {
          v11 = (char *)Buffer - (char *)v9;
          do
          {
            v12 = *v9;
            if ( *(wchar_t *)((char *)v9 + v11) != (_WORD)v12 )
            {
              NLS_UPCASE(qword_1801CF038, v12);
              v14 = NLS_UPCASE(qword_1801CF038, *(unsigned __int16 *)(v11 + v13));
              if ( v14 != v15 )
                break;
            }
            ++v9;
          }
          while ( v9 < v8 );
          v10 = v9 == v8;
        }
        if ( v10 )
          return Buffer;
        ++Buffer;
      }
    }
    else
    {
      while ( Buffer <= v7 )
      {
        if ( !memcmp(Buffer, SearchString->Buffer, v5) )
          return Buffer;
        ++Buffer;
      }
    }
  }
  return 0LL;
}
