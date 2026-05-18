/*
 * XREFs of sub_180039B00 @ 0x180039B00
 * Callers:
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 *     sub_180059750 @ 0x180059750 (sub_180059750.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180039B00(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm1

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  result = a1;
  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v3 = _mm_unpacklo_ps((__m128)0LL, (__m128)a2[1]);
  v4 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)0LL, (__m128)a2[2]), (__m128)xmmword_18018D330);
  *(_OWORD *)a1 = *a2;
  *(__m128 *)(a1 + 16) = v3;
  *(__m128 *)(a1 + 32) = v4;
  *(_OWORD *)(a1 + 48) = xmmword_1800F8150;
  return result;
}
