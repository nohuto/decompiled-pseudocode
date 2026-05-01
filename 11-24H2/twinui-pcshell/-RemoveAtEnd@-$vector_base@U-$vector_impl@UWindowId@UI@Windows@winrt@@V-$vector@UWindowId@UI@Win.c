/*
 * XREFs of ?RemoveAtEnd@?$vector_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@@winrt@@QEAAXXZ @ 0x180665EB0
 * Callers:
 *     ?RemoveAtEnd@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHXZ @ 0x180665E80 (-RemoveAtEnd@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18033D4FC (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

__int64 __fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId>::RemoveAtEnd(
        volatile signed __int32 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  const struct winrt::impl::slim_source_location *v3; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[32]; // [rsp+38h] [rbp-20h] BYREF

  v1 = (__int64)(a1 + 2);
  if ( !a1 )
    v1 = 48LL;
  if ( *(_QWORD *)v1 == *(_QWORD *)(v1 + 8) )
  {
    v3 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v5);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v3);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  result = (__int64)(a1 + 4);
  if ( !a1 )
    result = 56LL;
  *(_QWORD *)result -= 8LL;
  return result;
}
