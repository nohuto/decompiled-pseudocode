/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@@winrt@@QEAAXXZ @ 0x18061B650
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IVector@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x18061B620 (-RemoveAtEnd@-$produce@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$allocator@Uhs.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ @ 0x1802CF184 (--1-$_Optional_destruct_base@Uhstring@winrt@@$0A@@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??$assign@AEAUhstring@winrt@@@?$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@Z @ 0x18033CB80 (--$assign@AEAUhstring@winrt@@@-$removed_value@Uhstring@winrt@@X@impl@winrt@@QEAAXAEAUhstring@2@@.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18033D4FC (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rbx
  const struct winrt::impl::slim_source_location *v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v8[32]; // [rsp+48h] [rbp-20h] BYREF

  v6[8] = 0;
  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  if ( *(_QWORD *)v2 == *(_QWORD *)(v2 + 8) )
  {
    v5 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v8);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v5);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 4);
  if ( !a1 )
    v3 = 56LL;
  winrt::impl::removed_value<winrt::hstring,void>::assign<winrt::hstring &>(
    (__int64)v6,
    (__int64 *)(*(_QWORD *)v3 - 8LL));
  v4 = (__int64)(a1 + 4);
  if ( !a1 )
    v4 = 56LL;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(*(_QWORD *)v4 - 8LL));
  *(_QWORD *)v4 -= 8LL;
  std::_Optional_destruct_base<winrt::hstring,0>::~_Optional_destruct_base<winrt::hstring,0>((__int64)v6);
}
