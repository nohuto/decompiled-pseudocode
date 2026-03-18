/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x18024F39C
 * Callers:
 *     ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x18024F0A8 (-reserve_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@.c)
 * Callees:
 *     ??0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z @ 0x1802C20C4 (--0CDelayUnpin@CD3DDevice@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CD3DDevice::CDelayUnpin>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v7; // r14
  const struct CD3DDevice::CDelayUnpin *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  result = *a2;
  if ( *a2 != *a1 )
  {
    v7 = *a3;
    do
    {
      v8 = (const struct CD3DDevice::CDelayUnpin *)(result - 24);
      *a2 = result - 24;
      if ( !v7 || (v9 = a3[2]) == 0 || (v10 = v9 - 1, a3[2] = v10, v10 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      CD3DDevice::CDelayUnpin::CDelayUnpin((CD3DDevice::CDelayUnpin *)(v7 + 24 * v10), v8);
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
