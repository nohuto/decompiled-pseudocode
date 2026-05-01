/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXI@Z @ 0x18061B554
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x18061B520 (-RemoveAt@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhstri.c)
 * Callees:
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CF184 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUhstring@winrt@@@?$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@Z @ 0x18033CB80 (--$assign@AEAUhstring@winrt@@@-$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18033D4FC (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?erase@?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uhstring@winrt@@@std@@@std@@@2@@Z @ 0x18061BCC8 (-erase@-$vector@Uhstring@winrt@@V-$allocator@Uhstring@winrt@@@std@@@std@@QEAA-AV-$_Vector_iterat.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::RemoveAt(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rcx
  const struct winrt::impl::slim_source_location *v7; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-20h] BYREF
  char v11; // [rsp+70h] [rbp+8h] BYREF

  v8[8] = 0;
  v3 = (__int64)(a1 + 2);
  if ( !a1 )
    v3 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v3 + 8) - *(_QWORD *)v3) >> 3) )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v10);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v7);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v4 = (__int64)(a1 + 2);
  if ( !a1 )
    v4 = 48LL;
  v5 = (__int64 *)(*(_QWORD *)v4 + 8LL * a2);
  winrt::impl::removed_value<winrt::hstring,void>::assign<winrt::hstring &>((__int64)v8, v5);
  v6 = (__int64)(a1 + 2);
  if ( !a1 )
    v6 = 48LL;
  std::vector<winrt::hstring>::erase(v6, &v11, v5);
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v8);
}
