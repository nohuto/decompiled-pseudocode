/*
 * XREFs of ??$_Emplace_reallocate@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800BC9B0
 * Callers:
 *     ?push_back@?$vector@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAX$$QEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800BDC80 (-push_back@-$vector@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039930 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18004D03C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180096728 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BC978 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@w.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BCB34 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_returncode_policy@wil@@@.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>(
        char *a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  const struct std::nothrow_t *v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // rdi
  _QWORD *v17; // r8
  char *v18; // r14
  __int64 *v19; // rdx
  __int64 *v20; // rcx
  char *result; // rax

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = ((__int64)a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of, v13);
  v15 = *a3;
  v16 = v14;
  *a3 = 0LL;
  v17 = v14;
  v18 = &v14[8 * v5];
  *(_QWORD *)v18 = v15;
  v19 = (__int64 *)*((_QWORD *)a1 + 1);
  v20 = *(__int64 **)a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      v20,
      a2,
      v14);
    v19 = (__int64 *)*((_QWORD *)a1 + 1);
    v17 = v18 + 8;
    v20 = a2;
  }
  std::_Uninitialized_move<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
    v20,
    v19,
    v17);
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAnimatedTransitionVisual,wil::err_returncode_policy>>>(
      *(__int64 **)a1,
      *((__int64 **)a1 + 1));
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  *(_QWORD *)a1 = v16;
  result = v18;
  *((_QWORD *)a1 + 1) = &v16[8 * v9];
  *((_QWORD *)a1 + 2) = &v16[8 * v3];
  return result;
}
