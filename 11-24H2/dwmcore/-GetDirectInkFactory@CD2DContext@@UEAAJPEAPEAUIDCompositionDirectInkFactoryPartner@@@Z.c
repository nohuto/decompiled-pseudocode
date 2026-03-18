/*
 * XREFs of ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801A23F0
 * Callers:
 *     ?SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z @ 0x1801A0754 (-SetContextMsgRoutingInfo@CGenericInk@@AEAAJPEAVCD3DDevice@@@Z.c)
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801A1820 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1801A1A80 (-CreateScribble@CGenericInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComp.c)
 *     ?IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z @ 0x1801A1CE0 (-IsSuperWetCompatible@CGenericInk@@UEAA_NPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@_N@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ @ 0x180211C70 (-EnsureBeginCreateD3D12Resources@CD3DDevice@@AEAAJXZ.c)
 *     ?CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x1802994F0 (-CreateScribble@CDelegatedInkCanvas@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ @ 0x1801A2470 (-LazyInitDirectInkFactory@CD2DContext@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::GetDirectInkFactory(
        CD2DContext *this,
        struct IDCompositionDirectInkFactoryPartner **a2)
{
  int inited; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx

  inited = CD2DContext::LazyInitDirectInkFactory(this);
  v5 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, inited, 0x119u, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 40);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v5 = 0;
    *a2 = (struct IDCompositionDirectInkFactoryPartner *)*((_QWORD *)this + 40);
  }
  return v5;
}
