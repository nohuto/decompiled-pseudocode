/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@detail@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@detail@@YAXV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@0@0V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@Z @ 0x18006FD20
 * Callers:
 *     ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x18006FAA4 (-reserve_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstant.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CCustomKernelEffect::ConstantBufferRow>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v4; // r10
  _OWORD *v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // rax

  result = *a2;
  if ( *a2 != *a1 )
  {
    v4 = *a3;
    do
    {
      v5 = (_OWORD *)(result - 16);
      *a2 = result - 16;
      if ( !v4 || (v6 = a3[2]) == 0 || (v7 = v6 - 1, a3[2] = v7, v7 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      *(_OWORD *)(v4 + 16 * v7) = *v5;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
