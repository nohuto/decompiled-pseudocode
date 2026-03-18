/*
 * XREFs of ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18027AD9C
 * Callers:
 *     ?DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801009B0 (-DrawImage@COcclusionContext@@QEAAJPEAVCResource@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180100FD4 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z @ 0x1801E3E00 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?DrawSolidRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801EE9C0 (-DrawSolidRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180236BA0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023E480 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionRect@COcclusionContext@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18028CCA8 (-AddOcclusionRect@COcclusionContext@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 * Callees:
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800984C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?PixelAlignOccluder@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x1800D3BB0 (-PixelAlignOccluder@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18019CA20 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     ?push_back@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D1AD0 (-push_back@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeed.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 *     ?reserve_region@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCTempOcclusionRect@COcclusionContext@@_K0@Z @ 0x18027B29C (-reserve_region@-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOccl.c)
 */

void __fastcall COcclusionContext::CollectRectangleForOcclusion(__int64 a1, const struct D2D_RECT_F *a2, char a3)
{
  double v3; // xmm2_8
  const struct CMILMatrix *TopByReference; // rax
  const struct D2D_RECT_F *v7; // r9
  __int64 v8; // r11
  __m128 *v9; // rax
  __m128 *v10; // r11
  struct D2D_RECT_F v11; // xmm6
  __int64 v12; // rax
  const struct tagRECT *v13; // rax
  struct D2D_RECT_F v14; // [rsp+28h] [rbp-49h] BYREF
  __int128 v15; // [rsp+38h] [rbp-39h] BYREF
  FastRegion::CRegion *v16[10]; // [rsp+48h] [rbp-29h] BYREF

  if ( !IsEmpty(a2) && g_bUseOcclusion )
  {
    v15 = 0LL;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 32));
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)TopByReference, v7, (float *)&v15);
    if ( v8 )
    {
      v9 = CBaseClipStack::Clip(a1 + 128, (__m128 *)&v14, (float *)&v15);
      *v10 = *v9;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
    {
      CBaseClipStack::Clip(a1 + 176, (__m128 *)&v14, (float *)&v15);
      if ( !IsEmpty(&v14)
        && (a3 || (float)((float)(v14.bottom - v14.top) * (float)(v14.right - v14.left)) >= *(float *)(a1 + 1540)) )
      {
        v11 = v14;
        v12 = detail::vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>::reserve_region(
                a1 + 1312,
                0xCCCCCCCCCCCCCCCDuLL * ((__int64)(*(_QWORD *)(a1 + 1320) - *(_QWORD *)(a1 + 1312)) >> 2));
        *(struct D2D_RECT_F *)v12 = v11;
        *(_BYTE *)(v12 + 16) = a3;
LABEL_13:
        v13 = (const struct tagRECT *)PixelAlignOccluder((int *)&v15, (unsigned int *)&v14, v3);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v16, v13);
        CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)(a1 + 456), v16);
        FastRegion::CRegion::FreeMemory(v16);
      }
    }
    else
    {
      CBaseClipStack::Clip(a1 + 152, (__m128 *)&v14, (float *)&v15);
      if ( !IsEmpty(&v14)
        && (float)((float)(v14.bottom - v14.top) * (float)(v14.right - v14.left)) >= *(float *)(a1 + 1540) )
      {
        detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::push_back(
          (detail::liberal_expansion_policy *)(a1 + 1128),
          &v14);
        goto LABEL_13;
      }
    }
  }
}
