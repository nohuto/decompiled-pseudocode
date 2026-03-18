/*
 * XREFs of ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18012707C
 * Callers:
 *     ?ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z @ 0x180128294 (-ExecuteShaders@CGraphRenderingContext@CExternalEffectGraph@@QEAAJII@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18019FAE8 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@VCDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DEBCC (--$-4U-$default_delete@VCDrawListBrush@@@std@@$0A@@-$unique_ptr@VCDrawListBrush@@U-$default_dele.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800DED18 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCS.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1801295D4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ??1?$unique_ptr@VCColorDrawListBrush@@U?$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180210F08 (--1-$unique_ptr@VCColorDrawListBrush@@U-$default_delete@VCColorDrawListBrush@@@std@@@std@@QEAA@X.c)
 *     ??R?$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z @ 0x180210F28 (--R-$default_delete@VCColorDrawListBrush@@@std@@QEBAXPEAVCColorDrawListBrush@@@Z.c)
 *     ?Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x180210FA0 (-Create@CColorDrawListBrush@@SAJAEBU_D3DCOLORVALUE@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrushRenderingGraph::UpdateDrawListCache(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct CDrawListBrush *a3,
        struct EffectStage *a4,
        unsigned int a5,
        struct CDrawListCache *a6)
{
  unsigned int v9; // r14d
  struct CSurfaceDrawListBrush *v11; // r12
  unsigned int v12; // ecx
  char *v13; // rdx
  __int64 v14; // r8
  _BYTE *v15; // rax
  char v16; // cl
  int DrawList; // eax
  int v18; // ebx
  unsigned int v19; // ecx
  __int64 i; // rdi
  char *v22; // rsi
  struct CSurfaceDrawListBrush *v23; // rcx
  CMultiPrimitiveDrawListBrush *v24; // rax
  unsigned int v25; // ecx
  struct CDrawingContext *v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // ecx
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 (__fastcall *v32)(__int64 *, __int64, __int64 *); // rbx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  CMultiPrimitiveDrawListBrush *v36; // rdx
  CMultiPrimitiveDrawListBrush *v37; // [rsp+30h] [rbp-D0h] BYREF
  CMultiPrimitiveDrawListBrush *v38; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  CMultiPrimitiveDrawListBrush *v40; // [rsp+48h] [rbp-B8h] BYREF
  struct CDrawingContext *v41; // [rsp+50h] [rbp-B0h]
  CDrawListCache *v42; // [rsp+58h] [rbp-A8h]
  _QWORD v43[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+70h] [rbp-90h]
  int v45; // [rsp+BCh] [rbp-44h]
  char v46; // [rsp+C0h] [rbp-40h]
  CMultiPrimitiveDrawListBrush **v47; // [rsp+D0h] [rbp-30h] BYREF
  struct CSurfaceDrawListBrush *v48; // [rsp+D8h] [rbp-28h] BYREF
  char v49; // [rsp+E0h] [rbp-20h] BYREF
  CDrawingContext *v50[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v51; // [rsp+118h] [rbp+18h]
  unsigned int v52; // [rsp+124h] [rbp+24h]
  int v53; // [rsp+128h] [rbp+28h]
  int v54; // [rsp+12Ch] [rbp+2Ch]
  int v55; // [rsp+130h] [rbp+30h]
  int v56; // [rsp+134h] [rbp+34h]
  _BYTE v57[4496]; // [rsp+140h] [rbp+40h] BYREF

  v42 = a6;
  v40 = a3;
  v41 = a2;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v50, a2);
  v9 = 0;
  v11 = *(struct CSurfaceDrawListBrush **)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4);
  while ( 1 )
  {
    v12 = *((_DWORD *)a4 + 1);
    if ( v9 >= v12 )
    {
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 1065353216;
      v52 = a5;
      v47 = (CMultiPrimitiveDrawListBrush **)&CBrushRenderingEffectFactory::`vftable';
      v48 = v11;
      if ( v12 )
      {
        v13 = &v49;
        v14 = v12;
        v15 = (char *)a4 + 114;
        do
        {
          if ( !*(v15 - 62) || (v16 = 1, !*v15) )
            v16 = 0;
          *v13 = v16;
          v15 += 112;
          ++v13;
          --v14;
        }
        while ( v14 );
      }
      v43[0] = v40;
      v44 = 0;
      v43[1] = &v47;
      v45 = 257;
      v46 = 1;
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   v50,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v43,
                   (struct CDrawListEntryBuilder *)v57);
      v18 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x4E5u, 0LL);
      }
      else
      {
        CDrawListCache::Update(v42, v41, (struct CDrawListEntryBuilder *)v57);
        v18 = 0;
      }
      goto LABEL_10;
    }
    v22 = (char *)a4 + 112 * v9;
    if ( !v22[52] )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v22 + 8) + 8LL))(
             *((_QWORD *)v22 + 8),
             2LL) )
      {
        v27 = *((_QWORD *)v22 + 8);
        if ( *(_BYTE *)(v27 + 52) )
        {
          if ( *((_BYTE *)v11 + 44 * v9 + 90) )
            *(_BYTE *)(v27 + 52) = 0;
        }
      }
      v38 = (CMultiPrimitiveDrawListBrush *)*((_QWORD *)v22 + 8);
      std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v50[v9 + 1], &v38);
      v28 = v51;
      if ( v51 <= ++v9 )
        v28 = v9;
      v51 = v28;
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v38);
      goto LABEL_26;
    }
    v37 = 0LL;
    v47 = &v37;
    v48 = 0LL;
    v49 = 1;
    if ( v22[53] )
      break;
    v18 = CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
            v11,
            v9,
            (const struct EffectInput *)(v22 + 8),
            &v48);
    if ( v49 )
    {
      v23 = v48;
      v24 = *v47;
      *v47 = v48;
      if ( v24 )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v23, v24);
    }
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x491u, 0LL);
      std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(&v37);
      goto LABEL_10;
    }
    v38 = v37;
    v37 = 0LL;
    std::unique_ptr<CDrawListBrush>::operator=<std::default_delete<CDrawListBrush>,0>(&v50[v9 + 1], &v38);
    v25 = v51;
    if ( v51 <= ++v9 )
      v25 = v9;
    v51 = v25;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v38);
    v26 = v41;
    if ( *((_QWORD *)v41 + 26) )
    {
      if ( v22[113] )
      {
        a5 |= 0x40u;
        if ( !*((_BYTE *)v42 + 86) && !v22[116] )
        {
          v29 = (__int64 *)*((_QWORD *)v22 + 2);
          v30 = *v29;
          v31 = *((_QWORD *)v41 + 3);
          v39 = 0LL;
          v32 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v30 + 104);
          v33 = (*(__int64 (__fastcall **)(char *))(v31 + 16))((char *)v41 + 24);
          v34 = v32(v29, v33, &v39);
          v18 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v34, 0x4B3u, 0LL);
            v35 = v39;
            if ( v39 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            if ( v37 )
              std::default_delete<CSurfaceDrawListBrush>::operator()(v35, v37);
            goto LABEL_10;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v39);
        }
      }
    }
    if ( v37 )
      std::default_delete<CSurfaceDrawListBrush>::operator()(v26, v37);
LABEL_26:
    a5 |= *((_DWORD *)v22 + 12);
  }
  v18 = CColorDrawListBrush::Create((const struct _D3DCOLORVALUE *)v22 + 2, &v48);
  if ( v49 )
  {
    v36 = *v47;
    *v47 = v48;
    if ( v36 )
      std::default_delete<CColorDrawListBrush>::operator()();
  }
  if ( v18 >= 0 )
  {
    v38 = v37;
    v37 = 0LL;
    CBrushDrawListGenerator::AttachInput((__int64)v50, v9, (__int64 *)&v38);
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v38);
    std::unique_ptr<CColorDrawListBrush>::~unique_ptr<CColorDrawListBrush>(&v37);
    ++v9;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x4BBu, 0LL);
  if ( v37 )
    std::default_delete<CColorDrawListBrush>::operator()();
LABEL_10:
  v19 = v51;
  for ( i = 0LL; (unsigned int)i < v19; i = (unsigned int)(i + 1) )
  {
    if ( !*((_BYTE *)a4 + 112 * (unsigned int)i + 52) )
    {
      v50[i + 1] = 0LL;
      v40 = 0LL;
      std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v40);
      v19 = v51;
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v50);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v57);
  return (unsigned int)v18;
}
