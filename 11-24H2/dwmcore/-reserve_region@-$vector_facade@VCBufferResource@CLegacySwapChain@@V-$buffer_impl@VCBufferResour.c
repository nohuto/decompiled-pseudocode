/*
 * XREFs of ?reserve_region@?$vector_facade@VCBufferResource@CLegacySwapChain@@V?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCBufferResource@CLegacySwapChain@@_K0@Z @ 0x1801B65F8
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801B6390 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwapChain@@0@Z @ 0x1801B6AFC (--$destruct_range@VCBufferResource@CLegacySwapChain@@@detail@@YAXPEAVCBufferResource@CLegacySwap.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCBufferResource@CLegacySwapChain@@@detail@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@detail@@YAXV?$basic_iterator@VCBufferResource@CLegacySwapChain@@@0@0V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@Z @ 0x1801B6B34 (--$move_backward_uninitialized@V-$basic_iterator@VCBufferResource@CLegacySwapChain@@@detail@@V-$.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B6BA8 (-ensure_extra_capacity@-$buffer_impl@VCBufferResource@CLegacySwapChain@@$02$00Vliberal_expansion.c)
 *     ??$move_backward@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCBufferResource@CLegacySwapChain@@@stdext@@V?$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@0@0V12@@Z @ 0x1802C9640 (--$move_backward@V-$move_iterator@PEAVCBufferResource@CLegacySwapChain@@@std@@V-$checked_array_i.c)
 */

__int64 __fastcall detail::vector_facade<CLegacySwapChain::CBufferResource,detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+50h] BYREF

  v17 = a3;
  detail::buffer_impl<CLegacySwapChain::CBufferResource,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v5 = *a1;
  v6 = a1[1];
  v7 = (v6 - *a1) >> 4;
  *((_QWORD *)&v12 + 1) = 1LL;
  v13 = 0LL;
  v8 = v7 - a2;
  *(_QWORD *)&v12 = v5 + 16 * ((v6 - v5) >> 4);
  if ( !(_QWORD)v12 )
    goto LABEL_7;
  v17 = v6;
  v13 = 1LL;
  v9 = v7 - a2;
  v14 = v12;
  if ( v8 > 1 )
    v9 = 1LL;
  v15 = 1LL;
  v16 = v6 - 16 * v9;
  detail::move_backward_uninitialized<detail::basic_iterator<CLegacySwapChain::CBufferResource>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>(
    &v16,
    &v17,
    &v14);
  if ( v8 > 1 )
  {
    if ( !v7 || v5 && v7 >= 0 )
    {
      *((_QWORD *)&v12 + 1) = v7;
      v13 = v7;
      *(_QWORD *)&v12 = v5;
      v10 = 16 * a2;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CLegacySwapChain::CBufferResource *>,stdext::checked_array_iterator<CLegacySwapChain::CBufferResource *>>)(
        &v14,
        16 * a2 + v5,
        16 * v7 + v5 - 16,
        &v12);
      goto LABEL_6;
    }
LABEL_7:
    _invalid_parameter_noinfo_noreturn();
  }
  v10 = 16 * a2;
LABEL_6:
  detail::destruct_range<CLegacySwapChain::CBufferResource>((CLegacySwapChain::CBufferResource *)(v10 + v5));
  a1[1] += 16LL;
  return v10 + v5;
}
