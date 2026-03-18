/*
 * XREFs of ?IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18029077C
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::IsSoftwareCursor(CDrawingContext *this, const struct CCursorVisual *a2)
{
  const struct CCursorVisual **v2; // rcx

  v2 = (const struct CCursorVisual **)*((_QWORD *)this + 6);
  return !v2 || v2[2403] != a2 || COverlayContext::IsCursorVisibleInSoftware((COverlayContext *)v2);
}
