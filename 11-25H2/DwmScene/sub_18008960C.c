/*
 * XREFs of sub_18008960C @ 0x18008960C
 * Callers:
 *     sub_1800898EC @ 0x1800898EC (sub_1800898EC.c)
 * Callees:
 *     sub_18008942C @ 0x18008942C (sub_18008942C.c)
 */

__int64 __fastcall sub_18008960C(
        float *a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // r8
  float *v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rcx
  float *v15; // r10

  if ( a4 > a5 )
  {
    v14 = ((char *)a2 - (char *)a1) >> 4;
    v15 = a1;
    while ( (__int64)v14 > 0 )
    {
      if ( a2[4 * (a5 >> 1)] <= v15[4 * (v14 >> 1)] )
      {
        v15 += 4 * (v14 >> 1) + 4;
        v14 += -1LL - (v14 >> 1);
      }
      else
      {
        v14 >>= 1;
      }
    }
    return sub_18008942C(
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v15,
             (__int64)&a2[4 * (a5 >> 1)],
             ((char *)v15 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v10 = (__int64)a2;
    v11 = &a1[4 * (a4 >> 1)];
    v12 = (a3 - (__int64)a2) >> 4;
    while ( (__int64)v12 > 0 )
    {
      if ( *(float *)(v10 + 16 * (v12 >> 1)) <= *v11 )
      {
        v12 >>= 1;
      }
      else
      {
        v10 += 16 * (v12 >> 1) + 16;
        v12 += -1LL - (v12 >> 1);
      }
    }
    return sub_18008942C((int)a1, a2, a3, a4, a5, a6, a7, a8, v11, v10, a4 >> 1, (v10 - (__int64)a2) >> 4);
  }
}
