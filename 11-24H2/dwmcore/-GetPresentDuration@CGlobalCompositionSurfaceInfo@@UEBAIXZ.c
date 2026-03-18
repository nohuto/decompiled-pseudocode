/*
 * XREFs of ?GetPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x1801D8580
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x1801D8340 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 *     ?CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z @ 0x1802370E0 (-CalcApprovedPresentDuration@CGlobalCompositionSurfaceInfo@@UEBAIPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::GetPresentDuration(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 26);
  if ( v1 && CCommonRegistryData::m_customRefreshRateMode )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 176LL))(v1);
  else
    return 0LL;
}
