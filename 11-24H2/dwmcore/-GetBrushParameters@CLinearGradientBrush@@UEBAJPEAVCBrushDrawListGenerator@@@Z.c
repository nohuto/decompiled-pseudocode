/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180061AA0
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180018F90 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180061E9C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180061F90 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUD.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800BA640 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D7EA0 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D97E0 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLinearGradientBrush::GetBrushParameters(
        CLinearGradientBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int CurrentSurface; // eax
  struct IBitmapResource *v5; // rbx
  int v6; // edi
  CDrawListBitmap *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  bool v10; // zf
  float *v11; // rdx
  float v12; // xmm4_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  unsigned int v16; // xmm1_4
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, struct IBitmapResource **); // rax
  __int64 *Size; // rax
  CSurfaceDrawListBrush *v22; // rdx
  CSurfaceDrawListBrush *v23; // rax
  unsigned int v25; // ecx
  float *v26; // rax
  float v27; // xmm1_4
  unsigned int v28; // eax
  _BYTE v29[16]; // [rsp+30h] [rbp-79h] BYREF
  struct IBitmapResource *v30; // [rsp+40h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v31; // [rsp+48h] [rbp-61h] BYREF
  __int128 v32; // [rsp+50h] [rbp-59h] BYREF
  char v33; // [rsp+60h] [rbp-49h]
  __int128 v34; // [rsp+68h] [rbp-41h] BYREF
  CSurfaceDrawListBrush **v35; // [rsp+78h] [rbp-31h] BYREF
  CSurfaceDrawListBrush *v36; // [rsp+80h] [rbp-29h] BYREF
  float v37; // [rsp+88h] [rbp-21h]
  float v38; // [rsp+8Ch] [rbp-1Dh]
  __int128 v39; // [rsp+90h] [rbp-19h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-9h]
  float v41; // [rsp+A8h] [rbp-1h] BYREF
  float v42; // [rsp+ACh] [rbp+3h]
  unsigned __int64 v43; // [rsp+B0h] [rbp+7h]
  float v44; // [rsp+B8h] [rbp+Fh]
  float v45; // [rsp+BCh] [rbp+13h]
  __int64 v46; // [rsp+C0h] [rbp+17h]
  int v47; // [rsp+C8h] [rbp+1Fh]

  v31 = 0LL;
  v30 = 0LL;
  v33 = 0;
  v32 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v5 = v30;
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v28 = 123;
  }
  else
  {
    v7 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v35, v30);
    v8 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
    v9 = *((_QWORD *)v7 + 1);
    *((_QWORD *)v7 + 1) = 0LL;
    LOBYTE(v7) = *((_BYTE *)v7 + 16);
    *(_QWORD *)&v32 = v8;
    v33 = (char)v7;
    *((_QWORD *)&v32 + 1) = v9;
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v35);
    CBrushDrawListGenerator::Reset(a2);
    v10 = *((_DWORD *)this + 57) == 1;
    v11 = (float *)((char *)a2 + 44);
    v12 = *((float *)this + 60);
    v13 = *((float *)this + 61);
    v14 = *((float *)this + 62);
    v15 = *((float *)this + 63);
    v41 = v12;
    v42 = v13;
    v43 = __PAIR64__(LODWORD(v15), LODWORD(v14));
    if ( v10 )
    {
      v15 = v15 * *((float *)a2 + 12);
      *(float *)&v16 = *v11 * v14;
      v41 = *v11 * v12;
      v12 = v41;
      v17 = *((float *)a2 + 12) * v13;
      LODWORD(v14) = v16;
      v43 = __PAIR64__(LODWORD(v15), v16);
      v42 = v17;
      v13 = v17;
    }
    v18 = *((_QWORD *)this + 27);
    v44 = v12 - (float)(v15 - v13);
    v45 = (float)(v14 - v12) + v13;
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v18 + 208LL))(v18, v11, &v35);
      v25 = 0;
      v26 = &v41;
      do
      {
        ++v25;
        v27 = (float)(*((float *)&v35 + 1) * *v26) + (float)(*((float *)&v36 + 1) * v26[1]);
        *v26 = (float)((float)(*(float *)&v36 * v26[1]) + (float)(*v26 * *(float *)&v35)) + v37;
        v26[1] = v27 + v38;
        v26 += 2;
      }
      while ( v25 < 3 );
    }
    v40 = 0LL;
    v39 = 0LL;
    v6 = CGradientBrush::InferVisualToTextureTransform(this, &v41, &v34, &v39);
    if ( v6 < 0 )
    {
      v28 = 164;
    }
    else
    {
      HIDWORD(v19) = 0;
      if ( v9 )
      {
        v20 = *(__int64 (__fastcall **)(__int64, struct IBitmapResource **))(*(_QWORD *)v9 + 32LL);
        if ( (char *)v20 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
        {
          Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                              v9,
                              &v30);
        }
        else if ( (char *)v20 == (char *)CDxHandleBitmapRealization::GetSize )
        {
          Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v9, &v30);
        }
        else
        {
          Size = (__int64 *)v20(v9, &v30);
        }
        v19 = *Size;
      }
      DWORD1(v39) = 0;
      HIDWORD(v39) = 0;
      v36 = 0LL;
      v42 = 0.0;
      v43 = __PAIR64__(DWORD2(v39), 0);
      v44 = 0.0;
      v45 = 0.0;
      LOBYTE(v37) = 1;
      v47 = 1065353216;
      v29[0] = 1;
      v29[2] = 1;
      v35 = &v31;
      v29[1] = *((_BYTE *)this + 232);
      v41 = *(float *)&v39;
      *((float *)&v40 + 1) = (float)(*((float *)&v34 + 1) + 0.5) / (float)SHIDWORD(v19);
      v46 = v40;
      v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(&v32, v29, &v41, &v36);
      if ( LOBYTE(v37) )
      {
        v22 = *v35;
        *v35 = v36;
        if ( v22 )
          std::default_delete<CSurfaceDrawListBrush>::operator()();
      }
      if ( v6 >= 0 )
      {
        v23 = v31;
        v31 = 0LL;
        v30 = v23;
        CBrushDrawListGenerator::AttachInput(a2, 0LL, &v30);
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v30);
        v6 = 0;
        goto LABEL_16;
      }
      v28 = 181;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v6,
    v28,
    0LL);
  CBrushDrawListGenerator::Reset(a2);
LABEL_16:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v32);
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v31 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1u);
  return (unsigned int)v6;
}
