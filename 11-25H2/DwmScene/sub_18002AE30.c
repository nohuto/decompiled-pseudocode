/*
 * XREFs of sub_18002AE30 @ 0x18002AE30
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

_QWORD *__fastcall sub_18002AE30(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  __m128 v3; // xmm0
  __m128 v6; // xmm7
  __m128 v7; // xmm6
  __m128 v8; // xmm3
  _QWORD *result; // rax

  v6 = (__m128)a3;
  *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
  v7 = v3;
  *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  v8 = 0LL;
  v8.m128_u64[0] = _mm_unpacklo_ps(v7, v3).m128_u64[0];
  result = a2;
  *a2 = _mm_mul_ps(v8, v6).m128_u64[0];
  return result;
}
