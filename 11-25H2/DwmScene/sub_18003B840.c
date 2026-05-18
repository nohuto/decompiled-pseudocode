/*
 * XREFs of sub_18003B840 @ 0x18003B840
 * Callers:
 *     sub_18003B924 @ 0x18003B924 (sub_18003B924.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003B840(__int64 a1, unsigned __int64 *a2, __m128 *a3)
{
  __int64 result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm2

  result = a1;
  v4 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
  v5 = _mm_add_ps(
         _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), a3[2]), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), a3[1])),
         _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a3));
  *(_QWORD *)a1 = v5.m128_u64[0];
  *(_DWORD *)(a1 + 8) = _mm_shuffle_ps(v5, v5, 170).m128_u32[0];
  return result;
}
