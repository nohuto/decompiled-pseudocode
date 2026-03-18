/*
 * XREFs of ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1802AC7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x18016FEF0 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019CB60 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18019CC54 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUD.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18019D0A8 (--1-$out_param_t@V-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18019E740 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z @ 0x1802E51D0 (-SetNonCenteredShaderConstants@CRadialGradientEffect@@QEAAXAEBUD2D_POINT_2F@@MM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRadialGradientBrush::GetBrushParameters(
        CRadialGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // esi
  __int64 *v5; // rax
  bool v6; // zf
  float *v7; // rdx
  float v8; // xmm0_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  unsigned int v12; // xmm3_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  __int64 v15; // rcx
  unsigned int v16; // ecx
  float *v17; // rax
  float v18; // xmm3_4
  __int64 v19; // r8
  struct D2D_SIZE_U Size; // rax
  float v21; // xmm6_4
  float v22; // xmm7_4
  __int64 v23; // r8
  struct D2D_SIZE_U v24; // rax
  __int64 v25; // rcx
  float v26; // xmm6_4
  CRadialGradientEffect *v27; // rcx
  float v28; // xmm3_4
  FLOAT v29; // xmm1_4
  char v30; // al
  unsigned int v31; // eax
  __int16 v33; // [rsp+38h] [rbp-89h] BYREF
  char v34; // [rsp+3Ah] [rbp-87h]
  struct D2D_POINT_2F v35; // [rsp+48h] [rbp-79h] BYREF
  struct IBitmapResource *v36; // [rsp+50h] [rbp-71h] BYREF
  CSurfaceDrawListBrush *v37; // [rsp+58h] [rbp-69h] BYREF
  __int128 v38; // [rsp+60h] [rbp-61h] BYREF
  __int128 v39; // [rsp+70h] [rbp-51h] BYREF
  char v40; // [rsp+80h] [rbp-41h]
  CSurfaceDrawListBrush **v41; // [rsp+88h] [rbp-39h] BYREF
  __int64 v42; // [rsp+90h] [rbp-31h] BYREF
  float v43; // [rsp+98h] [rbp-29h]
  float v44; // [rsp+9Ch] [rbp-25h]
  __int128 v45; // [rsp+A0h] [rbp-21h]
  __int64 v46; // [rsp+B0h] [rbp-11h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-9h] BYREF
  float v48; // [rsp+C0h] [rbp-1h]
  unsigned __int64 v49; // [rsp+C4h] [rbp+3h]
  float v50; // [rsp+CCh] [rbp+Bh]
  __int64 v51; // [rsp+D0h] [rbp+Fh]
  int v52; // [rsp+D8h] [rbp+17h]

  v37 = 0LL;
  v36 = 0LL;
  v40 = 0;
  v39 = 0LL;
  v38 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this, *(_QWORD *)a2, (__int64 *)&v36, (__int64)&v38);
  if ( CurrentSurface < 0 )
  {
    v31 = 82;
    goto LABEL_20;
  }
  v5 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v41, v36);
  CDrawListBitmap::operator=((__int64)&v39, v5);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v41);
  CBrushDrawListGenerator::Reset(a2);
  v6 = *((_DWORD *)this + 57) == 1;
  v7 = (float *)((char *)a2 + 44);
  v8 = *((float *)this + 62);
  v9 = *((float *)this + 63);
  v10 = v8 + *((float *)this + 64);
  v47 = __PAIR64__(LODWORD(v9), LODWORD(v8));
  v11 = v9 + *((float *)this + 65);
  v49 = __PAIR64__(LODWORD(v8), LODWORD(v9));
  v48 = v10;
  v50 = v11;
  if ( v6 )
  {
    *(float *)&v12 = *v7 * v8;
    v13 = *v7 * v10;
    v14 = *((float *)a2 + 12) * v11;
    *((float *)&v47 + 1) = *((float *)a2 + 12) * v9;
    v49 = __PAIR64__(v12, HIDWORD(v47));
    LODWORD(v47) = v12;
    v48 = v13;
    v50 = v14;
  }
  v15 = *((_QWORD *)this + 27);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v15 + 208LL))(v15, v7, &v41);
    v16 = 0;
    v17 = (float *)&v47;
    do
    {
      ++v16;
      v18 = (float)((float)(v17[1] * *((float *)&v42 + 1)) + (float)(*v17 * *((float *)&v41 + 1))) + v44;
      *v17 = (float)((float)(v17[1] * *(float *)&v42) + (float)(*v17 * *(float *)&v41)) + v43;
      v17[1] = v18;
      v17 += 2;
    }
    while ( v16 < 3 );
  }
  v46 = 0LL;
  v45 = 0LL;
  CurrentSurface = CGradientBrush::InferVisualToTextureTransform((__int64)this, (__int64)&v47, (__int64)&v38);
  if ( CurrentSurface < 0 )
  {
    v31 = 122;
    goto LABEL_20;
  }
  Size = CDrawListBitmap::GetSize((CDrawListBitmap *)&v39, &v35, v19);
  v21 = *((float *)&v38 + 1) + 0.5;
  v22 = 0.5 / (float)*(int *)Size.width;
  v24 = CDrawListBitmap::GetSize((CDrawListBitmap *)&v39, &v35, v23);
  v25 = *((_QWORD *)this + 30);
  v26 = v21 / (float)*(int *)(*(_QWORD *)&v24 + 4LL);
  if ( *(float *)(v25 + 28) != v22 || *(float *)(v25 + 32) != v26 )
  {
    *(float *)(v25 + 28) = v22;
    *(float *)(v25 + 32) = v26;
    ++*(_DWORD *)(v25 + 24);
  }
  v27 = (CRadialGradientEffect *)*((_QWORD *)this + 30);
  if ( !*((_BYTE *)v27 + 60) )
  {
    v28 = *((float *)&v38 + 2);
    if ( *((_BYTE *)this + 232) == 1 )
      v28 = *((float *)&v38 + 2) - 1.0;
    v29 = (float)(*((float *)this + 67) / *((float *)this + 65)) * (float)(v28 / *((float *)&v38 + 2));
    v35.x = (float)(*((float *)this + 66) / *((float *)this + 64)) * (float)(v28 / *((float *)&v38 + 2));
    v35.y = v29;
    CRadialGradientEffect::SetNonCenteredShaderConstants(v27, &v35, *((float *)&v38 + 2), v28);
  }
  v48 = 0.0;
  v50 = 0.0;
  v49 = *((_QWORD *)&v45 + 1);
  v47 = v45;
  v41 = &v37;
  v30 = *((_BYTE *)this + 232);
  v51 = v46;
  v42 = 0LL;
  LOBYTE(v43) = 1;
  v52 = 1065353216;
  LOBYTE(v33) = 1;
  HIBYTE(v33) = v30;
  v34 = 1;
  CurrentSurface = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v39, &v33, &v47, &v42);
  wil::details::out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>::~out_param_t<std::unique_ptr<CSurfaceDrawListBrush>>((__int64)&v41);
  if ( CurrentSurface < 0 )
  {
    v31 = 187;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(
      20,
      &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      CurrentSurface,
      v31,
      0LL);
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_21;
  }
  v35 = (struct D2D_POINT_2F)v37;
  v37 = 0LL;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v35);
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v35);
  CurrentSurface = 0;
LABEL_21:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
  std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v37);
  return (unsigned int)CurrentSurface;
}
