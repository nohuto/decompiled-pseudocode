/*
 * XREFs of sub_18008AB3C @ 0x18008AB3C
 * Callers:
 *     sub_180089DEC @ 0x180089DEC (sub_180089DEC.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_18008A254 @ 0x18008A254 (sub_18008A254.c)
 */

char *__fastcall sub_18008AB3C(float *a1, float *a2, float *a3, void *a4)
{
  float *v6; // r9
  float *v7; // r10
  __int64 v8; // r9
  char *v9; // rbx
  size_t v10; // rdi
  __int64 v12; // r10
  char *v13; // rbx
  size_t v14; // rsi
  void *v15; // [rsp+20h] [rbp-18h] BYREF
  void *v16; // [rsp+28h] [rbp-10h]

  v15 = a4;
  v16 = a4;
  v6 = a2;
  v7 = a1;
  do
  {
    while ( *v7 > *v6 )
    {
      sub_18008A254((__int64)&v15, v6);
      v6 = (float *)(v8 + 16);
      if ( v6 == a3 )
      {
        v9 = (char *)v16;
        v10 = (char *)a2 - (char *)v7;
        memmove(v16, v7, v10);
        return &v9[v10];
      }
    }
    sub_18008A254((__int64)&v15, v7);
    v7 = (float *)(v12 + 16);
  }
  while ( v7 != a2 );
  v13 = (char *)v16;
  v14 = (char *)a3 - (char *)v6;
  memmove(v16, v6, v14);
  return &v13[v14];
}
