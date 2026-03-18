/*
 * XREFs of ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800615A0
 * Callers:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x180060C58 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180063990 (-CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ.c)
 *     ?ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ @ 0x180064EEC (-ConvertSingleDesktopPlane@CConversionSwapChain@@IEAAJXZ.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18006522C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18014CF00 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x1801C52D0 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z @ 0x1801CFD98 (-CopyRegion@CDecodeBitmap@@QEAAJAEBVCRegion@@PEAUID3D11Texture2D@@I@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x180207C34 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAXPEAV-$DynArrayIA@UtagRECT.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180258EF0 (-GetUnOccludedWorldShape@CRegionShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180284788 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1802B5EA0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802C76D0 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802CA6B0 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802CCCA8 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z @ 0x1802D2C70 (-GetDirtyRects@CHolographicInteropTexture@@UEAAXIIPEAIPEAUtagRECT@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CRgnData::StepIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v2; // eax
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rcx
  __int64 v5; // r8

  v2 = *((_DWORD *)a2 + 8) + 1;
  *((_DWORD *)a2 + 8) = v2;
  if ( v2 >= *((_DWORD *)a2 + 9) )
  {
    while ( 1 )
    {
      v3 = *((_QWORD *)a2 + 2) + 8LL;
      *((_QWORD *)a2 + 2) = v3;
      v4 = v3 + *(int *)(v3 + 4);
      *((_QWORD *)a2 + 3) = v4;
      v5 = (__int64)(v3 + 8 + *(int *)(v3 + 12) - v4) >> 3;
      *((_DWORD *)a2 + 9) = v5;
      if ( (_DWORD)v5 )
        break;
      if ( v3 >= *((_QWORD *)a2 + 1) )
        return;
    }
    *((_DWORD *)a2 + 8) = 0;
  }
}
