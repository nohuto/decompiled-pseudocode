/*
 * XREFs of ?IsSoftwareCursor@COverlayContext@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18026C78C
 * Callers:
 *     ?NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18028B0A0 (-NeedsCursorPositionUpdates@CDesktopTree@@QEBA_NPEBVCCursorVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall COverlayContext::IsSoftwareCursor(const struct CCursorVisual **this, const struct CCursorVisual *a2)
{
  return this[2403] != a2 || COverlayContext::IsCursorVisibleInSoftware((COverlayContext *)this);
}
