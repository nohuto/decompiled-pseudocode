/*
 * XREFs of GetMonitorMenuRect @ 0x1C024B3C4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00D9A30 (xxxSystemParametersInfoWorker.c)
 *     FindBestPos @ 0x1C0231A14 (FindBestPos.c)
 * Callees:
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x1C00D8C10 (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 *     ?GetMonitorMenuRectForDpi@@YA?AUtagRECT@@PEBUtagMONITOR@@G@Z @ 0x1C024B2FC (-GetMonitorMenuRectForDpi@@YA-AUtagRECT@@PEBUtagMONITOR@@G@Z.c)
 */

struct tagRECT *__fastcall GetMonitorMenuRect(struct tagRECT *retstr, struct tagMONITOR *a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext((__int64)retstr);
  GetMonitorMenuRectForDpi(retstr, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return retstr;
}
