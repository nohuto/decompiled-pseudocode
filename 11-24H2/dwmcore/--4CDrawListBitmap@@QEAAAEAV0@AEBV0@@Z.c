/*
 * XREFs of ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x1800DA770
 * Callers:
 *     ?RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUIntermediateConfigurationInputs@1@AEBV?$span@$$CBUEffectInput@@$0?0@gsl@@AEBV?$span@UEffectInput@@$0?0@6@@Z @ 0x180018180 (-RenderSubgraphToIntermediateInternal@CBrushRenderingGraph@@IEBAJPEBVCRenderingTechnique@@PEAVCD.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18001A9F4 (-GetInputBrushParameters@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ @ 0x1800F9334 (-SetOutputToCurrentTarget@CGraphRenderingContext@CExternalEffectGraph@@QEAAXXZ.c)
 *     ?AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PEBUPrimitiveVertexAttributesDesc@@I@Z @ 0x18016E700 (-AppendReconstructableEntry@CDrawListEntryBuilder@@AEAAJAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N2PE.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawListBitmap::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  CEffectIntermediateProducer *v3; // rdi
  CMILRefCountImpl *v6; // rcx
  void (*v7)(void); // rax
  __int64 (__fastcall *v8)(CEffectIntermediateProducer *); // rax
  volatile signed __int32 *v9; // rcx
  __int64 v10; // rdi
  void (*v11)(void); // rax
  int v12; // et0
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(CEffectIntermediateProducer **)a1;
  v6 = *(CMILRefCountImpl **)a2;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
    if ( (char *)v7 == (char *)CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v6);
    else
      v7();
  }
  if ( v3 )
  {
    v8 = *(__int64 (__fastcall **)(CEffectIntermediateProducer *))(*(_QWORD *)v3 + 16LL);
    if ( v8 == CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IBitmapResource,CMilObjectDeleter>::InternalRelease(v3);
    else
      v8(v3);
  }
  v9 = *(volatile signed __int32 **)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v9;
  if ( v9 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    if ( (char *)v11 == (char *)CMILRefCountImpl::AddReference )
    {
      v12 = _InterlockedAdd(v9, 1u);
      if ( (v12 < 0) ^ __OFSUB__(v11, CMILRefCountImpl::AddReference) | (v12 == 0) )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x18,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v14);
    }
    else if ( (char *)v11 == (char *)CGDISectionBitmapRealization::AddRef )
    {
      CGDISectionBitmapRealization::AddRef(v9, CGDISectionBitmapRealization::AddRef, a3);
    }
    else
    {
      v11();
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_BYTE *)(a1 + 16) = *(_BYTE *)(a2 + 16);
  return a1;
}
