/*
 * XREFs of ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x1801E0470
 * Callers:
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x1802C5AFC (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD2DContext::IsHardwareProtectionDisabled(CD2DContext *this)
{
  return *((_BYTE *)this + 436) || byte_180406B50;
}
