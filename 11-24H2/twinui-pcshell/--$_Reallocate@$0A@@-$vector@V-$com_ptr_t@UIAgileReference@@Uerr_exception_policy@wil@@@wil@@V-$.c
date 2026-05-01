/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXAEA_K@Z @ 0x1802889A8
 * Callers:
 *     ??$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAgileCallbackArray@AgileRegistrationList@@@12@AEAV?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@@Z @ 0x18002FD00 (--$Make@VAgileCallbackArray@AgileRegistrationList@@AEAV-$vector@UItem@AgileRegistrationList@@V-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18001D4AC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18001D4DC (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800489DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Reallocate<0>(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v4; // r14
  size_t size_of; // rax
  char *v6; // rax
  char *v7; // rdi
  __int64 *v8; // rdx
  __int64 v9; // rax
  __int64 *v10; // r8
  __int64 *i; // rcx
  unsigned __int64 v12; // rsi
  char *result; // rax
  char *v14; // [rsp+40h] [rbp+8h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v14 = v6;
  try
  {
    v8 = *(__int64 **)(a1 + 8);
    v10 = (__int64 *)v6;
    for ( i = *(__int64 **)a1; i != v8; ++i )
    {
      v9 = *i;
      *i = 0LL;
      *v10++ = v9;
    }
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(v10, v10);
    v12 = *a2;
    if ( *(_QWORD *)a1 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>>(
        *(__int64 **)a1,
        *(__int64 **)(a1 + 8));
      std::_Deallocate<16,0>(
        *(void **)a1,
        (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = &v7[8 * v4];
    result = &v7[8 * v12];
    *(_QWORD *)(a1 + 16) = result;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)(8 * *a2));
    throw;
  }
  return result;
}
