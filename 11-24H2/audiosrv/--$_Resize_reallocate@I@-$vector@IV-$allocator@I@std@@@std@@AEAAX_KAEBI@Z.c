/*
 * XREFs of ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x18012F49C
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013A098 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18012EDB0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x18012F7F4 (--$_Uninitialized_fill_n@V-$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV-$allocator@I@0@@Z.c)
 *     ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x18013950C (-_Calculate_growth@-$vector@IV-$allocator@I@std@@@std@@AEBA_K_K@Z.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned int>::_Resize_reallocate<unsigned int>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  SIZE_T size_of; // rax
  char *v9; // r14
  __int64 v10; // rcx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v7 = std::vector<unsigned int>::_Calculate_growth();
  size_of = std::_Get_size_of_n<4>(v7);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    std::_Uninitialized_fill_n<std::allocator<unsigned int>>(&v9[4 * v6], a2 - v6, a3);
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v10 = a1;
  }
  catch ( ... )
  {
    std::allocator<unsigned int>::deallocate(v10, v9, v7);
    throw;
  }
  return std::vector<unsigned int>::_Change_array();
}
