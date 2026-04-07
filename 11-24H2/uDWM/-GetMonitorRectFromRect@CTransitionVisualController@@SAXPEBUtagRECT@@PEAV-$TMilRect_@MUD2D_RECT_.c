/*
 * XREFs of ?GetMonitorRectFromRect@CTransitionVisualController@@SAXPEBUtagRECT@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A4A98
 * Callers:
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180015CB8 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A5868 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x180051BE8 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

void __fastcall CTransitionVisualController::GetMonitorRectFromRect(const struct tagRECT *a1, __int64 a2)
{
  float top; // xmm1_4
  __m128i v4; // xmm0
  float bottom; // xmm1_4
  struct tagRECT v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0LL;
  CTransitionVisualController::GetMonitorRectFromRectImpl(a1, &v6);
  top = (float)v6.top;
  *(float *)a2 = (float)v6.left;
  v4 = _mm_cvtsi32_si128(v6.right);
  *(float *)(a2 + 4) = top;
  bottom = (float)v6.bottom;
  *(_DWORD *)(a2 + 8) = _mm_cvtepi32_ps(v4).m128_u32[0];
  *(float *)(a2 + 12) = bottom;
}
