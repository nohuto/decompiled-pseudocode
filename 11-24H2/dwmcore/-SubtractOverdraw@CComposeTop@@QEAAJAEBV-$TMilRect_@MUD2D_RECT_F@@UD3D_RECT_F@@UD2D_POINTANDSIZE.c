/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180017B4C (--1CRegionShape@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180172828 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x1801B13E0 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1801B1434 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1801B14F0 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 *v3; // rdi
  int *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct CShape *v9; // rdx
  struct CShape *v10; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v11; // [rsp+38h] [rbp-41h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  char v13; // [rsp+48h] [rbp-31h]
  _QWORD v14[3]; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+68h] [rbp-11h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+2Fh]

  v2 = 0;
  v3 = (__int64 *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 160) )
  {
    v10 = 0LL;
    v14[1] = 0LL;
    v15 = 0;
    v16 = 0LL;
    v14[0] = &CRegionShape::`vftable';
    v14[2] = &v15;
    v6 = CMilRectLFromD2D_RECT_F((int *)&v11, a2);
    CRegionShape::BuildFromRects((__int64)v14, (__int64)v6, 1u);
    v7 = *v3;
    v12 = 0LL;
    v11 = &v10;
    v13 = 1;
    v2 = CShape::Combine(v7, v8, (__int64)v14, a1 + 92, 2, &v12);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v11);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0xA6u, 0LL);
      CRegionShape::~CRegionShape((CRegionShape *)v14);
      std::unique_ptr<CShape>::~unique_ptr<CShape>(&v10);
    }
    else
    {
      if ( ShapeBoundsEmpty(v10) )
      {
        v9 = 0LL;
      }
      else
      {
        v9 = v10;
        v10 = 0LL;
      }
      std::unique_ptr<CShape>::reset(v3, v9);
      CRegionShape::~CRegionShape((CRegionShape *)v14);
      if ( v10 )
        std::default_delete<CShape>::operator()();
    }
  }
  return (unsigned int)v2;
}
