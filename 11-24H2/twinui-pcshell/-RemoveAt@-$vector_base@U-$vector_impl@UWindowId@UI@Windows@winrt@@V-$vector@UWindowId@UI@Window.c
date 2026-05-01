/*
 * XREFs of ?RemoveAt@?$vector_base@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UWindowId@UI@Windows@3@@winrt@@QEAAXI@Z @ 0x180665DE4
 * Callers:
 *     ?RemoveAt@?$produce@U?$vector_impl@UWindowId@UI@Windows@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UWindowId@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHI@Z @ 0x180665DB0 (-RemoveAt@-$produce@U-$vector_impl@UWindowId@UI@Windows@winrt@@V-$vector@UWindowId@UI@Windows@wi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18033D4FC (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

void *__fastcall winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::WindowId,std::vector<winrt::Windows::UI::WindowId>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::WindowId>::RemoveAt(
        volatile signed __int32 *a1,
        unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rbx
  void *result; // rax
  const struct winrt::impl::slim_source_location *v6; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-20h] BYREF

  v2 = (__int64)(a1 + 2);
  if ( !a1 )
    v2 = 48LL;
  if ( a2 >= (unsigned __int64)((__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)v2) >> 3) )
  {
    v6 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v8);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v6);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  _InterlockedIncrement(a1);
  v3 = (__int64)(a1 + 2);
  v4 = (__int64)(a1 + 4);
  if ( !a1 )
  {
    v3 = 48LL;
    v4 = 56LL;
  }
  result = memmove_0(
             (void *)(*(_QWORD *)v3 + 8LL * a2),
             (const void *)(*(_QWORD *)v3 + 8LL * a2 + 8),
             *(_QWORD *)v4 - (*(_QWORD *)v3 + 8LL * a2 + 8));
  *(_QWORD *)v4 -= 8LL;
  return result;
}
