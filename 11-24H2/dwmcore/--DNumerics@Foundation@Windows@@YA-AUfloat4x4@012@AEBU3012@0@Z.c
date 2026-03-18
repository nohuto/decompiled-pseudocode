/*
 * XREFs of ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1801237B0
 * Callers:
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180123A4C (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__m128 *__fastcall Windows::Foundation::Numerics::operator*(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm3
  __m128 v5; // xmm4
  __m128 v6; // xmm9
  __m128 v7; // xmm10
  __m128 v8; // xmm7
  __m128 v9; // xmm8
  __m128 v10; // xmm6
  __m128 v11; // xmm1

  result = a1;
  v4 = a2[1];
  v5 = a2[2];
  v6 = a2[3];
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = a3[3];
  v11 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 170), v9), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), *a3));
  *a1 = _mm_add_ps(
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 255), v10), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 85), v8)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 170), v9), _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0), *a3)));
  a1[1] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v4, v4, 255), v10), _mm_mul_ps(_mm_shuffle_ps(v4, v4, 85), v8)),
            v11);
  a1[2] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 255), v10), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 85), v8)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v5, v5, 170), v9), _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), v7)));
  a1[3] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 255), v10), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), v8)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), v9), _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v7)));
  return result;
}
