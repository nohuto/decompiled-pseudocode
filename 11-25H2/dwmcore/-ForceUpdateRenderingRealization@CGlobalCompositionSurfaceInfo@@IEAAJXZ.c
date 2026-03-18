/*
 * XREFs of ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800CFA2C
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1800A0970 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1B60 (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RE.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A1E00 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CF8B0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ @ 0x1800CF9F0 (-GetRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAPEAVIBitmapRealization@@XZ.c)
 *     ?HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z @ 0x1800D08C0 (-HasRenderingRealization@CBitmapRenderStrategy@@SA_NPEAVIBitmapResource@@@Z.c)
 *     ?IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z @ 0x1800D0A30 (-IsReadyToDraw@CBitmapRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@PEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180108A80 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801E89B0 (-DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x18023FD8C (-SetIndependentFlipNotify@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 * Callees:
 *     ?IsCompositionThread@@YA_NXZ @ 0x18003E260 (-IsCompositionThread@@YA_NXZ.c)
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180061858 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18006DBC8 (McTemplateU0t_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x180219A0C (McTemplateU0xxq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  CComposition *v4; // rcx
  int CompositionSurfaceRenderingRealization; // eax
  int v6; // ecx
  __int64 v7; // rax
  int updated; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-198h] BYREF
  __int64 v11; // [rsp+40h] [rbp-188h]
  int v12; // [rsp+48h] [rbp-180h]
  int v13; // [rsp+198h] [rbp-30h]

  v2 = 0;
  v3 = 0;
  memset_0(v10, 0, 0x178uLL);
  if ( IsCompositionThread(v4) )
  {
    CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v10);
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
          v6,
          (unsigned int)&CompSurfInfo_ForceUpdateRealization_Start,
          *((_QWORD *)this + 5),
          v11,
          v12);
      if ( (unsigned int)(v10[0] - 2) <= 1 && v10[1] == *((_DWORD *)this + 10) && v10[2] == *((_DWORD *)this + 11) )
      {
        v7 = *((_QWORD *)this + 17);
        if ( !v7 || v7 == v11 )
        {
          v13 |= 0x400u;
          *((_BYTE *)this + 96) = 1;
          updated = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
                      this,
                      (const struct CSM_SURFACE_UPDATE_ *)v10);
          v3 = updated;
          if ( updated < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x200u, 0LL);
          *((_BYTE *)this + 96) = 0;
          v2 = 1;
        }
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0t_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (__int64)&CompSurfInfo_ForceUpdateRealization_Stop,
          v2);
    }
  }
  return v3;
}
