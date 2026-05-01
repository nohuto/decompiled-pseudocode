/*
 * XREFs of ??1?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@impl@winrt@@QEAA@XZ @ 0x180621E44
 * Callers:
 *     ?Release@?$implements_delegate@U?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@V_lambda_6b9403a3ca1a595497445348084892d2_@@@impl@winrt@@UEAAIXZ @ 0x180633FB0 (-Release@-$implements_delegate@U-$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows.c)
 * Callees:
 *     ??1?$module_lock_updater@$00@impl@winrt@@QEAA@XZ @ 0x180102D54 (--1-$module_lock_updater@$00@impl@winrt@@QEAA@XZ.c)
 */

BOOL __fastcall winrt::impl::implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_3dc309b72a8cc7bcc36dbf196f52b656_>::~implements_delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_3dc309b72a8cc7bcc36dbf196f52b656_>(
        __int64 a1)
{
  winrt::impl::module_lock_updater<1>::~module_lock_updater<1>();
  return wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>((HWND *)(a1 + 56));
}
