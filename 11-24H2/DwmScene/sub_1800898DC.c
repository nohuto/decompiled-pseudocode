/*
 * XREFs of sub_1800898DC @ 0x1800898DC
 * Callers:
 *     sub_180089B74 @ 0x180089B74 (sub_180089B74.c)
 * Callees:
 *     sub_18008967C @ 0x18008967C (sub_18008967C.c)
 */

__int64 __fastcall sub_1800898DC(
        float *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v11; // r8
  float *v12; // r10
  unsigned __int64 v13; // rcx
  float *v15; // r10
  float *v16; // rdx
  unsigned __int64 v17; // rcx

  if ( a4 > a5 )
  {
    v15 = a1;
    v16 = (float *)&a2[16 * (a5 >> 1)];
    v17 = (a2 - (char *)a1) >> 4;
    while ( (__int64)v17 > 0 )
    {
      if ( v15[4 * (v17 >> 1)] <= *v16 )
      {
        v15 += 4 * (v17 >> 1) + 4;
        v17 += -1LL - (v17 >> 1);
      }
      else
      {
        v17 >>= 1;
      }
    }
    return sub_18008967C(
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v15,
             (__int64)&a2[16 * (a5 >> 1)],
             ((char *)v15 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v11 = (__int64)a2;
    v12 = &a1[4 * (a4 >> 1)];
    v13 = (a3 - (__int64)a2) >> 4;
    while ( (__int64)v13 > 0 )
    {
      if ( *v12 <= *(float *)(v11 + 16 * (v13 >> 1)) )
      {
        v13 >>= 1;
      }
      else
      {
        v11 += 16 * (v13 >> 1) + 16;
        v13 += -1LL - (v13 >> 1);
      }
    }
    return sub_18008967C((int)a1, a2, a3, a4, a5, a6, a7, a8, v12, v11, a4 >> 1, (v11 - (__int64)a2) >> 4);
  }
}
