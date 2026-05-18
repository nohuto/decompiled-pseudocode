/*
 * XREFs of sub_180086A84 @ 0x180086A84
 * Callers:
 *     sub_180085908 @ 0x180085908 (sub_180085908.c)
 *     sub_180085B04 @ 0x180085B04 (sub_180085B04.c)
 * Callees:
 *     memset @ 0x18000C088 (memset.c)
 *     sub_180084D78 @ 0x180084D78 (sub_180084D78.c)
 */

unsigned __int64 __fastcall sub_180086A84(_QWORD *a1, __int64 a2, float **a3)
{
  float v3; // xmm2_4
  unsigned __int64 v5; // rbx
  float *i; // rax
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  const void **v10; // rsi
  char *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char *v14; // rax
  size_t v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 result; // rax
  __int64 v18; // r15
  int v19; // edi
  int v20; // ebx

  v3 = 0.0;
  a1[17] = a2;
  v5 = a2 * a2 * a2;
  a1[18] = a2;
  a1[19] = v5;
  for ( i = *a3; i != a3[1]; i += 4 )
  {
    v7 = i[1];
    v8 = fmaxf(*i, v3);
    v9 = i[2];
    v3 = fmaxf(v9, fmaxf(v7, v8));
  }
  v10 = (const void **)(a1 + 14);
  v11 = (char *)a1[15];
  v12 = a1[14];
  v13 = (__int64)&v11[-v12] >> 2;
  if ( v5 >= v13 )
  {
    if ( v5 <= v13 )
      goto LABEL_11;
    if ( v5 > ((__int64)v10[2] - v12) >> 2 )
    {
      sub_180084D78(v10, v5, (__int64)a3);
      goto LABEL_11;
    }
    v15 = 4 * (v5 - v13);
    memset(v11, 0, v15);
    v14 = &v11[v15];
  }
  else
  {
    v14 = (char *)(v12 + 4 * v5);
  }
  v10[1] = v14;
LABEL_11:
  v16 = 0LL;
  result = ((char *)a3[1] - (char *)*a3) >> 4;
  if ( result )
  {
    v18 = 0LL;
    do
    {
      v19 = (int)o_roundf();
      v20 = (int)o_roundf();
      v18 += 16LL;
      *((_DWORD *)*v10 + v16++) = (int)o_roundf() | ((v20 | (v19 << 8)) << 8);
      result = ((char *)a3[1] - (char *)*a3) >> 4;
    }
    while ( v16 < result );
  }
  return result;
}
