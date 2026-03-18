/*
 * XREFs of ??1?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18025A9A0
 * Callers:
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802D2C58 (--1CLegacySwapChain@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801C5C54 (-clear@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource@CLegac.c)
 */

int __fastcall detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::~vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::clear(a1);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
