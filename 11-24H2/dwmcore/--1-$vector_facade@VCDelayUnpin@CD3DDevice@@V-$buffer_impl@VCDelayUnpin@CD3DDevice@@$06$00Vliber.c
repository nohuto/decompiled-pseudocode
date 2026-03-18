/*
 * XREFs of ??1?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180249A38
 * Callers:
 *     ??1CD3DDevice@@MEAA@XZ @ 0x1802232EC (--1CD3DDevice@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180249A5C (-clear@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 */

void __fastcall detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::~vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::clear();
  detail::expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>::~expandable_buffer_base<std::unique_ptr<CCachedImageProducer::CCachedRealization>,2>(a1);
}
