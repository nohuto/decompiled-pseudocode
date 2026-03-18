/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x180110030
 * Callers:
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x180047920 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 *     ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x180084BB4 (-SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ.c)
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180127930 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18012A1A4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18010FE80 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802DFE50 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListBitmap::operator=(__int64 a1, __int64 a2)
{
  CEffectIntermediateProducer *v2; // rdi
  CMILRefCountImpl *v5; // rcx
  void (*v6)(void); // rax
  __int64 (__fastcall *v7)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rdi
  void (*v10)(void); // rax
  int v11; // et0
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(CEffectIntermediateProducer **)a1;
  v5 = *(CMILRefCountImpl **)a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v5);
    else
      v6();
  }
  if ( v2 )
  {
    v7 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v2 + 16LL);
    if ( v7 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v2);
    else
      v7(v2);
  }
  v8 = *(volatile signed __int32 **)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v8;
  if ( v8 )
  {
    v10 = *(void (**)(void))(*(_QWORD *)v8 + 8LL);
    if ( (char *)v10 == (char *)CMILRefCountImpl::AddReference )
    {
      v11 = _InterlockedAdd(v8, 1u);
      if ( (v11 < 0) ^ __OFSUB__(v10, CMILRefCountImpl::AddReference) | (v11 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v13);
    }
    else if ( (char *)v10 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(v8);
    }
    else
    {
      v10();
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  return a1;
}
