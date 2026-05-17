/*
 * XREFs of RtlIntegerToChar @ 0x1800E1770
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x180036440 (RtlpComputeLangListCheckSum.c)
 *     RtlIntegerToUnicodeString @ 0x1800E16D0 (RtlIntegerToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlIntegerToChar(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r10d
  int v8; // ecx
  int v9; // r8d
  char *v10; // rbx
  __int64 v11; // rdx
  int v12; // esp
  __int64 v13; // rsi
  bool v14; // cc
  size_t v16; // rdi
  char v17; // [rsp+41h] [rbp-27h] BYREF

  v6 = a2;
  if ( a2 == 16 )
  {
    v8 = 4;
LABEL_6:
    v9 = (1 << v8) - 1;
    goto LABEL_7;
  }
  if ( !a2 )
  {
    v6 = 10;
    goto LABEL_4;
  }
  if ( a2 != 10 )
  {
    if ( a2 == 8 )
    {
      v8 = 3;
    }
    else
    {
      if ( a2 != 2 )
        return 3221225485LL;
      v8 = 1;
    }
    goto LABEL_6;
  }
LABEL_4:
  v8 = 0;
  v9 = 0;
LABEL_7:
  v10 = &v17;
  do
  {
    if ( v8 )
    {
      v11 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      v11 = a1 % v6;
      a1 /= v6;
    }
    *--v10 = RtlpIntegerChars[v11];
  }
  while ( a1 );
  v13 = (unsigned int)(v12 + 65 - (_DWORD)v10);
  if ( a3 >= 0 )
    goto LABEL_12;
  a3 = -a3;
  v14 = (int)v13 <= a3;
  if ( (int)v13 < a3 )
  {
    v16 = (unsigned int)(a3 - v13);
    LOBYTE(v11) = 48;
    memset_thunk_772440563353939046(a4, v11, v16);
    a3 = v13;
    a4 += v16;
LABEL_12:
    v14 = (int)v13 <= a3;
  }
  if ( !v14 )
    return 2147483653LL;
  memmove(a4, v10, (unsigned int)v13);
  if ( (int)v13 < a3 )
    a4[v13] = 0;
  return 0LL;
}
