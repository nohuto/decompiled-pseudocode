/*
 * XREFs of GetScreenRect @ 0x14022729C
 * Callers:
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x140207810 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x14022FDC8 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x140234EBC (xxxInjectTouchInput.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402DD95C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140026674 (GetCurrentThreadCompositedDpi.c)
 */

__m128i *__fastcall GetScreenRect(__m128i *a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  GetScreenRectForDpi(a1, CurrentThreadCompositedDpi);
  return a1;
}
