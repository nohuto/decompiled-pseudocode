/*
 * XREFs of ??1?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180263E88
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800F8AFC (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180265C90 (-clear@-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOcclusionRect.c)
 */

void __fastcall detail::vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>::~vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>::clear();
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>(a1);
}
