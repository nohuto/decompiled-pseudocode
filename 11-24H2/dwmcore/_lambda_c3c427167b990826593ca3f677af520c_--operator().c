/*
 * XREFs of _lambda_c3c427167b990826593ca3f677af520c_::operator() @ 0x1801B3A80
 * Callers:
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______lambda_c3c427167b990826593ca3f677af520c___ @ 0x1800A60E4 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801B3B30 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

int *__fastcall lambda_c3c427167b990826593ca3f677af520c_::operator()(__int64 *a1, int *a2, __int64 a3)
{
  double v3; // xmm2_8
  __int64 v5; // rcx
  float v6; // xmm1_4
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  float v10[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v5 = *a1;
  v6 = (float)*(int *)(a3 + 4);
  v10[0] = (float)*(int *)a3;
  v7 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 8));
  v10[1] = v6;
  v8 = _mm_cvtsi32_si128(*(_DWORD *)(a3 + 12));
  LODWORD(v10[2]) = _mm_cvtepi32_ps(v7).m128_u32[0];
  LODWORD(v10[3]) = _mm_cvtepi32_ps(v8).m128_u32[0];
  v11 = 0LL;
  CDrawingContext::CalcWorldSpaceClippedBounds(v5, v10, &v11);
  PixelAlign(a2, (unsigned int *)&v11, v3);
  return a2;
}
