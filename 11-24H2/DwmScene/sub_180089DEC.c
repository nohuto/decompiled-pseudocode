/*
 * XREFs of sub_180089DEC @ 0x180089DEC
 * Callers:
 *     sub_18008A9A0 @ 0x18008A9A0 (sub_18008A9A0.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_18008A150 @ 0x18008A150 (sub_18008A150.c)
 *     sub_18008A804 @ 0x18008A804 (sub_18008A804.c)
 *     sub_18008AB3C @ 0x18008AB3C (sub_18008AB3C.c)
 */

__int64 __fastcall sub_180089DEC(char *Src, __int64 a2, __int64 a3, void *a4)
{
  void *v8; // rax
  unsigned __int64 v9; // rbx
  __int64 result; // rax
  char *v11; // rcx
  void *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  char *v15; // rdx
  __int64 v16; // rbx
  char *v17; // rbx
  __int64 i; // rsi

  v8 = Src;
  if ( a3 > 32 )
  {
    v9 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      v8 = (void *)sub_18008A804(v8);
      --v9;
    }
    while ( v9 );
  }
  result = sub_18008A804(v8);
  if ( a3 > 32 )
  {
    v11 = Src;
    v12 = a4;
    v13 = a3;
    do
    {
      v14 = v13 - 32;
      v15 = v11 + 512;
      v16 = v14;
      if ( v14 >= 32 )
        v16 = 32LL;
      v13 = v14 - v16;
      v17 = &v15[16 * v16];
      v12 = (void *)sub_18008AB3C(v11, v15, v17, v12);
      v11 = v17;
    }
    while ( v13 > 32 );
    memmove(v12, v17, a2 - (_QWORD)v17);
    result = sub_18008A150(a4, (__int64)a4 + 16 * a3);
    for ( i = 128LL; a3 > i; i *= 4LL )
    {
      sub_18008A150(Src, a2);
      result = sub_18008A150(a4, (__int64)a4 + 16 * a3);
    }
  }
  return result;
}
