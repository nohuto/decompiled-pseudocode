/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801B6730
 * Callers:
 *     ?ResetBuffers@CLegacySwapChain@@MEAAJXZ @ 0x1801B6390 (-ResetBuffers@CLegacySwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@detail@@YAXV?$basic_iterator@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@Z @ 0x1801B693C (--$move_backward_uninitialized@V-$basic_iterator@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_retu.c)
 *     ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801B699C (--$destruct_range@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detai.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801B69D4 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_polic.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1802C95A4 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_polic.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF

  v19 = a3;
  detail::buffer_impl<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v15 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  v7 = v6 - *a1;
  *((_QWORD *)&v14 + 1) = 1LL;
  v8 = v7 >> 3;
  v15 = 0LL;
  v9 = v8 - a2;
  v10 = v5 + 8 * v8;
  *(_QWORD *)&v14 = v10;
  if ( !v10 )
    goto LABEL_8;
  v19 = v6;
  v15 = 1LL;
  v11 = v8 - a2;
  v16 = v14;
  if ( v9 > 1 )
    v11 = 1LL;
  v17 = 1LL;
  v18 = v6 - 8 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>>,stdext::checked_array_iterator<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy> *>>(
    &v18,
    &v19,
    &v16);
  if ( v9 > 1 )
  {
    if ( !v8 || v5 && v8 >= 0 )
    {
      *(_QWORD *)&v14 = v5;
      *((_QWORD *)&v14 + 1) = v8;
      v15 = v8;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy> *>>)(
        &v16,
        v5 + 8 * a2,
        v5 - 8 + 8 * v8,
        &v14);
      goto LABEL_5;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_5:
  v12 = v5 + 8 * (a2 + 1);
  if ( v10 < v12 )
    v12 = v5 + 8 * v8;
  detail::destruct_range<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>>(v5 + 8 * a2, v12);
  a1[1] += 8LL;
  return v5 + 8 * a2;
}
