/*
 * XREFs of ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC
 * Callers:
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x18004B910 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18004CE50 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x18004CF90 (-GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x18004DE60 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x18004DFD0 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1DF0 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800D29C0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801DF078 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1802374B8 (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 * Callees:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180028518 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsCompositionThread@@YA_NXZ @ 0x180154EF8 (-IsCompositionThread@@YA_NXZ.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18020D97C (McTemplateU0xxq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int CompositionSurfaceRenderingRealization; // eax
  int v5; // ecx
  __int64 v6; // rax
  int updated; // eax
  _DWORD v9[4]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v10; // [rsp+40h] [rbp-188h]
  int v11; // [rsp+48h] [rbp-180h]
  int v12; // [rsp+198h] [rbp-30h]

  v2 = 0;
  v3 = 0;
  memset_0(v9, 0, 0x178uLL);
  if ( IsCompositionThread() )
  {
    CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v9);
    if ( CompositionSurfaceRenderingRealization < 0 )
    {
      v3 = CompositionSurfaceRenderingRealization | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        0LL,
        0,
        CompositionSurfaceRenderingRealization | 0x10000000,
        0x1E4u,
        0LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0xxq_EventWriteTransfer(
          v5,
          (unsigned int)&CompSurfInfo_ForceUpdateRealization_Start,
          *((_QWORD *)this + 5),
          v10,
          v11);
      if ( (unsigned int)(v9[0] - 2) <= 1 && v9[1] == *((_DWORD *)this + 10) && v9[2] == *((_DWORD *)this + 11) )
      {
        v6 = *((_QWORD *)this + 17);
        if ( !v6 || v6 == v10 )
        {
          v12 |= 0x400u;
          *((_BYTE *)this + 96) = 1;
          updated = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                      this,
                      (const struct CSM_SURFACE_UPDATE_ *)v9);
          v3 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x200u, 0LL);
          *((_BYTE *)this + 96) = 0;
          v2 = 1;
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &CompSurfInfo_ForceUpdateRealization_Stop,
          v2);
    }
  }
  return v3;
}
