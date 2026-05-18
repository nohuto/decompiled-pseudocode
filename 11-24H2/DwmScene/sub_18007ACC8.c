/*
 * XREFs of sub_18007ACC8 @ 0x18007ACC8
 * Callers:
 *     sub_18007B3C8 @ 0x18007B3C8 (sub_18007B3C8.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180016764 @ 0x180016764 (sub_180016764.c)
 *     sub_18001E484 @ 0x18001E484 (sub_18001E484.c)
 */

char *__fastcall sub_18007ACC8(__int64 *a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rdi
  char *v5; // r15
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rax
  size_t v11; // rbx
  void *v12; // rcx
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  char *result; // rax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = (char *)*a1;
  v5 = a2;
  if ( a3 <= (a1[2] - *a1) >> 2 )
  {
    v13 = a1[1];
    v12 = (void *)*a1;
    v14 = (v13 - (__int64)v3) >> 2;
    if ( a3 <= v14 )
    {
      v11 = 4 * a3;
    }
    else
    {
      memmove(v12, a2, 4 * v14);
      v3 = (char *)a1[1];
      a2 = &v5[4 * v14];
      v12 = v3;
      v11 = 4 * (a3 - v14);
    }
  }
  else
  {
    if ( a3 > 0x3FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    v8 = sub_18001E484(a1, a3);
    if ( v3 )
    {
      sub_180010234(v3, 4 * v9);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    v16 = v8;
    v10 = sub_180016764(v7, &v16);
    *a1 = v10;
    v3 = (char *)v10;
    a1[1] = v10;
    a2 = v5;
    a1[2] = v10 + 4 * v8;
    v11 = 4 * a3;
    v12 = (void *)v10;
  }
  memmove(v12, a2, v11);
  result = &v3[v11];
  a1[1] = (__int64)&v3[v11];
  return result;
}
