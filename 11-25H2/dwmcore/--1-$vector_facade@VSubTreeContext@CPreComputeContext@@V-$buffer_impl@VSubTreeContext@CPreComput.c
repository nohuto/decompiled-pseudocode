/*
 * XREFs of ??1?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801E3C1C
 * Callers:
 *     ??1?$unique_ptr@VCPreComputeContext@@U?$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ @ 0x1800E3CEC (--1-$unique_ptr@VCPreComputeContext@@U-$default_delete@VCPreComputeContext@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z @ 0x1801E3B7C (--R-$default_delete@VCPreComputeContext@@@std@@QEBAXPEAVCPreComputeContext@@@Z.c)
 * Callees:
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180097C08 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 */

int __fastcall detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::~vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(a1);
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
