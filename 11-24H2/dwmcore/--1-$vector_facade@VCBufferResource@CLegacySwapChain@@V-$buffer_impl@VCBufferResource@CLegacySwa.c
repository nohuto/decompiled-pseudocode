/*
 * XREFs of ??1?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18024F470
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802C99D8 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7058 (-clear@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource@CLegac.c)
 */

int __fastcall detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::~vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>(
        __int64 *a1,
        __int64 a2)
{
  detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::clear(
    a1,
    a2);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)a1);
}
