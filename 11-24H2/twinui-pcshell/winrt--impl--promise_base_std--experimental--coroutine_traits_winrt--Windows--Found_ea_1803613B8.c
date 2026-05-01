/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed @ 0x1803613B8
 * Callers:
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::ErrorCode @ 0x18034CB34 (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18034CB34.c)
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_::GetResults @ 0x180350950 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAsyncActio.c)
 * Callees:
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1802968EC (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1802CB410 (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::rethrow_if_failed(
        __int64 a1,
        int a2)
{
  __int64 result; // rax
  std::exception_ptr *v3; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)(a2 - 2);
  if ( (unsigned int)result <= 1 )
  {
    v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)(a1 + 56));
    std::rethrow_exception(v3);
    JUMPOUT(0x1803613E0LL);
  }
  return result;
}
