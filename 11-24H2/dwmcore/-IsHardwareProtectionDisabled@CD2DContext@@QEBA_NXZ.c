/*
 * XREFs of ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1801D2C40
 * Callers:
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@111AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180268E88 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802BC49C (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DContext::IsHardwareProtectionDisabled(CD2DContext *this)
{
  return *((_BYTE *)this + 436) || byte_1803FAB00;
}
