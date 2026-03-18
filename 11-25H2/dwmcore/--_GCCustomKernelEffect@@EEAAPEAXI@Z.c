/*
 * XREFs of ??_GCCustomKernelEffect@@EEAAPEAXI@Z @ 0x180207880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1802078C0 (--1-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstantBufferRow@CCu.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CCustomKernelEffect *__fastcall CCustomKernelEffect::`scalar deleting destructor'(CCustomKernelEffect *this, char a2)
{
  detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::~vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>((char *)this + 24);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xF8uLL);
  return this;
}
