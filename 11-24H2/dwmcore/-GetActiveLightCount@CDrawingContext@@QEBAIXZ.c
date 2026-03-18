/*
 * XREFs of ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x180265618
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800516E0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 */

__int64 __fastcall CDrawingContext::GetActiveLightCount(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  __int64 v2; // rcx
  __int64 v3; // r9
  const struct CVisualTree *v4; // r8

  CurrentVisual = CDrawingContext::GetCurrentVisual(this);
  LOBYTE(v3) = 1;
  return CLightStack::GetActiveLightCount((CLightStack *)(v2 + 424), CurrentVisual, v4, v3);
}
