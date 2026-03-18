/*
 * XREFs of ?GetLayoutParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E1D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetLayoutParameters(
        CPrimitiveGroupRenderStrategy *this,
        struct D2D_RECT_F *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  __m128 right_low; // xmm0
  __m128 bottom_low; // xmm1
  __m128 v8; // xmm3
  __m128 v9; // xmm2

  right_low = (__m128)LODWORD(a2[11].right);
  bottom_low = (__m128)LODWORD(a2[11].bottom);
  bottom_low.m128_f32[0] = bottom_low.m128_f32[0] - a2[11].top;
  right_low.m128_f32[0] = right_low.m128_f32[0] - a2[11].left;
  *a4 = (struct D2D_SIZE_F)_mm_unpacklo_ps(right_low, bottom_low).m128_u64[0];
  *a5 = a2[11];
  v8 = _mm_xor_ps((__m128)LODWORD(a2[11].left), (__m128)_xmm);
  v9 = _mm_xor_ps((__m128)LODWORD(a2[11].top), (__m128)_xmm);
  *(_OWORD *)&a6->m11 = _xmm;
  *(_QWORD *)&a6->m[2][0] = _mm_unpacklo_ps(v8, v9).m128_u64[0];
  return 0LL;
}
