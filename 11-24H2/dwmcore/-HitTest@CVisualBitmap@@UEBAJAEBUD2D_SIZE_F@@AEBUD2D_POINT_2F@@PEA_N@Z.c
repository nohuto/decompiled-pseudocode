/*
 * XREFs of ?HitTest@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180209A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualBitmap::HitTest(
        CVisualBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __m128 v4; // xmm0
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float y; // xmm4_4

  *a4 = 0;
  if ( *((_QWORD *)this + 9) )
  {
    v4 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)this + 11) + 80LL));
    v5 = _mm_shuffle_ps(v4, v4, 170).m128_f32[0];
    if ( v5 > v4.m128_f32[0] )
    {
      v6 = _mm_shuffle_ps(v4, v4, 255).m128_f32[0];
      v7 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
      if ( v6 > v7 )
      {
        y = a3->y;
        if ( y >= v7 && v6 > y && a3->x >= v4.m128_f32[0] && v5 > a3->x )
          *a4 = 1;
      }
    }
  }
  return 0LL;
}
