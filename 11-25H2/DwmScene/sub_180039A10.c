/*
 * XREFs of sub_180039A10 @ 0x180039A10
 * Callers:
 *     sub_18003BB7C @ 0x18003BB7C (sub_18003BB7C.c)
 *     sub_1800595F0 @ 0x1800595F0 (sub_1800595F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180039A10(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm3

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
  v3 = (__m128)*((unsigned int *)a2 + 2);
  v4 = (__m128)*a2;
  *(_OWORD *)a1 = xmmword_1800F7000;
  *(_OWORD *)(a1 + 16) = xmmword_1800F6F90;
  *(_OWORD *)(a1 + 32) = xmmword_1800F7030;
  *(__m128 *)(a1 + 48) = _mm_movelh_ps(v4, _mm_unpacklo_ps(v3, (__m128)0x3F800000u));
  return result;
}
