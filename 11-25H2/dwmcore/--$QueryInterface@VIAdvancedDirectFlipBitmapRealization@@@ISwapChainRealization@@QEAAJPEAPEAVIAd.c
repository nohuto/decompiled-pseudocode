/*
 * XREFs of ??$QueryInterface@VIAdvancedDirectFlipBitmapRealization@@@ISwapChainRealization@@QEAAJPEAPEAVIAdvancedDirectFlipBitmapRealization@@@Z @ 0x1801FE4DC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@33AEBVCCornerRects@@AEBVCMILMatrix@@W4DXGI_MODE_ROTATION@@I_N7AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@78@Z @ 0x180274714 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ISwapChainRealization::QueryInterface<IAdvancedDirectFlipBitmapRealization>(
        CGDISectionBitmapRealization *a1,
        void **a2)
{
  __int64 (__fastcall *v2)(CGDISectionBitmapRealization *, const struct _GUID *, void **); // rax

  v2 = **(__int64 (__fastcall ***)(CGDISectionBitmapRealization *, const struct _GUID *, void **))a1;
  if ( v2 == CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface )
    return CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>::InternalQueryInterface(
             a1,
             &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
             a2);
  else
    return v2(a1, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, a2);
}
