/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075104
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180052B90 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180043CD4 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18005F7FC (--1CRegionShape@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180075260 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x1800752B4 (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180075370 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1, __int64 a2)
{
  int v2; // ebx
  CRectanglesShape **v3; // rdi
  int *v6; // rax
  CRectanglesShape *v7; // rcx
  __int64 v8; // rdx
  struct CShape *v9; // rdx
  struct CShape *v10; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v11; // [rsp+38h] [rbp-41h] BYREF
  CComplexShape *v12; // [rsp+40h] [rbp-39h] BYREF
  char v13; // [rsp+48h] [rbp-31h]
  _QWORD v14[3]; // [rsp+50h] [rbp-29h] BYREF
  int v15; // [rsp+68h] [rbp-11h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+2Fh]

  v2 = 0;
  v3 = (CRectanglesShape **)(a1 + 160);
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
    v2 = CShape::Combine(v7, v8, (CRoundedRectangleShape *)v14, (_DWORD *)(a1 + 92), 2, &v12);
    wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v11);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xA6u, 0LL);
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
