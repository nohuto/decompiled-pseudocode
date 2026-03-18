/*
 * XREFs of ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B10F4
 * Callers:
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801B0810 (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1054 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18027F804 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180280AF4 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180017B4C (--1CRegionShape@@UEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18006DC10 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014CE90 (--1-$out_param_t@V-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@@details@wil@@QEA.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180172828 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x1801B13E0 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z @ 0x1802242A0 (-AddShapeToLifetime@CComposeTop@@AEAAJAEBVCShape@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 */

__int64 __fastcall CComposeTop::NewContentRendered(CComposeTop *this, __int64 a2)
{
  int *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v11; // [rsp+20h] [rbp-69h]
  struct CShape *v12; // [rsp+30h] [rbp-59h] BYREF
  struct CShape **v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
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
  if ( !*((_QWORD *)this + 20) )
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
    std::unique_ptr<CShape>::reset((char *)this + 160, v6);
    if ( !*((_QWORD *)this + 20) )
    {
      v7 = -2147024882;
      v11 = 112;
LABEL_11:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v11, 0LL);
      goto LABEL_12;
    }
  }
  v8 = *((_QWORD *)this + 2);
  v13 = &v12;
  v14 = 0LL;
  v15 = 1;
  v7 = CShape::Combine(v8, v4, (__int64)v16, (__int64)this + 92, 1, &v14);
  wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>((__int64)&v13);
  if ( v7 < 0 )
  {
    v11 = 121;
    goto LABEL_11;
  }
  v9 = CComposeTop::AddShapeToLifetime(this, v12);
  v7 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x7Fu, 0LL);
LABEL_12:
  CRegionShape::~CRegionShape((CRegionShape *)v16);
  std::unique_ptr<CShape>::~unique_ptr<CShape>(&v12);
  return (unsigned int)v7;
}
