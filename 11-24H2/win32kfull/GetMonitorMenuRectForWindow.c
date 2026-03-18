/*
 * XREFs of GetMonitorMenuRectForWindow @ 0x1400989C8
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x140098A48 (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRectForWindow(struct tagRECT *retstr, __int64 a2, const struct tagWND *a3)
{
  unsigned int WindowCompositedDpiContext; // eax
  const struct tagMONITOR *v5; // r9

  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a3);
  GetMonitorMenuRectForDpi(retstr, v5, (WindowCompositedDpiContext >> 8) & 0x1FF);
  return retstr;
}
