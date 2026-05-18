/*
 * XREFs of sub_18008AF4C @ 0x18008AF4C
 * Callers:
 *     sub_18008ADA0 @ 0x18008ADA0 (sub_18008ADA0.c)
 *     sub_18008AF4C @ 0x18008AF4C (sub_18008AF4C.c)
 * Callees:
 *     sub_180039F04 @ 0x180039F04 (sub_180039F04.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_18008A118 @ 0x18008A118 (sub_18008A118.c)
 *     sub_18008A148 @ 0x18008A148 (sub_18008A148.c)
 *     sub_18008AF4C @ 0x18008AF4C (sub_18008AF4C.c)
 */

void __fastcall sub_18008AF4C(int a1, _QWORD *a2, unsigned __int64 *a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rbx
  unsigned __int64 *v10; // rax
  char *v11; // rdx
  __m128 v12; // xmm3
  __m128 v13; // xmm3
  __m128 v14; // xmm1
  __int64 *v15; // r14
  __int64 *i; // rbx
  __int64 v17; // xmm0_8
  __int64 v18; // [rsp+20h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+38h] [rbp-8h]
  float v21; // [rsp+78h] [rbp+38h] BYREF

  v5 = a5;
  sub_18003BCDC((__int64)a5);
  if ( (v5[56] & a2[66]) == a2[65] )
  {
    sub_18003BCDC((__int64)v5);
    if ( (v5[56] & a2[64]) == a2[63] )
    {
      v10 = (unsigned __int64 *)sub_180039F04((__int64)v5, (__int64)&v19);
      v11 = *(char **)(a4 + 8);
      v12 = _mm_sub_ps(
              _mm_movelh_ps((__m128)*v10, (__m128)*((unsigned int *)v10 + 2)),
              _mm_movelh_ps((__m128)*a3, (__m128)*((unsigned int *)a3 + 2)));
      v13 = _mm_mul_ps(v12, v12);
      v14 = _mm_shuffle_ps(v13, v13, 153);
      v21 = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
      if ( v11 == *(char **)(a4 + 16) )
        sub_18008A148(a4, v11, (__int64)&v21, (__int64)&a5);
      else
        sub_18008A118(a4, (__int64)&v21, (__int64)&a5);
      v5 = a5;
    }
    sub_18003BCDC((__int64)v5);
    v15 = (__int64 *)v5[5];
    for ( i = (__int64 *)v5[4]; i != v15; i += 2 )
    {
      v17 = *a3;
      v20 = *((_DWORD *)a3 + 2);
      v18 = *i;
      v19 = v17;
      sub_18008AF4C(a1, (_DWORD)a2, (unsigned int)&v19, a4, v18);
    }
  }
}
