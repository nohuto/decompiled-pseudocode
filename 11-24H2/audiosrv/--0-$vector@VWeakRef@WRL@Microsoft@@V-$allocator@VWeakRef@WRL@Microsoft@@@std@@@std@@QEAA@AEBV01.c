/*
 * XREFs of ??0?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18010B6D0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Copy @ 0x18010EF60 (std--_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_--_Copy.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180029914 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_copy@PEAVWeakRef@WRL@Microsoft@@PEAV123@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00AEAV?$allocator@VWeakRef@WRL@Microsoft@@@0@@Z @ 0x18010B55C (--$_Uninitialized_copy@PEAVWeakRef@WRL@Microsoft@@PEAV123@V-$allocator@VWeakRef@WRL@Microsoft@@@.c)
 *     ??1?$_Tidy_guard@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@QEAA@XZ @ 0x18010B7F0 (--1-$_Tidy_guard@V-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@s.c)
 */

__int64 **__fastcall std::vector<Microsoft::WRL::WeakRef>::vector<Microsoft::WRL::WeakRef>(__int64 **a1, __int64 **a2)
{
  unsigned __int64 v4; // rbx
  SIZE_T size_of; // rax
  __int64 *v6; // rax
  __int64 *v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2[1] - *a2;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
    size_of = std::_Get_size_of_n<8>(a2[1] - *a2);
    v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v6;
    a1[1] = v6;
    a1[2] = &v6[v4];
    v7 = std::_Uninitialized_copy<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *,std::allocator<Microsoft::WRL::WeakRef>>(
           *a2,
           a2[1],
           v6);
    v9 = 0LL;
    a1[1] = v7;
    std::_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>::~_Tidy_guard<std::vector<Microsoft::WRL::WeakRef>>(&v9);
  }
  return a1;
}
