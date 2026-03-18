/*
 * XREFs of ?ResetDrawing@CRenderPerf@@IEAAXXZ @ 0x18021FE7C
 * Callers:
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18007C6F0 (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x180265794 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@W4Type@IRenderTarget@@V?$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18021FEEC (-clear@-$vector_facade@W4Type@IRenderTarget@@V-$buffer_impl@W4Type@IRenderTarget@@$03$00Vliberal.c)
 */

void __fastcall CRenderPerf::ResetDrawing(CRenderPerf *this)
{
  detail::vector_facade<enum IRenderTarget::Type,detail::buffer_impl<enum IRenderTarget::Type,4,1,detail::liberal_expansion_policy>>::clear((char *)this + 8);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
}
