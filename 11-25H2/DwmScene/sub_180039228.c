/*
 * XREFs of sub_180039228 @ 0x180039228
 * Callers:
 *     sub_18003A010 @ 0x18003A010 (sub_18003A010.c)
 *     sub_18003B66C @ 0x18003B66C (sub_18003B66C.c)
 *     sub_180099A1C @ 0x180099A1C (sub_180099A1C.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall sub_180039228(__m128 *a1, __m128 *a2, __m128 *a3)
{
  __m128 *result; // rax
  __m128 v4; // xmm1
  __m128 v5; // xmm4
  __m128 v6; // xmm1

  result = a1;
  v4 = _mm_shuffle_ps(*a2, *a2, 27);
  v5 = _mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 0), v4);
  v6 = _mm_shuffle_ps(v4, v4, 177);
  *a1 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v6, v6, 27), _mm_shuffle_ps(*a3, *a3, 170)), (__m128)xmmword_1800F90F0),
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 85), v6), (__m128)xmmword_1800F90D0)),
          _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(*a3, *a3, 255), *a2), _mm_mul_ps(v5, (__m128)xmmword_1800F90E0)));
  return result;
}
