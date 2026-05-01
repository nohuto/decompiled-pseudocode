/*
 * XREFs of winrt::implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::GetRuntimeClassName @ 0x180350B50
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x180336BDC (-get@-$runtime_class_name@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstring@3@X.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncInfo_::GetRuntimeClassName(
        __int64 a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncAction,void>::get(a2);
  return a2;
}
