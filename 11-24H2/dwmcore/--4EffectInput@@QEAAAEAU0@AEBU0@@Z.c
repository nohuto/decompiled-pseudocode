/*
 * XREFs of ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1801369CC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B3BC (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x180135A9C (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ??$move@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x180136924 (--$move@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_iterator@P.c)
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180139528 (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1801F87B0 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEBUD2D_VECTOR_2F@@2PEAUEffectInput@@@Z @ 0x1802170E4 (-RenderSubgraphToIntermediate@CBrushRenderingGraph@@QEBAJPEBVCRenderingTechnique@@PEAVCDrawingCo.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z @ 0x180243F24 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@PEBXAEBUEffectInput@@@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@0@0V12@@Z @ 0x1802AB380 (--$move_backward@V-$move_iterator@PEAUCachedBlur@CBlurredBackdropCache@@@std@@V-$checked_array_i.c)
 *     ??$move_backward@V?$move_iterator@PEAUEffectInput@@@std@@V?$checked_array_iterator@PEAUEffectInput@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUEffectInput@@@stdext@@V?$move_iterator@PEAUEffectInput@@@0@0V12@@Z @ 0x1802DF370 (--$move_backward@V-$move_iterator@PEAUEffectInput@@@std@@V-$checked_array_iterator@PEAUEffectInp.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800DA5C0 (-InternalRelease@-$CMILRefCountBaseT@VIBitmapResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ @ 0x1802D6BB0 (-AddRef@CGDISectionBitmapRealization@@WBII@EAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectInput::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  CEffectIntermediateProducer *v3; // rsi
  CMILRefCountImpl *v6; // rcx
  void (*v7)(void); // rax
  __int64 (__fastcall *v8)(CEffectIntermediateProducer *); // rax
  CMILRefCountImpl *v9; // rcx
  __int64 v10; // rsi
  void (*v11)(void); // rax
  __int64 result; // rax

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
  v9 = *(CMILRefCountImpl **)(a2 + 8);
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v9;
  if ( v9 )
  {
    v11 = *(void (**)(void))(*(_QWORD *)v9 + 8LL);
    if ( (char *)v11 == (char *)CMILRefCountImpl::AddReference )
    {
      CMILRefCountImpl::AddReference(v9);
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
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)(a1 + 44) = *(_BYTE *)(a2 + 44);
  *(_BYTE *)(a1 + 45) = *(_BYTE *)(a2 + 45);
  result = a1;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  return result;
}
