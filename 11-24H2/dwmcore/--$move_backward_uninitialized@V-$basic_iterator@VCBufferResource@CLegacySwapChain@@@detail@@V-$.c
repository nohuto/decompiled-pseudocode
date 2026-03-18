/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VCBufferResource@CLegacySwapChain@@@detail@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@detail@@YAXV?$basic_iterator@VCBufferResource@CLegacySwapChain@@@0@0V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@Z @ 0x1801B6B34
 * Callers:
 *     ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801B65F8 (-reserve_region@-$vector_facade@VCBufferResource@CLegacySwapChain@@V-$buffer_impl@VCBufferResour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CLegacySwapChain::CBufferResource>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 *v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = (__int64 *)(result - 16);
      *a2 = result - 16;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      v9 = *v6;
      v10 = 2 * v8;
      *v6 = 0LL;
      *(_QWORD *)(v5 + 8 * v10) = v9;
      v11 = v6[1];
      v6[1] = 0LL;
      *(_QWORD *)(v5 + 8 * v10 + 8) = v11;
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
