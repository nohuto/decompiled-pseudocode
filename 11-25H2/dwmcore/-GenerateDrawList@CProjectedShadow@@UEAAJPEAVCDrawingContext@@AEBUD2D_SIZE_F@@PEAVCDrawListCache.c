/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?reset@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDrawListBrush@@@Z @ 0x1800CE56C (-reset@-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAAXPEAVCDr.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DEBCC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180119860 (--1-$out_param_t@V-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@@.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18011A8EC (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18011AC44 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180126AE0 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1801295D4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 */

__int64 __fastcall CProjectedShadow::GenerateDrawList(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  int CasterShadowInputBrush; // edi
  void *v10; // rcx
  int v11; // xmm1_4
  int v12; // xmm0_4
  _DWORD *v13; // rax
  CMultiPrimitiveDrawListBrush *v14; // rdx
  CBrushRenderingGraph *v15; // rcx
  CProjectedShadowReceiver *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  int v22; // eax
  int v23; // eax
  int v24; // eax
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  float v31; // xmm8_4
  float v32; // xmm9_4
  __int64 v33; // xmm0_8
  __int64 v34; // rdx
  int v35; // eax
  LPVOID lpMem; // [rsp+30h] [rbp-D0h] BYREF
  CMultiPrimitiveDrawListBrush *v37; // [rsp+38h] [rbp-C8h] BYREF
  struct CDrawListBrush *v38; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  __int128 v42; // [rsp+74h] [rbp-8Ch]
  __int128 v43; // [rsp+84h] [rbp-7Ch]
  int v44; // [rsp+94h] [rbp-6Ch]
  __int128 v45; // [rsp+98h] [rbp-68h]
  __int128 v46; // [rsp+A8h] [rbp-58h]
  int v47; // [rsp+B8h] [rbp-48h]
  int v48; // [rsp+BCh] [rbp-44h]
  char v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+E0h] [rbp-20h]
  LPVOID *p_lpMem; // [rsp+E8h] [rbp-18h] BYREF
  struct CDrawListBrush *v53; // [rsp+F0h] [rbp-10h] BYREF
  float v54; // [rsp+F8h] [rbp-8h]
  float v55; // [rsp+FCh] [rbp-4h]
  CDrawingContext *v56; // [rsp+100h] [rbp+0h] BYREF
  CMultiPrimitiveDrawListBrush *v57; // [rsp+108h] [rbp+8h] BYREF
  CMultiPrimitiveDrawListBrush *v58; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v59; // [rsp+128h] [rbp+28h]
  __int128 v60; // [rsp+138h] [rbp+38h]
  _BYTE v61[4496]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *((_QWORD *)this + 11);
  v38 = 0LL;
  v53 = 0LL;
  v8 = *(_QWORD *)(v4 + 72);
  lpMem = 0LL;
  p_lpMem = &lpMem;
  LOBYTE(v54) = 1;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create(&v53);
  if ( LOBYTE(v54) )
  {
    v10 = *p_lpMem;
    *p_lpMem = v53;
    if ( v10 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v10);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CasterShadowInputBrush, 0x177u, 0LL);
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>(&lpMem);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 144);
    v12 = *(_DWORD *)(v8 + 148);
    v13 = lpMem;
    *(_QWORD *)&v39 = 0LL;
    DWORD2(v39) = v11;
    *((_BYTE *)lpMem + 52) = 1;
    v13[12] = 50529027;
    HIDWORD(v39) = v12;
    *((_OWORD *)v13 + 2) = v39;
    v14 = (CMultiPrimitiveDrawListBrush *)lpMem;
    lpMem = 0LL;
    std::unique_ptr<CDrawListBrush>::reset(&v38, v14);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    v15 = (CBrushRenderingGraph *)*((_QWORD *)this + 46);
    if ( v15 )
    {
      v35 = CBrushRenderingGraph::RenderSubgraphs(
              v15,
              a2,
              (const struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 11) + 72LL) + 144LL),
              v38,
              0,
              a4);
      CasterShadowInputBrush = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x18Du, 0LL);
    }
    else
    {
      v41 = 0;
      *(_QWORD *)&v39 = &CProjectedShadowRenderingEffectFactory::`vftable';
      v40[0] = v38;
      v40[1] = &v39;
      p_lpMem = &lpMem;
      v48 = 257;
      v49 = 0;
      lpMem = 0LL;
      v53 = 0LL;
      LOBYTE(v54) = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, &v53);
      wil::details::out_param_t<std::unique_ptr<CDrawListBrush>>::~out_param_t<std::unique_ptr<CDrawListBrush>>((__int64)&p_lpMem);
      if ( CasterShadowInputBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CasterShadowInputBrush, 0x19Bu, 0LL);
      }
      else
      {
        v16 = (CProjectedShadowReceiver *)*((_QWORD *)this + 11);
        p_lpMem = (LPVOID *)&v37;
        v37 = 0LL;
        v53 = 0LL;
        LOBYTE(v54) = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(v16, a2, &v53);
        wil::details::out_param_t<std::unique_ptr<CDrawListBrush>>::~out_param_t<std::unique_ptr<CDrawListBrush>>((__int64)&p_lpMem);
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, CasterShadowInputBrush, 0x19Fu, 0LL);
        }
        else
        {
          if ( COERCE_FLOAT(*((_DWORD *)this + 47) & _xmm) >= 0.000081380211
            || COERCE_FLOAT(*((_DWORD *)this + 50) & _xmm) >= 0.000081380211 )
          {
            v17 = *(_OWORD *)((char *)this + 180);
            v18 = *(_OWORD *)((char *)this + 196);
            v44 = *((_DWORD *)this + 53);
            v19 = *((_DWORD *)this + 62);
            v42 = v17;
            v41 = 1;
            v20 = *(_OWORD *)((char *)this + 216);
            v47 = v19;
            v43 = v18;
            v21 = *(_OWORD *)((char *)this + 232);
            v45 = v20;
            v46 = v21;
          }
          else
          {
            v26 = *((float *)this + 53);
            v27 = *((float *)this + 45);
            v28 = *((float *)this + 46);
            v29 = *((float *)this + 48);
            v30 = *((float *)this + 49);
            v31 = *((float *)this + 51);
            v32 = *((float *)this + 52);
            p_lpMem = (LPVOID *)__PAIR64__(LODWORD(v28), LODWORD(v27));
            v53 = (struct CDrawListBrush *)__PAIR64__(LODWORD(v30), LODWORD(v29));
            v54 = v31;
            v55 = v32;
            if ( COERCE_FLOAT(LODWORD(v26) & _xmm) >= 0.000081380211
              && COERCE_FLOAT(COERCE_UNSIGNED_INT(v26 - 1.0) & _xmm) >= 0.000081380211 )
            {
              *(float *)&p_lpMem = v27 / v26;
              *((float *)&p_lpMem + 1) = v28 / v26;
              *(float *)&v53 = v29 / v26;
              *((float *)&v53 + 1) = v30 / v26;
              v54 = v31 / v26;
              v55 = v32 / v26;
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v50,
              (const struct D2D1::Matrix3x2F *)((char *)lpMem + 8),
              (const struct D2D1::Matrix3x2F *)&p_lpMem);
            v33 = v51;
            *(_OWORD *)v34 = v50;
            *(_QWORD *)(v34 + 16) = v33;
          }
          CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)&v56, a2);
          v60 = *(_OWORD *)((char *)this + 328);
          std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(
            &v57,
            (CMultiPrimitiveDrawListBrush **)&lpMem);
          v22 = v59;
          if ( v59 <= 1 )
            v22 = 1;
          v59 = v22;
          std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v58, &v37);
          v23 = v59;
          if ( v59 <= 2 )
            v23 = 2;
          v59 = v23;
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
          v24 = CBrushDrawListGenerator::GenerateDrawList(
                  &v56,
                  (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v40,
                  (struct CDrawListEntryBuilder *)v61);
          CasterShadowInputBrush = v24;
          if ( v24 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x1C6u, 0LL);
          else
            CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v61);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v61);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v56);
        }
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v37);
      }
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&lpMem);
    }
  }
  std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v38);
  return (unsigned int)CasterShadowInputBrush;
}
