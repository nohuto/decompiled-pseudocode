/*
 * XREFs of ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x1801EFCEC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     floorf_0 @ 0x1802DF608 (floorf_0.c)
 */

char __fastcall COverlayContext::IsIntelWorkaroundNeeded(
        COverlayContext *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  char v4; // bl
  float v8; // xmm6_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  struct tagRECT rcDst; // [rsp+20h] [rbp-48h] BYREF

  v4 = 0;
  if ( *((_BYTE *)this + 19578) && !*((_BYTE *)this + 19577) )
  {
    rcDst = 0LL;
    IntersectRect(&rcDst, a3, a4);
    v8 = (float)(rcDst.bottom - rcDst.top) / (float)(a3->bottom - a3->top);
    v9 = (float)((float)(rcDst.right - rcDst.left) / (float)(a3->right - a3->left)) * (float)(a2->right - a2->left);
    if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 8388608.0 )
      v9 = (float)(int)floorf_0(v9);
    v10 = (float)(a2->bottom - a2->top) * v8;
    if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 8388608.0 )
      v10 = (float)(int)floorf_0(v10);
    if ( (unsigned int)((int)v9 - 129) > 0xF7D || (unsigned int)((int)v10 - 1) > 0xFFE )
      return 1;
  }
  return v4;
}
