/*
 * XREFs of GetMonitorRect @ 0x140026800
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxSetWindowPlacement @ 0x140086334 (xxxSetWindowPlacement.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     GetPrimaryMonitorRect @ 0x1402129EC (GetPrimaryMonitorRect.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x14026F7E0 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     GetHimetricScaleForMonitor @ 0x1402818AC (GetHimetricScaleForMonitor.c)
 *     UserGetHipDeviceInfo @ 0x14028B8F0 (UserGetHipDeviceInfo.c)
 *     xxxSetInternalWindowPos @ 0x1402AB2DC (xxxSetInternalWindowPos.c)
 *     ?_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z @ 0x1402C80C4 (-_GetOwnerTransformedMonitorRect@@YAXPEAUtagWND@@PEAUtagMONITOR@@HPEAUtagRECT@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpiContext@@YAKXZ @ 0x14002699C (-GetCurrentThreadCompositedDpiContext@@YAKXZ.c)
 */

__int64 __fastcall GetMonitorRect(__int64 a1, __int64 a2)
{
  unsigned int CurrentThreadCompositedDpiContext; // eax

  CurrentThreadCompositedDpiContext = GetCurrentThreadCompositedDpiContext();
  GetMonitorRectForDpi(a1, a2, (CurrentThreadCompositedDpiContext >> 8) & 0x1FF);
  return a1;
}
