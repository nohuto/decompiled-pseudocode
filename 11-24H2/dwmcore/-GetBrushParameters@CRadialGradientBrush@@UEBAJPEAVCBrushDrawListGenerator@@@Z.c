/*
 * XREFs of ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802A2CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180061E9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180061F90 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUD.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800638E0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1800B9E3C (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800BA640 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802DBF30 (-SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRadialGradientBrush::GetBrushParameters(
        CRadialGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // esi
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  float *v10; // rdx
  float v11; // xmm0_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  unsigned int v15; // xmm3_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  __int64 v18; // rcx
  unsigned int v19; // ecx
  float *v20; // rax
  float v21; // xmm3_4
  struct D2D_SIZE_U Size; // rax
  float v23; // xmm6_4
  float v24; // xmm7_4
  struct D2D_SIZE_U v25; // rax
  __int64 v26; // rcx
  float v27; // xmm6_4
  CRadialGradientEffect *v28; // rcx
  float v29; // xmm3_4
  FLOAT v30; // xmm1_4
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int16 v38; // [rsp+38h] [rbp-89h] BYREF
  char v39; // [rsp+3Ah] [rbp-87h]
  struct D2D_POINT_2F v40; // [rsp+48h] [rbp-79h] BYREF
  struct IBitmapResource *v41; // [rsp+50h] [rbp-71h] BYREF
  CSurfaceDrawListBrush *v42; // [rsp+58h] [rbp-69h] BYREF
  __int128 v43; // [rsp+60h] [rbp-61h] BYREF
  __int128 v44; // [rsp+70h] [rbp-51h] BYREF
  char v45; // [rsp+80h] [rbp-41h]
  CSurfaceDrawListBrush **v46; // [rsp+88h] [rbp-39h] BYREF
  __int64 v47; // [rsp+90h] [rbp-31h] BYREF
  float v48; // [rsp+98h] [rbp-29h]
  float v49; // [rsp+9Ch] [rbp-25h]
  __int128 v50; // [rsp+A0h] [rbp-21h]
  __int64 v51; // [rsp+B0h] [rbp-11h]
  unsigned __int64 v52; // [rsp+B8h] [rbp-9h] BYREF
  float v53; // [rsp+C0h] [rbp-1h]
  unsigned __int64 v54; // [rsp+C4h] [rbp+3h]
  float v55; // [rsp+CCh] [rbp+Bh]
  __int64 v56; // [rsp+D0h] [rbp+Fh]
  int v57; // [rsp+D8h] [rbp+17h]

  v42 = 0LL;
  v41 = 0LL;
  v45 = 0;
  v44 = 0LL;
  v43 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this, *(_QWORD *)a2, (__int64 *)&v41, (__int64)&v43);
  if ( CurrentSurface < 0 )
  {
    v34 = 82;
    goto LABEL_20;
  }
  v5 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v46, v41);
  CDrawListBitmap::operator=((__int64)&v44, v5, v6);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v46);
  CBrushDrawListGenerator::Reset(a2, v7, v8);
  v9 = *((_DWORD *)this + 57) == 1;
  v10 = (float *)((char *)a2 + 44);
  v11 = *((float *)this + 62);
  v12 = *((float *)this + 63);
  v13 = v11 + *((float *)this + 64);
  v52 = __PAIR64__(LODWORD(v12), LODWORD(v11));
  v14 = v12 + *((float *)this + 65);
  v54 = __PAIR64__(LODWORD(v11), LODWORD(v12));
  v53 = v13;
  v55 = v14;
  if ( v9 )
  {
    *(float *)&v15 = *v10 * v11;
    v16 = *v10 * v13;
    v17 = *((float *)a2 + 12) * v14;
    *((float *)&v52 + 1) = *((float *)a2 + 12) * v12;
    v54 = __PAIR64__(v15, HIDWORD(v52));
    LODWORD(v52) = v15;
    v53 = v16;
    v55 = v17;
  }
  v18 = *((_QWORD *)this + 27);
  if ( v18 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v18 + 208LL))(v18, v10, &v46);
    v19 = 0;
    v20 = (float *)&v52;
    do
    {
      ++v19;
      v21 = (float)((float)(v20[1] * *((float *)&v47 + 1)) + (float)(*v20 * *((float *)&v46 + 1))) + v49;
      *v20 = (float)((float)(v20[1] * *(float *)&v47) + (float)(*v20 * *(float *)&v46)) + v48;
      v20[1] = v21;
      v20 += 2;
    }
    while ( v19 < 3 );
  }
  v51 = 0LL;
  v50 = 0LL;
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform((__int64)this, (__int64)&v52, (__int64)&v43);
  if ( CurrentSurface < 0 )
  {
    v34 = 122;
    goto LABEL_20;
  }
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v44, &v40);
  v23 = *((float *)&v43 + 1) + 0.5;
  v24 = 0.5 / (float)*(int *)Size.width;
  v25 = CDrawListBitmap::GetSize((CDrawListBitmap *)&v44, &v40);
  v26 = *((_QWORD *)this + 30);
  v27 = v23 / (float)*(int *)(*(_QWORD *)&v25 + 4LL);
  if ( *(float *)(v26 + 28) != v24 || *(float *)(v26 + 32) != v27 )
  {
    *(float *)(v26 + 28) = v24;
    *(float *)(v26 + 32) = v27;
    ++*(_DWORD *)(v26 + 24);
  }
  v28 = (CRadialGradientEffect *)*((_QWORD *)this + 30);
  if ( !*((_BYTE *)v28 + 60) )
  {
    v29 = *((float *)&v43 + 2);
    if ( *((_BYTE *)this + 232) == 1 )
      v29 = *((float *)&v43 + 2) - 1.0;
    v30 = (float)(*((float *)this + 67) / *((float *)this + 65)) * (float)(v29 / *((float *)&v43 + 2));
    v40.x = (float)(*((float *)this + 66) / *((float *)this + 64)) * (float)(v29 / *((float *)&v43 + 2));
    v40.y = v30;
    CRadialGradientEffect::SetNonCenteredShaderConstants(v28, &v40, *((float *)&v43 + 2), v29);
  }
  v53 = 0.0;
  v55 = 0.0;
  v54 = *((_QWORD *)&v50 + 1);
  v52 = v50;
  v46 = &v42;
  v31 = *((_BYTE *)this + 232);
  v56 = v51;
  v47 = 0LL;
  LOBYTE(v48) = 1;
  v57 = 1065353216;
  LOBYTE(v38) = 1;
  HIBYTE(v38) = v31;
  v39 = 1;
  CurrentSurface = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v44, &v38, (__int64)&v52, &v47);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v46);
  if ( CurrentSurface < 0 )
  {
    v34 = 187;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      CurrentSurface,
      v34,
      0LL);
    CBrushDrawListGenerator::Reset(a2, v35, v36);
    goto LABEL_21;
  }
  v40 = (struct D2D_POINT_2F)v42;
  v42 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v40);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v40, v32, v33);
  CurrentSurface = 0;
LABEL_21:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v44);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v41);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v42);
  return (unsigned int)CurrentSurface;
}
