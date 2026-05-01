/*
 * XREFs of ?NonDelegatingGetRuntimeClassName@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@IEAAHPEAPEAX@Z @ 0x1805EFBC8
 * Callers:
 *     ?GetRuntimeClassName@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBVPinConsentPromptContent@@@experimental@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1805EF700 (-GetRuntimeClassName@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@U-$IRefe.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1805ECA94 (-get@-$runtime_class_name@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@winrt@@@Foundat.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,PinConsentPromptContent const &>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,winrt::Windows::Foundation::IAsyncInfo>::NonDelegatingGetRuntimeClassName(
        struct winrt::impl::shared_hstring_header *a1,
        struct winrt::impl::shared_hstring_header **a2)
{
  struct winrt::impl::shared_hstring_header *v3; // rax
  struct winrt::impl::shared_hstring_header *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  winrt::impl::runtime_class_name<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,void>::get(&v5);
  v3 = v5;
  v5 = 0LL;
  *a2 = v3;
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v5);
  return 0LL;
}
