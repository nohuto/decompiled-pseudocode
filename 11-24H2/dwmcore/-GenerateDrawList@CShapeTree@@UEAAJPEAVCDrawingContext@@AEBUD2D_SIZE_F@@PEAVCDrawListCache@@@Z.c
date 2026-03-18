/*
 * XREFs of ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006DF60
 * Callers:
 *     <none>
 * Callees:
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180019E24 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x18006D6B4 (-Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x18006DC60 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006DDA4 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006F0F0 (-Get2DScaleDimensionsWithPerspective@CMILMatrix@@QEBA_NPEAM0PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800FDB08 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800FEB30 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016AC0C (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2PEAV4@@Z @ 0x1802ACE4C (-ComputePartialIntermediate@CShapeTree@@CA_NAEBVCMILMatrix@@AEBUD2D_VECTOR_2F@@AEBV-$TMilRect_@M.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShapeTree::GenerateDrawList(
        __m128i *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __m128i v4; // xmm6
  int v9; // ebx
  float v10; // xmm7_4
  __m128 v11; // xmm8
  float v12; // xmm1_4
  float v13; // xmm14_4
  float v14; // xmm0_4
  float v15; // xmm10_4
  float v16; // xmm2_4
  float v17; // xmm13_4
  float v18; // xmm9_4
  unsigned __int8 v19; // r15
  __int64 v20; // rcx
  float v21; // xmm15_4
  float v22; // xmm10_4
  float v23; // xmm9_4
  void (__fastcall *v24)(__int64, _DWORD *); // rax
  float v25; // xmm12_4
  float v26; // xmm11_4
  float v27; // xmm3_4
  float v28; // xmm12_4
  float v29; // xmm11_4
  int v30; // eax
  __int64 v31; // r8
  __int64 v32; // rbx
  CDrawListBitmap *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __m128d v37; // xmm3
  __m128d v38; // xmm4
  double v39; // xmm1_8
  unsigned int v40; // xmm5_4
  double v41; // xmm1_8
  int v42; // eax
  int DrawList; // eax
  __int64 v44; // rcx
  int v46; // eax
  CEffectIntermediateProducer *v47; // rbx
  CDrawListBitmap *v48; // rax
  __int64 v49[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v50; // [rsp+50h] [rbp-B0h] BYREF
  char v51; // [rsp+52h] [rbp-AEh]
  __m128i v52; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v53; // [rsp+70h] [rbp-90h] BYREF
  float v54; // [rsp+78h] [rbp-88h]
  __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  float v56; // [rsp+88h] [rbp-78h]
  float v57; // [rsp+8Ch] [rbp-74h]
  __int128 v58; // [rsp+90h] [rbp-70h] BYREF
  char v59; // [rsp+A0h] [rbp-60h]
  _DWORD v60[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-50h] BYREF
  int v62; // [rsp+C0h] [rbp-40h]
  int v63; // [rsp+10Ch] [rbp+Ch]
  char v64; // [rsp+110h] [rbp+10h]
  _BYTE v65[64]; // [rsp+120h] [rbp+20h] BYREF
  int v66; // [rsp+160h] [rbp+60h]
  struct D2D_RECT_F v67; // [rsp+170h] [rbp+70h] BYREF
  __int128 v68; // [rsp+180h] [rbp+80h] BYREF
  char v69; // [rsp+190h] [rbp+90h]
  __int128 v70; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v71[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v72[32]; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v73; // [rsp+1D8h] [rbp+D8h]
  int v74; // [rsp+1E4h] [rbp+E4h]
  _BYTE v75[4496]; // [rsp+200h] [rbp+100h] BYREF

  v4 = _mm_loadu_si128(this + 5);
  v9 = 0;
  v52 = v4;
  if ( this[6].m128i_i8[1] )
  {
    v10 = 0.0;
    if ( *(float *)v4.m128i_i32 < 0.0 )
    {
      v4.m128i_i32[0] = 0;
      v52.m128i_i32[0] = 0;
    }
    v11 = (__m128)v52.m128i_u32[1];
    v12 = *(float *)&v52.m128i_i32[1];
    if ( *(float *)&v52.m128i_i32[1] < 0.0 )
    {
      v11 = 0LL;
      v12 = 0.0;
      v52.m128i_i32[1] = 0;
    }
    v13 = *(float *)&v52.m128i_i32[2];
    v14 = *(float *)&v52.m128i_i32[2];
    v15 = *(float *)&v52.m128i_i32[2];
    v16 = *(float *)&v52.m128i_i32[2];
    if ( *(float *)&v52.m128i_i32[2] > a3->width )
    {
      v52.m128i_i32[2] = LODWORD(a3->width);
      v13 = *(float *)&v52.m128i_i32[2];
      v14 = *(float *)&v52.m128i_i32[2];
      v15 = *(float *)&v52.m128i_i32[2];
      v16 = *(float *)&v52.m128i_i32[2];
    }
    v17 = *(float *)&v52.m128i_i32[3];
    v18 = *(float *)&v52.m128i_i32[3];
    if ( *(float *)&v52.m128i_i32[3] > a3->height )
    {
      v15 = v16;
      v52.m128i_i32[3] = LODWORD(a3->height);
      v17 = *(float *)&v52.m128i_i32[3];
      v18 = *(float *)&v52.m128i_i32[3];
    }
    if ( v14 > *(float *)v4.m128i_i32 && v18 > v12 )
    {
      v66 = 0;
      v49[0] = 0LL;
      v19 = 0;
      CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 288), (struct CMILMatrix *)v65);
      CMILMatrix::Get2DScaleDimensionsWithPerspective(v65, v49, (char *)v49 + 4, &v52);
      v20 = *((_QWORD *)a2 + 4);
      v21 = 0.0;
      v54 = 0.0;
      v22 = (float)(v15 - *(float *)v4.m128i_i32) * *(float *)v49;
      v23 = (float)(v18 - v11.m128_f32[0]) * *((float *)v49 + 1);
      v24 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 88LL);
      *(_QWORD *)&v70 = 0LL;
      v25 = v22;
      *((_QWORD *)&v70 + 1) = __PAIR64__(LODWORD(v23), LODWORD(v22));
      v26 = v23;
      v55 = 0LL;
      v56 = v22;
      v57 = v23;
      v24(v20, v60);
      if ( fmaxf(v22 - 0.0, v23 - 0.0) > fmaxf((float)v60[0], (float)v60[1]) )
      {
        v19 = 1;
        v67 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>(v65, &v52, &v67);
        v68 = 0LL;
        CDrawingContext::GetClipBoundsWorld(a2, &v68);
        if ( *(float *)&v68 > v67.left )
          LODWORD(v67.left) = v68;
        if ( *((float *)&v68 + 1) > v67.top )
          v67.top = *((FLOAT *)&v68 + 1);
        if ( v67.right > *((float *)&v68 + 2) )
          v67.right = *((FLOAT *)&v68 + 2);
        if ( v67.bottom > *((float *)&v68 + 3) )
          v67.bottom = *((FLOAT *)&v68 + 3);
        if ( IsEmpty(&v67) )
        {
          v67.bottom = 0.0;
          v67.right = 0.0;
          v67.top = 0.0;
          v67.left = 0.0;
        }
        if ( !(unsigned __int8)CShapeTree::ComputePartialIntermediate((struct CMILMatrix *)v65, (__int64)&v55) )
          return (unsigned int)v9;
        v21 = *(float *)&v55;
        v27 = *((float *)&v55 + 1);
        v22 = v22 + COERCE_FLOAT(v55 ^ _xmm);
        v17 = *(float *)&v52.m128i_i32[3];
        v23 = v23 + COERCE_FLOAT(HIDWORD(v55) ^ _xmm);
        v13 = *(float *)&v52.m128i_i32[2];
        v11 = (__m128)v52.m128i_u32[1];
        v4.m128i_i32[0] = v52.m128i_i32[0];
        v26 = v57;
        v25 = v56;
        *((_QWORD *)&v70 + 1) = __PAIR64__(LODWORD(v23), LODWORD(v22));
        v54 = COERCE_FLOAT(v55 ^ _xmm) + 0.0;
        *(float *)&v70 = v54;
        *((float *)&v70 + 1) = COERCE_FLOAT(HIDWORD(v55) ^ _xmm) + 0.0;
        v10 = *((float *)&v70 + 1);
      }
      else
      {
        v27 = *((float *)&v55 + 1);
      }
      v28 = v25 - v21;
      if ( v28 >= 1.0 )
      {
        v29 = v26 - v27;
        if ( v29 >= 1.0 )
        {
          v59 = 0;
          v49[0] = 0LL;
          v58 = 0LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(v49);
          v67.left = v28;
          v67.top = v29;
          v30 = CShapeTree::RenderIntermediate(
                  (CShapeTree *)this,
                  a2,
                  a3,
                  (__int64)&v67,
                  (__int64)&v52,
                  (__int64)&v70,
                  2 * (v19 ^ 1u) + 2,
                  v49);
          v9 = v30;
          if ( v30 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xBFu, 0LL);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v49);
          }
          else
          {
            if ( v19 || *((_BYTE *)a4 + 86) )
            {
              v32 = v49[0];
              v33 = CDrawListBitmap::CDrawListBitmap(
                      (CDrawListBitmap *)&v68,
                      (struct IBitmapRealization *)((v49[0] + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v49[0] >> 64)),
                      v31);
              CDrawListBitmap::operator=(&v58, v33);
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v68);
            }
            else
            {
              *(_QWORD *)&v67.left = 0LL;
              v46 = CShapeBitmapProducer::Create((__int64)this, a3, &v52, &v70, v49, (CCachedImageProducer **)&v67);
              v9 = v46;
              if ( v46 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0xD0u, 0LL);
                if ( *(_QWORD *)&v67.left )
                  CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(*(CEffectIntermediateProducer **)&v67.left);
                if ( v49[0] )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v49[0] + 16LL))(v49[0]);
                goto LABEL_32;
              }
              v47 = *(CEffectIntermediateProducer **)&v67.left;
              v48 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v68, *(struct IBitmapResource **)&v67.left);
              CDrawListBitmap::operator=(&v58, v48);
              CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v68);
              if ( v47 )
                CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v47);
              v32 = v49[0];
            }
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v71, a2);
            v62 = 0;
            v61 = 0LL;
            v63 = 257;
            v64 = 0;
            CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v75);
            v53 = 0LL;
            *(_QWORD *)&v68 = &v53;
            *((_QWORD *)&v68 + 1) = 0LL;
            v69 = 1;
            v50 = 257;
            v51 = 1;
            v9 = CSurfaceDrawListBrush::CreateWithContentRect(&v58, &v50, &v70, (char *)&v68 + 8);
            if ( v69 )
            {
              v34 = v68;
              v35 = *(_QWORD *)v68;
              *(_QWORD *)v68 = *((_QWORD *)&v68 + 1);
              if ( v35 )
                std::default_delete<CSurfaceDrawListBrush>::operator()(v34, v35);
            }
            if ( v9 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xE1u, 0LL);
            }
            else
            {
              v36 = v53;
              v37 = 0LL;
              DWORD2(v68) = 0;
              v38 = _mm_cvtps_pd(v11);
              v39 = (v13 - *(float *)v4.m128i_i32) / (v22 - v54);
              *(float *)&v40 = v39;
              v37.m128d_f64[0] = *(float *)v4.m128i_i32 - v54 * v39;
              *(_QWORD *)&v68 = v40;
              v41 = (v17 - v38.m128d_f64[0]) / (v23 - v10);
              v38.m128d_f64[0] = v38.m128d_f64[0] - v10 * v41;
              *((float *)&v68 + 3) = v41;
              *(_OWORD *)(v53 + 8) = v68;
              *(_QWORD *)(v36 + 24) = _mm_unpacklo_ps(_mm_cvtpd_ps(v37), _mm_cvtpd_ps(v38)).m128_u64[0];
              *(_QWORD *)&v67.left = v53;
              v53 = 0LL;
              std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(v72, &v67);
              v42 = v73;
              if ( v73 <= 1 )
                v42 = 1;
              v73 = v42;
              std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v67);
              v74 = v19 != 0 ? 64 : 16;
              DrawList = CBrushDrawListGenerator::GenerateDrawList(
                           (CBrushDrawListGenerator *)v71,
                           (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v61,
                           (struct CDrawListEntryBuilder *)v75);
              v9 = DrawList;
              if ( DrawList < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0xF2u, 0LL);
              else
                CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v75);
            }
            if ( v53 )
              std::default_delete<CSurfaceDrawListBrush>::operator()(v44, v53);
            CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v75);
            CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v71);
          }
LABEL_32:
          CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v58);
        }
      }
    }
  }
  return (unsigned int)v9;
}
