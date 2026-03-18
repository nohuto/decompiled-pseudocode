/*
 * XREFs of ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x180265794
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?clear_region@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1802127F0 (-clear_region@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00V.c)
 *     ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x18021FE7C (-ResetDrawing@CRenderPerf@@IEAAXXZ.c)
 *     ?Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z @ 0x180261018 (-Trace_TargetRender@CRenderPerf@@IEAAXW4Type@IRenderTarget@@@Z.c)
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
