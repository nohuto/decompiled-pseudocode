/*
 * XREFs of ?GetLayoutParameters@CVisualSurfaceRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAU3@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801F91F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualSurfaceRenderStrategy::GetLayoutParameters(
        CVisualSurfaceRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_SIZE_F *a4,
        struct D2D_RECT_F *a5,
        struct D2D_MATRIX_3X2_F *a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  float v8; // xmm1_4
  __m128 v9; // xmm2

  v6 = *((_QWORD *)a2 + 16);
  v7 = *(_BYTE *)(v6 + 204) != 0 ? 8 : 0;
  v8 = *(float *)(v7 + v6 + 184);
  v9 = (__m128)*(unsigned int *)(v7 + v6 + 188);
  *a4 = (struct D2D_SIZE_F)_mm_unpacklo_ps((__m128)LODWORD(v8), v9).m128_u64[0];
  *(_QWORD *)&a5->left = 0LL;
  a5->right = v8 + 0.0;
  a5->bottom = v9.m128_f32[0] + 0.0;
  *(_QWORD *)&a6->m11 = 1065353216LL;
  a6->m21 = 0.0;
  *(_QWORD *)&a6->m[1][1] = 1065353216LL;
  a6->dy = 0.0;
  return 0LL;
}
