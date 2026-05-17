/*
 * XREFs of RtlFindUnicodeSubstring @ 0x180068EF0
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x180069600 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x180069080 (NLS_UPCASE.c)
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 v3; // rax
  size_t v5; // r14
  char *v6; // rbx
  char *v7; // rsi
  unsigned __int16 *v8; // r11
  unsigned __int16 *v9; // r10
  bool v10; // zf
  signed __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // r10
  __int16 v14; // ax
  __int16 v15; // r9

  v3 = *a2;
  if ( *a1 >= (unsigned __int16)v3 )
  {
    v5 = *a2;
    v6 = (char *)*((_QWORD *)a1 + 1);
    v7 = &v6[*a1 - v3];
    if ( a3 )
    {
      v8 = (unsigned __int16 *)(v3 + *((_QWORD *)a2 + 1));
      while ( v6 <= v7 )
      {
        v9 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
        v10 = v9 == v8;
        if ( v9 < v8 )
        {
          v11 = v6 - (char *)v9;
          do
          {
            v12 = *v9;
            if ( *(unsigned __int16 *)((char *)v9 + v11) != (_WORD)v12 )
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
          return v6;
        v6 += 2;
      }
    }
    else
    {
      while ( v6 <= v7 )
      {
        if ( !memcmp(v6, *((const void **)a2 + 1), v5) )
          return v6;
        v6 += 2;
      }
    }
  }
  return 0LL;
}
