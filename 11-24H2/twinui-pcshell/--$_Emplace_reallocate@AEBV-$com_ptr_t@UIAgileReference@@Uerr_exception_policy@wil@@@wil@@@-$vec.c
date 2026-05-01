/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1801021FC
 * Callers:
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18002FD00 (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18007D438 (--0-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180102364 (-_Change_array@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAgileReference,wil::err_exception_policy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // r14
  __int64 *v13; // r13
  __int64 *v14; // rsi
  __int64 *v15; // r8
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v24; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v24 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v6];
  v14 = v13 + 1;
  wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>(
    v13,
    a3);
  v15 = a1[1];
  v16 = *a1;
  v17 = v12;
  if ( v4 == v15 )
  {
    while ( v16 != v15 )
    {
      v18 = *v16;
      *v16 = 0LL;
      *v17++ = v18;
      ++v16;
    }
    v19 = v17;
  }
  else
  {
    while ( v16 != v4 )
    {
      v20 = *v16;
      *v16 = 0LL;
      *v17++ = v20;
      ++v16;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v17, v17);
    v21 = a1[1];
    while ( v4 != v21 )
    {
      v22 = *v4;
      *v4 = 0LL;
      *v14++ = v22;
      ++v4;
    }
    v19 = v14;
    v17 = v14;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v17, v19);
  std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Change_array(a1, v12, v24, v8, v13 + 1, v12);
  return v13;
}
