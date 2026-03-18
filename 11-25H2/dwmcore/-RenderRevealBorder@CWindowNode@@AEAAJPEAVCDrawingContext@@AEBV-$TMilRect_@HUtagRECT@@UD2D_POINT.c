/*
 * XREFs of ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800737D0
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18005F7FC (--1CRegionShape@@UEAA@XZ.c)
 *     ?GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ @ 0x180073AA0 (-GetCurrentFlipExSurface@CWindowNode@@AEBAPEAVCCompositionSurfaceBitmap@@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180074330 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x180074B90 (-FillShapeWithSolidColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x1800A2540 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::RenderRevealBorder(__int64 a1, __int64 a2, _DWORD *a3, CRoundedRectangleShape *a4)
{
  int v5; // ebx
  CCompositionSurfaceBitmap *CurrentFlip; // r12
  int v11; // eax
  float v12; // xmm1_4
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  struct CShape *v18; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v19; // [rsp+38h] [rbp-C8h] BYREF
  struct CShape **v20; // [rsp+48h] [rbp-B8h] BYREF
  CComplexShape *v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22; // [rsp+58h] [rbp-A8h]
  struct CShape *v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  char v24; // [rsp+70h] [rbp-90h]
  _QWORD v25[3]; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+98h] [rbp-68h] BYREF
  __int64 v27; // [rsp+D8h] [rbp-28h]
  _QWORD v28[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v29; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v30; // [rsp+138h] [rbp+38h]

  v5 = 0;
  CurrentFlip = CWindowNode::GetCurrentFlipExSurface((CWindowNode *)a1);
  if ( (unsigned int)CCompositionSurfaceBitmap::GetSizePreference(CurrentFlip) == 1
    && (*(_DWORD *)(a1 + 696) - *(_DWORD *)(a1 + 688) > a3[2] - *a3
     || (int)(HIDWORD(*(_QWORD *)(a1 + 696)) - HIDWORD(*(_QWORD *)(a1 + 688))) > a3[3] - a3[1]) )
  {
    CCompositionSurfaceBitmap::GetBorderColor(CurrentFlip, &v19);
    v11 = *(_DWORD *)(a2 + 3168);
    if ( v11 )
      v12 = *(float *)(*(_QWORD *)(a2 + 3160) + 4LL * (unsigned int)(v11 - 1));
    else
      v12 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v18 = 0LL;
    v28[1] = 0LL;
    v28[0] = &CRegionShape::`vftable';
    v19.a = v19.a * v12;
    v13 = *(_OWORD *)(a1 + 688);
    v28[2] = &v29;
    v29 = 0;
    *(_OWORD *)v23 = v13;
    v30 = 0LL;
    CRegionShape::BuildFromRects((__int64)v28, (__int64)v23, 1u);
    v25[1] = 0LL;
    v25[2] = &v26;
    v25[0] = &CRegionShape::`vftable';
    v26 = 0;
    v27 = 0LL;
    CRegionShape::BuildFromRects((__int64)v25, (__int64)a3, 1u);
    v23[1] = 0LL;
    v23[0] = (struct CShape *)&v18;
    v24 = 1;
    v5 = CShape::Combine((CRectanglesShape *)v28, v14, (CRoundedRectangleShape *)v25, 0LL, 2, &v23[1]);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(v23);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x490u, 0LL);
    }
    else if ( a4 )
    {
      v20 = v23;
      v23[0] = 0LL;
      v21 = 0LL;
      v22 = 1;
      v5 = CShape::Combine(v18, v15, a4, 0LL, 1, &v21);
      wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v20);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x499u, 0LL);
      }
      else
      {
        v16 = CDrawingContext::FillShapeWithSolidColor((CDrawingContext *)a2, v23[0], &v19);
        v5 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x49Cu, 0LL);
      }
      std::unique_ptr<CShape>::~unique_ptr<CShape>(v23);
    }
    else
    {
      v17 = CDrawingContext::FillShapeWithSolidColor((CDrawingContext *)a2, v18, &v19);
      v5 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x4A0u, 0LL);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v25);
    CRegionShape::~CRegionShape((CRegionShape *)v28);
    std::unique_ptr<CShape>::~unique_ptr<CShape>(&v18);
  }
  return (unsigned int)v5;
}
