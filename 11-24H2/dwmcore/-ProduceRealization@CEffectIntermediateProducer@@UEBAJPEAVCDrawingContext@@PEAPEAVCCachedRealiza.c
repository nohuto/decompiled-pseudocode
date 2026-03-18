/*
 * XREFs of ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180216F60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18001BF90 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800FD434 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18010BE90 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MakeStandardCachedRealization@CCachedImageProducer@@KA?AV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FA370 (-MakeStandardCachedRealization@CCachedImageProducer@@KA-AV-$unique_ptr@VCCachedRealization@CCach.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1802170E4 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CEffectIntermediateProducer::ProduceRealization(
        CEffectIntermediateProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  struct CVisual *CurrentVisual; // rax
  struct CDrawingContext *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v9; // rax
  const struct CRenderingTechnique *v10; // rdx
  CBrushRenderingGraph *v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, GUID *, CGlobalDrawingContext **); // rbx
  int v17; // eax
  struct CCachedImageProducer::CCachedRealization **StandardCachedRealization; // rax
  struct CCachedImageProducer::CCachedRealization *v19; // rcx
  __int64 *v20[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v21; // [rsp+50h] [rbp-29h] BYREF
  char v22; // [rsp+60h] [rbp-19h]
  __int128 v23; // [rsp+80h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  CGlobalDrawingContext *v25; // [rsp+E0h] [rbp+67h] BYREF
  struct D2D_SIZE_F v26; // [rsp+F8h] [rbp+7Fh] BYREF

  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  if ( CurrentVisual == *(struct CVisual **)(v6 + 80) )
  {
    v9 = *(_QWORD *)(v6 + 24);
    v10 = *(const struct CRenderingTechnique **)(v6 + 72);
    v22 = 0;
    v26.width = (float)(int)v9;
    v26.height = (float)SHIDWORD(v9);
    v11 = *(CBrushRenderingGraph **)v10;
    v21 = 0LL;
    v23 = 0LL;
    v12 = CBrushRenderingGraph::RenderSubgraphToIntermediate(
            v11,
            v10,
            v5,
            (const struct D2D_SIZE_F *)(v6 + 88),
            (const struct D2D_VECTOR_2F *)(v6 + 96),
            &v26,
            (struct EffectInput *)&v21);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
        (const char *)(unsigned int)v12);
    }
    else
    {
      v25 = 0LL;
      v15 = *((_QWORD *)&v21 + 1);
      v16 = (__int64 (__fastcall *)(__int64, GUID *, CGlobalDrawingContext **))***((_QWORD ***)&v21 + 1);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v25, v13, v14);
      v17 = v16(v15, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v25);
      v7 = v17;
      if ( v17 >= 0 )
      {
        StandardCachedRealization = (struct CCachedImageProducer::CCachedRealization **)CCachedImageProducer::MakeStandardCachedRealization(
                                                                                          v20,
                                                                                          (__int64 *)&v25);
        v19 = *StandardCachedRealization;
        *StandardCachedRealization = 0LL;
        *a3 = v19;
        std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(v20);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v25);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x58,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
          (const char *)(unsigned int)v17);
        if ( v25 )
          (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v25 + 16LL))(v25);
      }
    }
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v21);
  }
  else
  {
    v7 = -2003292412;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
      (const char *)0x88982F04LL);
  }
  return v7;
}
