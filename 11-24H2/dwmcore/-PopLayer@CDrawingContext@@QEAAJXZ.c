/*
 * XREFs of ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800FA030
 * Callers:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180051E30 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006B114 (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006DDA4 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x180082B30 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800A8D00 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1800F4830 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F4D78 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x1800F9300 (std--_Func_impl_no_alloc__lambda_239ebeae39ba09a417b6b83fb5c00141__long_CExternalEffectGraph--CG.c)
 *     _lambda_1081fb77a3a3c81cdcc31a57fa3e9375_::operator() @ 0x1801372F0 (_lambda_1081fb77a3a3c81cdcc31a57fa3e9375_--operator().c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x1801375DC (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEffectGraph::CGraphRenderingContext___::_Do_call @ 0x180137970 (std--_Func_impl_no_alloc__lambda_c8bdd275e743d83e5e3676893aa9bea6__long_CExternalEf_ea_180137970.c)
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180148B80 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801D4370 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     gsl::final_action__lambda_7c326dd339b6b31d734cab6f1173b304___::_final_action__lambda_7c326dd339b6b31d734cab6f1173b304___ @ 0x18020F348 (gsl--final_action__lambda_7c326dd339b6b31d734cab6f1173b304___--_final_action__lambda_7c326dd339b.c)
 *     gsl::final_action__lambda_88cfa773221f8f0f13642871a04a878f___::_final_action__lambda_88cfa773221f8f0f13642871a04a878f___ @ 0x180263E10 (gsl--final_action__lambda_88cfa773221f8f0f13642871a04a878f___--_final_action__lambda_88cfa773221.c)
 *     ?GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180295EC0 (-GetLayeredBrushParameters@CCompositionMagnifierBrush@@AEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z @ 0x1800FA3DC (-Free@-$CThreadLocalObjectCache@VCD2DLayer@@V1@@@SAXPEAX@Z.c)
 *     ??1CD2DLayer@@UEAA@XZ @ 0x1800FA4CC (--1CD2DLayer@@UEAA@XZ.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA500 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1800FACC0 (-RestoreState@CExternalLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetType@CResampleLayer@@UEBA?AW4LayerType@CLayer@@XZ @ 0x1800FB7D0 (-GetType@CResampleLayer@@UEBA-AW4LayerType@CLayer@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PopLayer(CDrawingContext *this)
{
  int v1; // eax
  __m128i v3; // xmm0
  unsigned int v4; // eax
  int v5; // ecx
  unsigned int v7; // edx
  int v8; // esi
  CD2DLayer *v9; // rdi
  __int64 v10; // rcx
  CD2DLayer *v11; // rdx
  __int64 v12; // rax
  void *(__fastcall *v13)(CD2DLayer *__hidden, unsigned int); // rax
  __int64 (__fastcall *v14)(CExternalLayer *__hidden, struct CDrawingContext *); // rax
  int v15; // eax
  __int64 (__fastcall *v16)(CD2DLayer *); // rax
  int v17; // eax

  v1 = *((_DWORD *)this + 68);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = v1 - 1;
    *((_DWORD *)this + 68) = v4;
    v3 = *(__m128i *)(*((_QWORD *)this + 33) + 16LL * v4);
  }
  v5 = _mm_cvtsi128_si32(v3) - 6;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      return 0LL;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x1088u, 0LL);
      return 2291674884LL;
    }
  }
  else
  {
    v7 = *((_DWORD *)this + 96) - 1;
    v8 = 0;
    v9 = *(CD2DLayer **)(*((_QWORD *)this + 45) + 8LL * v7);
    *((_DWORD *)this + 96) = v7;
    v10 = *((_QWORD *)this + 94);
    if ( v10 == *((_QWORD *)this + 93) || !*(_QWORD *)(v10 - 176) )
      v11 = 0LL;
    else
      v11 = *(CD2DLayer **)(*((_QWORD *)this + 337) - 16LL);
    if ( v9 == v11 )
    {
      v12 = *((_QWORD *)this + 337);
      if ( *(_QWORD *)(v12 - 16) )
        --*(_QWORD *)(v10 - 160);
      *(_QWORD *)(v12 - 16) = 0LL;
    }
    else
    {
      v14 = *(__int64 (__fastcall **)(CExternalLayer *__hidden, struct CDrawingContext *))(*(_QWORD *)v9 + 32LL);
      if ( v14 == CD2DLayer::RestoreState )
      {
        v15 = CD2DLayer::RestoreState(v9, this);
      }
      else if ( v14 == CExternalLayer::RestoreState )
      {
        v15 = CExternalLayer::RestoreState(v9, this);
      }
      else
      {
        v15 = v14(v9, this);
      }
      v8 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x10D4u, 0LL);
      }
      else
      {
        v16 = *(__int64 (__fastcall **)(CD2DLayer *))(*(_QWORD *)v9 + 8LL);
        if ( (char *)v16 != (char *)&COffScreenRenderingLayer::GetType )
        {
          v17 = (char *)v16 == (char *)CResampleLayer::GetType ? CResampleLayer::GetType(v9) : v16(v9);
          if ( v17 == 1 )
            *((_BYTE *)this + 8065) = 1;
        }
      }
    }
    if ( v9 )
    {
      v13 = **(void *(__fastcall ***)(CD2DLayer *__hidden, unsigned int))v9;
      if ( v13 == CD2DLayer::`scalar deleting destructor' )
      {
        CD2DLayer::~CD2DLayer(v9);
        CThreadLocalObjectCache<CD2DLayer,CD2DLayer>::Free(v9);
      }
      else
      {
        v13(v9, 1u);
      }
    }
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1080u, 0LL);
    return (unsigned int)v8;
  }
}
