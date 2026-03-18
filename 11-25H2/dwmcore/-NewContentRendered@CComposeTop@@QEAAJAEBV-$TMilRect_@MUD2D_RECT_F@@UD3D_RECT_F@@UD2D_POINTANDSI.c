/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075D1C
 * Callers:
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075C7C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1800765A0 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028A624 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18028B844 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180043CD4 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F510 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18005F120 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18005F7FC (--1CRegionShape@@UEAA@XZ.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x180073CD0 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180075260 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18007BD70 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x18022FBF0 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CRectanglesShape **this, __int64 a2)
{
  int *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // ebx
  CRectanglesShape *v8; // rcx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-69h]
  struct CShape *v12; // [rsp+30h] [rbp-59h] BYREF
  struct CShape **v13; // [rsp+38h] [rbp-51h] BYREF
  CComplexShape *v14; // [rsp+40h] [rbp-49h] BYREF
  char v15; // [rsp+48h] [rbp-41h]
  _QWORD v16[3]; // [rsp+50h] [rbp-39h] BYREF
  int v17; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+1Fh]

  v12 = 0LL;
  v16[1] = 0LL;
  v16[0] = &CRegionShape::`vftable';
  v16[2] = &v17;
  v17 = 0;
  v18 = 0LL;
  v3 = CMilRectLFromD2D_RECT_F((int *)&v13, a2);
  CRegionShape::BuildFromRects((__int64)v16, (__int64)v3, 1u);
  if ( !this[20] )
  {
    v5 = MIDL_user_allocate(0x60uLL);
    v6 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x60uLL);
      *v6 = &CRegionShape::`vftable';
      v6[2] = v6 + 3;
      *((_DWORD *)v6 + 6) = 0;
      v6[11] = 0LL;
    }
    else
    {
      v6 = 0LL;
    }
    std::unique_ptr<CShape>::reset(this + 20, (CRectanglesShape *)v6);
    if ( !this[20] )
    {
      v7 = -2147024882;
      v11 = 112;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v11, 0LL);
      goto LABEL_12;
    }
  }
  v8 = this[2];
  v13 = &v12;
  v14 = 0LL;
  v15 = 1;
  v7 = CShape::Combine(v8, v4, (CRoundedRectangleShape *)v16, (_DWORD *)this + 23, 1, &v14);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(&v13);
  if ( v7 < 0 )
  {
    v11 = 121;
    goto LABEL_11;
  }
  v9 = CComposeTop::AddShapeToLifetime((CComposeTop *)this, v12);
  v7 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x7Fu, 0LL);
LABEL_12:
  CRegionShape::~CRegionShape((CRegionShape *)v16);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v12);
  return (unsigned int)v7;
}
