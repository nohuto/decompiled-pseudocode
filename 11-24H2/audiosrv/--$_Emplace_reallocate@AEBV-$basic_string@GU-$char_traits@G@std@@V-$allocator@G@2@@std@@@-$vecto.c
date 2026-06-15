/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800EA0B0
 * Callers:
 *     ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800EC93C (-EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV-$function@$$A6A_NV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18000D870 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800A23C4 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Uninitialized_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x1800EA3C8 (--$_Uninitialized_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$alloc.c)
 *     ?_Calculate_growth@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBA_K_K@Z @ 0x1800EF968 (-_Calculate_growth@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$all.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x1800EF9A4 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

__int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  SIZE_T size_of; // rax
  LPVOID v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdx
  LPVOID v14; // r8
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v19 = v7 + 1;
  v8 = std::vector<std::wstring>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<32>(v8);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = (__int64)v10 + (v6 & 0xFFFFFFFFFFFFFFE0uLL);
  try
  {
    std::wstring::wstring(v12, a3, v11);
    v18 = v12;
    v13 = a1[1];
    v14 = v10;
    v15 = *a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<std::wstring *>(v15, a2, v10);
      v18 = (__int64)v10;
      v14 = (LPVOID)(v12 + 32);
      v13 = a1[1];
      v15 = a2;
    }
    std::_Uninitialized_move<std::wstring *>(v15, v13, v14);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::wstring>>(v18, v12 + 32);
    std::allocator<std::wstring>::deallocate(v17, v10, v8);
    throw;
  }
  std::vector<std::wstring>::_Change_array(a1, v10, v19, v8, v8, v10);
  return v12;
}
