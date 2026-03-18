/*
 * XREFs of ?CalcOverlaySize@COverlayContext@@AEBA?AW4OverlaySize@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1802744E8
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     ?GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ @ 0x18002D9D0 (-GetMonitorTransform@COverlayContext@@QEBAAEBVCMonitorTransform@@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180189850 (-IsEquivalentTo@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::CalcOverlaySize(COverlayContext *a1, __int64 a2)
{
  RECT *v3; // rbx
  __m128i v4; // xmm2
  char IsEquivalentTo; // al
  unsigned int v6; // r8d
  unsigned int v8; // edi
  unsigned __int32 v9; // xmm1_4
  unsigned int v10; // r11d
  bool v11; // zf
  unsigned int bottom; // edx
  int v13; // edx
  int v14; // ecx
  unsigned int right; // edx
  int v16; // edx
  int v17; // ecx
  __m128i v18; // [rsp+20h] [rbp-28h] BYREF

  v3 = (RECT *)(a2 + 36);
  v4 = *(__m128i *)((char *)COverlayContext::GetMonitorTransform(a1) + 24);
  v18 = v4;
  IsEquivalentTo = TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEquivalentTo(
                     (unsigned int *)v3,
                     &v18);
  v6 = 0;
  if ( IsEquivalentTo )
  {
    if ( *(int *)(a2 + 20) < 0 || *(int *)(a2 + 24) < 0 )
      return 3LL;
    else
      return 3 - (unsigned int)EqualRect((const RECT *)(a2 + 20), v3);
  }
  v8 = _mm_cvtsi128_si32(v4);
  v9 = _mm_srli_si128(v4, 8).m128i_u32[0];
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12));
  if ( v3->left != v8 || v3->right != v9 )
    goto LABEL_14;
  v11 = v3->top == v18.m128i_i32[1];
  if ( v3->top > (unsigned __int32)v18.m128i_i32[1] )
  {
    bottom = v3->bottom;
    if ( bottom < v10 )
    {
      v13 = v3->top + bottom - v10 - v18.m128i_i32[1];
      v14 = -v13;
      if ( v13 > 0 )
        v14 = v13;
      if ( v14 <= 1 )
        return 1LL;
    }
LABEL_14:
    v11 = v3->top == v18.m128i_i32[1];
  }
  if ( !v11 )
    return 0LL;
  if ( v3->bottom != v10 )
    return 0LL;
  if ( v3->left <= v8 )
    return 0LL;
  right = v3->right;
  if ( right >= v9 )
    return 0LL;
  v16 = v3->left + right - v9 - v8;
  v17 = -v16;
  if ( v16 > 0 )
    v17 = v16;
  LOBYTE(v6) = v17 <= 1;
  return v6;
}
