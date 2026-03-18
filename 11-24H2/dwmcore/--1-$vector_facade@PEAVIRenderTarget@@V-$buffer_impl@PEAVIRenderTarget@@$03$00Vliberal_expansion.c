/*
 * XREFs of ??1?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180259DAC
 * Callers:
 *     ??1CRenderTargetManager@@QEAA@XZ @ 0x18025A324 (--1CRenderTargetManager@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVIRenderTarget@@V?$buffer_impl@PEAVIRenderTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801032F8 (-clear_region@-$vector_facade@PEAVIRenderTarget@@V-$buffer_impl@PEAVIRenderTarget@@$03$00Vlibera.c)
 */

int __fastcall detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::~vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>(
        __int64 *a1)
{
  __int64 v2; // r8

  v2 = (a1[1] - *a1) >> 3;
  if ( v2 )
    detail::vector_facade<IRenderTarget *,detail::buffer_impl<IRenderTarget *,4,1,detail::liberal_expansion_policy>>::clear_region(
      a1,
      0LL,
      v2);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)a1);
}
