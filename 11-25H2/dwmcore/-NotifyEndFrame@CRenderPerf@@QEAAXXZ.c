/*
 * XREFs of ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x1802717A4
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?clear_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18021DC30 (-clear_region@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00V.c)
 *     ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x18022B0EC (-ResetDrawing@CRenderPerf@@IEAAXXZ.c)
 *     ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z @ 0x18026D068 (-Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z.c)
 */

void __fastcall CRenderPerf::NotifyEndFrame(CRenderPerf *this)
{
  CGlobalComposition *CurrentFrameId; // rax
  _QWORD *v3; // rcx
  __int64 *v4; // rbx
  int v5; // esi

  CurrentFrameId = GetCurrentFrameId();
  if ( (CGlobalComposition *)*v3 == CurrentFrameId )
  {
    v4 = v3 + 1;
    v5 = *(_DWORD *)(v3[2] - 4LL);
    detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::clear_region(
      v4,
      (v3[2] - 4LL - *v4) >> 2,
      1LL);
    if ( v4[1] == *v4 )
    {
      if ( *((_DWORD *)this + 48) )
        CRenderPerf::Trace_TargetRender((__int64)this, v5);
      CRenderPerf::ResetDrawing(this);
    }
  }
}
