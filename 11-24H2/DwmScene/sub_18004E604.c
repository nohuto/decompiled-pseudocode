/*
 * XREFs of sub_18004E604 @ 0x18004E604
 * Callers:
 *     sub_18004E170 @ 0x18004E170 (sub_18004E170.c)
 *     sub_18004E4D4 @ 0x18004E4D4 (sub_18004E4D4.c)
 *     sub_18004E580 @ 0x18004E580 (sub_18004E580.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18004E604(__int64 a1)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm2
  __m128 v3; // xmm1
  float v4; // xmm7_4
  __m128 v5; // xmm2
  __int64 v6; // rcx

  v1 = _mm_add_ps(_mm_add_ps(*(__m128 *)(a1 + 320), *(__m128 *)(a1 + 304)), *(__m128 *)(a1 + 336));
  *(_DWORD *)(a1 + 400) = v1.m128_i32[0];
  *(_DWORD *)(a1 + 408) = _mm_shuffle_ps(v1, v1, 170).m128_u32[0];
  *(_DWORD *)(a1 + 404) = _mm_shuffle_ps(v1, v1, 85).m128_u32[0];
  *(_DWORD *)(a1 + 412) = _mm_shuffle_ps(v1, v1, 255).m128_u32[0];
  *(__m128 *)(a1 + 400) = _mm_mul_ps((__m128)xmmword_18018D4F0, *(__m128 *)(a1 + 400));
  v2 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 256));
  v3 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 272));
  v4 = (float)((float)(_mm_shuffle_ps(v2, v2, 85).m128_f32[0] * 0.71520001) + (float)(v2.m128_f32[0] * 0.21259999))
     + (float)(_mm_shuffle_ps(v2, v2, 170).m128_f32[0] * 0.0722);
  v5 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 288));
  v6 = a1 + 416;
  *(float *)v6 = v4;
  *(float *)(v6 + 4) = (float)((float)(_mm_shuffle_ps(v3, v3, 85).m128_f32[0] * 0.71520001)
                             + (float)(v3.m128_f32[0] * 0.21259999))
                     + (float)(_mm_shuffle_ps(v3, v3, 170).m128_f32[0] * 0.0722);
  *(float *)(v6 + 8) = (float)((float)(_mm_shuffle_ps(v5, v5, 85).m128_f32[0] * 0.71520001)
                             + (float)(v5.m128_f32[0] * 0.21259999))
                     + (float)(_mm_shuffle_ps(v5, v5, 170).m128_f32[0] * 0.0722);
  sub_18003AC48((unsigned __int64 *)v6);
}
