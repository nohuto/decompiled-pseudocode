/*
 * XREFs of ??1?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801FB250
 * Callers:
 *     ??_GCCustomKernelEffect@@EEAAPEAXI@Z @ 0x1801FB210 (--_GCCustomKernelEffect@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801FB284 (-clear_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstantBu.c)
 */

int __fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::~vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>(
        __int64 a1)
{
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4 )
    detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::clear_region();
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>((void **)a1);
}
