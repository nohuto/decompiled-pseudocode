/*
 * XREFs of ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18014EFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18006C0F8 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006FAC0 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800A0750 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B2B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18013B6E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18013DC50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GetRadius@CDropShadow@@QEBAMXZ @ 0x18014EB58 (-GetRadius@CDropShadow@@QEBAMXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18014F4C0 (--1-$out_param_t@V-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@@.c)
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18014F544 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MPEAPEAVCDrawListBrush@@@Z @ 0x18014F5E8 (-CreateShadowOpacityBrush@ShadowIntermediates@CDropShadow@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18014F8C0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18014F9E0 (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18014FE40 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18016AB10 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016AC0C (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 */

__int64 __fastcall CDropShadow::GenerateDrawList(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  int v8; // esi
  float Radius; // xmm0_4
  struct CVisual *CurrentVisual; // rax
  float *EffectiveShadowIntermediates; // rax
  struct CDrawingContext *v12; // rdx
  float v13; // xmm2_4
  float v14; // xmm2_4
  int v15; // xmm1_4
  int v16; // ebx
  int v17; // eax
  float v18; // xmm5_4
  float v19; // xmm1_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  int DrawList; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // r9d
  _QWORD *v35; // rcx
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  LPVOID *v38; // rcx
  LPVOID v39; // rdx
  float v40; // xmm0_4
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID *p_lpMem; // [rsp+38h] [rbp-C8h] BYREF
  struct CGeometryOnlyDrawListBrush *v43; // [rsp+40h] [rbp-C0h] BYREF
  char v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v46; // [rsp+58h] [rbp-A8h] BYREF
  float v47[6]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+90h] [rbp-70h]
  int v50; // [rsp+DCh] [rbp-24h]
  char v51; // [rsp+E0h] [rbp-20h]
  _BYTE v52[64]; // [rsp+F0h] [rbp-10h] BYREF
  int v53; // [rsp+130h] [rbp+30h]
  _BYTE v54[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v55[24]; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v56; // [rsp+168h] [rbp+68h]
  int v57; // [rsp+174h] [rbp+74h]
  __int128 v58; // [rsp+178h] [rbp+78h]
  _BYTE v59[4496]; // [rsp+190h] [rbp+90h] BYREF

  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v54, a2, a3);
  v50 = 257;
  v49 = 0;
  v48 = 0LL;
  v51 = 0;
  v8 = 0;
  v45 = 0LL;
  Radius = CDropShadow::GetRadius(this);
  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  EffectiveShadowIntermediates = (float *)CDropShadow::GetEffectiveShadowIntermediates(this, CurrentVisual);
  v13 = *((float *)this + 23) * EffectiveShadowIntermediates[16];
  if ( v13 >= 1.0 )
  {
    v58 = *(_OWORD *)((char *)this + 72);
  }
  else
  {
    v14 = v13 * *((float *)this + 21);
    v15 = *((_DWORD *)this + 19);
    LODWORD(v58) = *((_DWORD *)this + 18);
    DWORD2(v58) = *((_DWORD *)this + 20);
    *((float *)&v58 + 3) = v14;
    DWORD1(v58) = v15;
  }
  lpMem = 0LL;
  p_lpMem = &lpMem;
  v43 = 0LL;
  v44 = 1;
  v16 = CDropShadow::ShadowIntermediates::CreateShadowOpacityBrush(
          (CDropShadow::ShadowIntermediates *)EffectiveShadowIntermediates,
          v12,
          a3,
          Radius,
          &v43);
  wil::details::out_param_t<std::unique_ptr<CDrawListBrush>>::~out_param_t<std::unique_ptr<CDrawListBrush>>(&p_lpMem);
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AF58, 3u, v16, 0x15Au, 0LL);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&lpMem);
  }
  else
  {
    if ( lpMem )
    {
      std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(v55, &lpMem);
      v17 = v56;
      if ( v56 <= 2 )
        v17 = 2;
      v56 = v17;
    }
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&lpMem);
    v53 = 0;
    CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 288), (struct CMILMatrix *)v52);
    if ( COERCE_FLOAT(*((_DWORD *)this + 26) & _xmm) < 0.0000011920929
      || (unsigned __int8)CMILMatrix::ProducesUniformZ<1>(v52) )
    {
      LODWORD(v18) = *((_DWORD *)this + 24) ^ _xmm;
      v19 = 0.0 - Radius;
      LODWORD(v20) = *((_DWORD *)this + 25) ^ _xmm;
      v21 = v18 + *((float *)this + 27);
      v22 = Radius + a3->width;
      v23 = Radius + a3->height;
      v24 = v18 + *((float *)this + 29);
      *(float *)&v46 = 0.0 - Radius;
      v25 = v20 + *((float *)this + 28);
      v26 = v20 + *((float *)this + 30);
      *(_QWORD *)((char *)&v46 + 4) = __PAIR64__(LODWORD(v22), LODWORD(v19));
      *((float *)&v46 + 3) = v23;
      if ( v21 < v19 )
        v21 = v19;
      if ( v25 < v19 )
        v25 = v19;
      if ( v22 < v24 )
        v24 = v22;
      if ( v23 < v26 )
        v26 = v23;
      if ( v24 > v21 && v26 > v25 )
      {
        lpMem = 0LL;
        v43 = 0LL;
        v44 = 1;
        v47[0] = v21 - v19;
        v47[1] = v25 - v19;
        v47[2] = v22 - v24;
        v47[3] = v23 - v26;
        p_lpMem = &lpMem;
        v16 = CGeometryOnlyDrawListBrush::Create(&v43);
        if ( v44 )
        {
          v35 = *p_lpMem;
          *p_lpMem = v43;
          if ( v35 )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v35);
        }
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AF58, 3u, v16, 0x17Du, 0LL);
          if ( lpMem )
            CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
          goto LABEL_26;
        }
        v36 = lpMem;
        v37 = v46;
        LOBYTE(v34) = 1;
        v43 = 0LL;
        v44 = 1;
        *((_BYTE *)lpMem + 52) = 1;
        v36[2] = v37;
        *((_DWORD *)v36 + 12) = 50529027;
        p_lpMem = (LPVOID *)&v45;
        *(_QWORD *)&v46 = lpMem;
        lpMem = 0LL;
        v16 = CNineGridDrawListBrush::Create(
                (unsigned int)&v46,
                (unsigned int)v47,
                (unsigned int)v47,
                v34,
                (__int64)&v43);
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v46);
        if ( v44 )
        {
          v38 = p_lpMem;
          v39 = *p_lpMem;
          *p_lpMem = v43;
          if ( v39 )
            std::default_delete<CNineGridDrawListBrush>::operator()(v38, v39);
        }
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AF58, 3u, v16, 0x185u, 0LL);
          std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
          goto LABEL_26;
        }
        LODWORD(v40) = *((_DWORD *)this + 26) & _xmm;
        *(_QWORD *)&v48 = v45;
        if ( v40 >= 0.0000011920929 )
          v8 = 32;
        if ( lpMem )
          CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
      }
    }
    v57 = v8;
    CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v59);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v54,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v48,
                 (struct CDrawListEntryBuilder *)v59);
    v16 = DrawList;
    if ( DrawList >= 0 )
    {
      CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v59);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v59);
      goto LABEL_21;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032AF58, 3u, DrawList, 0x199u, 0LL);
    CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v59);
  }
LABEL_26:
  CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v54, v32, v33);
LABEL_21:
  v30 = v45;
  if ( v45 )
    std::default_delete<CNineGridDrawListBrush>::operator()(v28, v45);
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v54, v30, v29);
  return (unsigned int)v16;
}
