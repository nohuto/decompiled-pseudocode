/*
 * XREFs of ?Remove@?$map_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@N@winrt@@QEAAXAEBUhstring@2@@Z @ 0x1800FE9FC
 * Callers:
 *     ?Remove@?$produce@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IMap@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAX@Z @ 0x1800FEAC0 (-Remove@-$produce@U-$map_impl@Uhstring@winrt@@NV-$map@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800B82A8 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@QEAAP.c)
 *     ??$_Find@Uhstring@winrt@@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@1@AEBUhstring@winrt@@@Z @ 0x1800FB940 (--$_Find@Uhstring@winrt@@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@NU-$less@Uhstring@winrt@@@std@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x1800FC768 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ??4?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800FCA20 (--4-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V-$allocator@U-$pai.c)
 *     ?_Clear@?$_Node_handle@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@2@U_Node_handle_map_base@2@Uhstring@winrt@@N@std@@AEAAXXZ @ 0x1800FF49C (-_Clear@-$_Node_handle@U-$_Tree_node@U-$pair@$$CBUhstring@winrt@@N@std@@PEAX@std@@V-$allocator@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::map_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::hstring,double>::Remove(
        volatile signed __int32 *a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  void *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  void *pExceptionObject[3]; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  v4 = std::_Tree<std::_Tmap_traits<winrt::hstring,double,std::less<winrt::hstring>,std::allocator<std::pair<winrt::hstring const,double>>,0>>::_Find<winrt::hstring>(
         v3,
         a2);
  if ( v4 == *(_QWORD *)v3 )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  pExceptionObject[0] = std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>::_Extract(
                          (__int64 **)v3,
                          v4);
  std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>,std::allocator<std::pair<winrt::hstring const,double>>,std::_Node_handle_map_base,winrt::hstring,double>::operator=(
    &v6,
    pExceptionObject);
  std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>,std::allocator<std::pair<winrt::hstring const,double>>,std::_Node_handle_map_base,winrt::hstring,double>::_Clear(pExceptionObject);
  return std::_Node_handle<std::_Tree_node<std::pair<winrt::hstring const,double>,void *>,std::allocator<std::pair<winrt::hstring const,double>>,std::_Node_handle_map_base,winrt::hstring,double>::_Clear(&v6);
}
