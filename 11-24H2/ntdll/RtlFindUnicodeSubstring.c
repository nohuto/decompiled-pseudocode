/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1800AF530
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x1800AFC40 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     NLS_UPCASE @ 0x1800AF6C0 (NLS_UPCASE.c)
 *     memcmp @ 0x1801676D0 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  size_t v6; // r14
  char *v7; // rbx
  char *v8; // rsi
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // r10
  bool v11; // zf
  signed __int64 v12; // r14
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  __int64 v15; // r10
  __int64 v16; // r8
  __int16 v17; // ax

  v4 = *a2;
  if ( *a1 >= (unsigned __int16)v4 )
  {
    v6 = *a2;
    v7 = (char *)*((_QWORD *)a1 + 1);
    v8 = &v7[*a1 - v4];
    if ( (_BYTE)a3 )
    {
      v9 = (unsigned __int16 *)(v4 + *((_QWORD *)a2 + 1));
      while ( v7 <= v8 )
      {
        v10 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
        v11 = v10 == v9;
        if ( v10 < v9 )
        {
          v12 = v7 - (char *)v10;
          do
          {
            v13 = *v10;
            if ( *(unsigned __int16 *)((char *)v10 + v12) != (_WORD)v13 )
            {
              v14 = NLS_UPCASE(qword_1801CD038, v13, a3, a4);
              v17 = NLS_UPCASE(qword_1801CD038, *(unsigned __int16 *)(v12 + v15), v16, v14);
              if ( v17 != (_WORD)a4 )
                break;
            }
            ++v10;
          }
          while ( v10 < v9 );
          v11 = v10 == v9;
        }
        if ( v11 )
          return v7;
        v7 += 2;
      }
    }
    else
    {
      while ( v7 <= v8 )
      {
        if ( !memcmp(v7, *((const void **)a2 + 1), v6) )
          return v7;
        v7 += 2;
      }
    }
  }
  return 0LL;
}
