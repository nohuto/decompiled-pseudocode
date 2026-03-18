/*
 * XREFs of ?ProduceRealization@CEffectIntermediateProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180222FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x1800DD334 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ?GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ @ 0x18012B670 (-GetCurrentVisual@CDrawingContext@@QEBAPEAVCVisual@@XZ.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180147AD0 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MakeStandardCachedRealization@CCachedImageProducer@@KA?AV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180205FB0 (-MakeStandardCachedRealization@CCachedImageProducer@@KA-AV-$unique_ptr@VCCachedRealization@CCach.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x180223154 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, CGlobalDrawingContext **); // rbx
  int v15; // eax
  struct CCachedImageProducer::CCachedRealization **StandardCachedRealization; // rax
  struct CCachedImageProducer::CCachedRealization *v17; // rcx
  __int64 *v18[2]; // [rsp+40h] [rbp-39h] BYREF
  __int128 v19; // [rsp+50h] [rbp-29h] BYREF
  char v20; // [rsp+60h] [rbp-19h]
  __int128 v21; // [rsp+80h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  CGlobalDrawingContext *v23; // [rsp+E0h] [rbp+67h] BYREF
  struct D2D_SIZE_F v24; // [rsp+F8h] [rbp+7Fh] BYREF

  CurrentVisual = CDrawingContext::GetCurrentVisual(a2);
  if ( CurrentVisual == *(struct CVisual **)(v6 + 80) )
  {
    v9 = *(_QWORD *)(v6 + 24);
    v10 = *(const struct CRenderingTechnique **)(v6 + 72);
    v20 = 0;
    v24.width = (float)(int)v9;
    v24.height = (float)SHIDWORD(v9);
    v11 = *(CBrushRenderingGraph **)v10;
    v19 = 0LL;
    v21 = 0LL;
    v12 = CBrushRenderingGraph::RenderSubgraphToIntermediate(
            v11,
            v10,
            v5,
            (const struct D2D_SIZE_F *)(v6 + 88),
            (const struct D2D_VECTOR_2F *)(v6 + 96),
            &v24,
            (struct EffectInput *)&v19);
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
      v23 = 0LL;
      v13 = *((_QWORD *)&v19 + 1);
      v14 = (__int64 (__fastcall *)(__int64, GUID *, CGlobalDrawingContext **))***((_QWORD ***)&v19 + 1);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v23);
      v15 = v14(v13, &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3, &v23);
      v7 = v15;
      if ( v15 >= 0 )
      {
        StandardCachedRealization = (struct CCachedImageProducer::CCachedRealization **)CCachedImageProducer::MakeStandardCachedRealization(
                                                                                          v18,
                                                                                          (__int64 *)&v23);
        v17 = *StandardCachedRealization;
        *StandardCachedRealization = 0LL;
        *a3 = v17;
        std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(v18);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x58,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\effectintermediateproducer.cpp",
          (const char *)(unsigned int)v15);
        if ( v23 )
          (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v19);
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
