/*
 * XREFs of ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18019C790
 * Callers:
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180128740 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800CE780 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18019C4F0 (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019CB60 (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18019CC54 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUD.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetSize@CDxHandleBitmapRealization@@WBAA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E1140 (-GetSize@CDxHandleBitmapRealization@@WBAA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1802E2A80 (-GetSize@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@WBE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 (__fastcall *v21)(__int64, struct IBitmapResource **); // rax
  __int64 *Size; // rax
  CSurfaceDrawListBrush **v23; // rcx
  CSurfaceDrawListBrush *v24; // rdx
  CSurfaceDrawListBrush *v25; // rax
  unsigned int v27; // ecx
  float *v28; // rax
  float v29; // xmm1_4
  unsigned int v30; // eax
  __int16 v31; // [rsp+30h] [rbp-79h] BYREF
  char v32; // [rsp+32h] [rbp-77h]
  struct IBitmapResource *v33; // [rsp+40h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v34; // [rsp+48h] [rbp-61h] BYREF
  __int128 v35; // [rsp+50h] [rbp-59h] BYREF
  char v36; // [rsp+60h] [rbp-49h]
  __int128 v37; // [rsp+68h] [rbp-41h] BYREF
  CSurfaceDrawListBrush **v38; // [rsp+78h] [rbp-31h] BYREF
  CSurfaceDrawListBrush *v39; // [rsp+80h] [rbp-29h] BYREF
  float v40; // [rsp+88h] [rbp-21h]
  float v41; // [rsp+8Ch] [rbp-1Dh]
  __int128 v42; // [rsp+90h] [rbp-19h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-9h]
  float v44; // [rsp+A8h] [rbp-1h] BYREF
  float v45; // [rsp+ACh] [rbp+3h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+7h]
  float v47; // [rsp+B8h] [rbp+Fh]
  float v48; // [rsp+BCh] [rbp+13h]
  __int64 v49; // [rsp+C0h] [rbp+17h]
  int v50; // [rsp+C8h] [rbp+1Fh]

  v34 = 0LL;
  v33 = 0LL;
  v36 = 0;
  v35 = 0LL;
  v37 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
  CurrentSurface = CGradientBrush::GetCurrentSurface(this);
  v5 = v33;
  v6 = CurrentSurface;
  if ( CurrentSurface < 0 )
  {
    v30 = 123;
  }
  else
  {
    v7 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v38, v33);
    v8 = *(_QWORD *)v7;
    *(_QWORD *)v7 = 0LL;
    v9 = *((_QWORD *)v7 + 1);
    *((_QWORD *)v7 + 1) = 0LL;
    LOBYTE(v7) = *((_BYTE *)v7 + 16);
    *(_QWORD *)&v35 = v8;
    v36 = (char)v7;
    *((_QWORD *)&v35 + 1) = v9;
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v38);
    CBrushDrawListGenerator::Reset(a2);
    v10 = *((_DWORD *)this + 57) == 1;
    v11 = (float *)((char *)a2 + 44);
    v12 = *((float *)this + 60);
    v13 = *((float *)this + 61);
    v14 = *((float *)this + 62);
    v15 = *((float *)this + 63);
    v44 = v12;
    v45 = v13;
    v46 = __PAIR64__(LODWORD(v15), LODWORD(v14));
    if ( v10 )
    {
      v15 = v15 * *((float *)a2 + 12);
      *(float *)&v16 = *v11 * v14;
      v44 = *v11 * v12;
      v12 = v44;
      v17 = *((float *)a2 + 12) * v13;
      LODWORD(v14) = v16;
      v46 = __PAIR64__(LODWORD(v15), v16);
      v45 = v17;
      v13 = v17;
    }
    v18 = *((_QWORD *)this + 27);
    v47 = v12 - (float)(v15 - v13);
    v48 = (float)(v14 - v12) + v13;
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, float *, CSurfaceDrawListBrush ***))(*(_QWORD *)v18 + 208LL))(v18, v11, &v38);
      v27 = 0;
      v28 = &v44;
      do
      {
        ++v27;
        v29 = (float)(*((float *)&v38 + 1) * *v28) + (float)(*((float *)&v39 + 1) * v28[1]);
        *v28 = (float)((float)(*(float *)&v39 * v28[1]) + (float)(*v28 * *(float *)&v38)) + v40;
        v28[1] = v29 + v41;
        v28 += 2;
      }
      while ( v27 < 3 );
    }
    v43 = 0LL;
    v42 = 0LL;
    v6 = CGradientBrush::InferVisualToTextureTransform(this, &v44, &v37, &v42);
    if ( v6 < 0 )
    {
      v30 = 164;
    }
    else
    {
      HIDWORD(v20) = 0;
      if ( v9 )
      {
        v21 = *(__int64 (__fastcall **)(__int64, struct IBitmapResource **))(*(_QWORD *)v9 + 32LL);
        if ( (char *)v21 == (char *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize )
        {
          Size = (__int64 *)IBitmapRealizationMethodsT<CDxHandleBitmapRealization,IGDIBitmapRealization>::GetSize(
                              v9,
                              &v33);
        }
        else if ( (char *)v21 == (char *)CDxHandleBitmapRealization::GetSize )
        {
          Size = (__int64 *)CDxHandleBitmapRealization::GetSize(v9, &v33, v19);
        }
        else
        {
          Size = (__int64 *)v21(v9, &v33);
        }
        v20 = *Size;
      }
      DWORD1(v42) = 0;
      HIDWORD(v42) = 0;
      v39 = 0LL;
      v45 = 0.0;
      v46 = __PAIR64__(DWORD2(v42), 0);
      v47 = 0.0;
      v48 = 0.0;
      LOBYTE(v40) = 1;
      v50 = 1065353216;
      LOBYTE(v31) = 1;
      v32 = 1;
      v38 = &v34;
      HIBYTE(v31) = *((_BYTE *)this + 232);
      v44 = *(float *)&v42;
      *((float *)&v43 + 1) = (float)(*((float *)&v37 + 1) + 0.5) / (float)SHIDWORD(v20);
      v49 = v43;
      v6 = CSurfaceDrawListBrush::CreateWithTextureTransform((__int64)&v35, &v31, &v44, &v39);
      if ( LOBYTE(v40) )
      {
        v23 = v38;
        v24 = *v38;
        *v38 = v39;
        if ( v24 )
          std::default_delete<CSurfaceDrawListBrush>::operator()(v23, v24);
      }
      if ( v6 >= 0 )
      {
        v25 = v34;
        v34 = 0LL;
        v33 = v25;
        CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64 *)&v33);
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v33);
        v6 = 0;
        goto LABEL_16;
      }
      v30 = 181;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(
    20,
    &`CSwapchainRenderStrategy::GetLayoutParameters'::`2'::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v6,
    v30,
    0LL);
  CBrushDrawListGenerator::Reset(a2);
LABEL_16:
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v35);
  if ( v5 )
    (*(void (__fastcall **)(struct IBitmapResource *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v34 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1);
  return (unsigned int)v6;
}
