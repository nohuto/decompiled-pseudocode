/*
 * XREFs of sub_18003C6DC @ 0x18003C6DC
 * Callers:
 *     sub_18003C668 @ 0x18003C668 (sub_18003C668.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall sub_18003C6DC(__m128 *a1, __m128 *a2, double a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm5
  __m128 v5; // xmm2
  __m128 v6; // xmm1
  __m128 v7; // xmm5
  __m128 v8; // xmm7
  __m128 v9; // xmm4
  __m128 v10; // xmm7
  __m128 v11; // xmm3
  __m128 v12; // xmm4

  v3 = _mm_mul_ps(*(__m128 *)&a3, (__m128)xmmword_1800F7160);
  v4 = *(__m128 *)&a3;
  v5 = _mm_cmple_ps(_mm_and_ps(v3, (__m128)xmmword_1800F7050), (__m128)xmmword_1800F7140);
  v6 = _mm_or_ps(_mm_and_ps((__m128)xmmword_1800F7070, v3), (__m128)xmmword_1800F7140);
  v7 = _mm_sub_ps(
         v4,
         _mm_mul_ps(
           _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v6, v3), v6), v5), _mm_andnot_ps(v5, v3)),
           (__m128)xmmword_1800F6FE0));
  v8 = _mm_and_ps((__m128)xmmword_1800F7070, v7);
  v9 = _mm_sub_ps(_mm_or_ps(v8, (__m128)xmmword_1800F6FF0), v7);
  v10 = _mm_cmple_ps(_mm_andnot_ps(v8, v7), (__m128)xmmword_1800F71C0);
  v11 = _mm_or_ps(_mm_andnot_ps(v10, v9), _mm_and_ps(v10, v7));
  v12 = _mm_mul_ps(v11, v11);
  *a1 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800F7090, (__m128)xmmword_1800F7090, 0), v12),
                            _mm_shuffle_ps((__m128)xmmword_1800F7060, (__m128)xmmword_1800F7060, 255)),
                          v12),
                        _mm_shuffle_ps((__m128)xmmword_1800F7060, (__m128)xmmword_1800F7060, 170)),
                      v12),
                    _mm_shuffle_ps((__m128)xmmword_1800F7060, (__m128)xmmword_1800F7060, 85)),
                  v12),
                _mm_shuffle_ps((__m128)xmmword_1800F7060, (__m128)xmmword_1800F7060, 0)),
              v12),
            (__m128)xmmword_1800F7180),
          v11);
  *a2 = _mm_mul_ps(
          _mm_add_ps(
            _mm_mul_ps(
              _mm_add_ps(
                _mm_mul_ps(
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_add_ps(
                        _mm_mul_ps(
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps((__m128)xmmword_1800F6FB0, (__m128)xmmword_1800F6FB0, 0), v12),
                            _mm_shuffle_ps((__m128)xmmword_1800F7170, (__m128)xmmword_1800F7170, 255)),
                          v12),
                        _mm_shuffle_ps((__m128)xmmword_1800F7170, (__m128)xmmword_1800F7170, 170)),
                      v12),
                    _mm_shuffle_ps((__m128)xmmword_1800F7170, (__m128)xmmword_1800F7170, 85)),
                  v12),
                _mm_shuffle_ps((__m128)xmmword_1800F7170, (__m128)xmmword_1800F7170, 0)),
              v12),
            (__m128)xmmword_1800F7180),
          _mm_or_ps(_mm_andnot_ps(v10, (__m128)xmmword_1800F7120), _mm_and_ps((__m128)xmmword_1800F7180, v10)));
}
