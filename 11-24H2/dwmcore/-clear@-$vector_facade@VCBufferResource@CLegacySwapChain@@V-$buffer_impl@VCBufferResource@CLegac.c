/*
 * XREFs of ?clear@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801B7058
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801B6390 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 *     ??1?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18024F470 (--1-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource@CLegacySwa.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B6254 (-clear_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResource.c)
 */

__int64 __fastcall detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  v2 = (a1[1] - *a1) >> 4;
  if ( v2 )
    return detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             a2,
             v2);
  return result;
}
