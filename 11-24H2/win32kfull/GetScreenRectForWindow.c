/*
 * XREFs of GetScreenRectForWindow @ 0x1401D3188
 * Callers:
 *     CheckFullScreen @ 0x14022E334 (CheckFullScreen.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x140249264 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 */

__m128i *__fastcall GetScreenRectForWindow(__m128i *a1, const struct tagWND *a2)
{
  unsigned int WindowCompositedDpiContext; // eax

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetScreenRectForDpi(a1, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
