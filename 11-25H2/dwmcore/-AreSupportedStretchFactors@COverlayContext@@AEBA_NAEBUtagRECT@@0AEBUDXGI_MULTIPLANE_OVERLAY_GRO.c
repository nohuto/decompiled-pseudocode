/*
 * XREFs of ?AreSupportedStretchFactors@COverlayContext@@AEBA_NAEBUtagRECT@@0AEBUDXGI_MULTIPLANE_OVERLAY_GROUP_CAPS@@_N@Z @ 0x1801F6320
 * Callers:
 *     ?IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801899A4 (-IsPanelFitterCompatibleScale@COverlayContext@@AEBA_NAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z.c)
 *     ?IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4OverlaySize@@_N@Z @ 0x1802771EC (-IsOverlayCompatibleScale@COverlayContext@@AEBA_NPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4Overl.c)
 * Callees:
 *     <none>
 */

char __fastcall COverlayContext::AreSupportedStretchFactors(
        COverlayContext *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct DXGI_MULTIPLANE_OVERLAY_GROUP_CAPS *a4,
        bool a5)
{
  char v5; // r11
  int v6; // r10d
  __m128i v7; // xmm2
  int v8; // eax
  float v9; // xmm2_4
  float v10; // xmm2_4
  float v11; // xmm3_4

  v5 = 0;
  v6 = a2->right - a2->left;
  v7 = _mm_cvtsi32_si128(a3->right - a3->left);
  v8 = a2->bottom - a2->top;
  if ( !a5 )
    v8 = a2->right - a2->left;
  LODWORD(v9) = _mm_cvtepi32_ps(v7).m128_u32[0];
  if ( !a5 )
    v6 = a2->bottom - a2->top;
  LODWORD(v10) = COERCE_UNSIGNED_INT(v9 / (float)v8) & _xmm;
  LODWORD(v11) = COERCE_UNSIGNED_INT((float)(a3->bottom - a3->top) / (float)v6) & _xmm;
  if ( *((float *)a4 + 3) >= fmaxf(v10, v11) )
    return fminf(v10, v11) >= *((float *)a4 + 4);
  return v5;
}
