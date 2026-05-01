/*
 * XREFs of ?get@?$runtime_class_name@UIImmersiveShellThreadDispatcherCallback@SnapComponent@Shell@Internal@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1805BADF8
 * Callers:
 *     winrt::implements_winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcherCallback__lambda_ac2a839fec59629fce3443c282716c2d____winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback_::GetRuntimeClassName @ 0x1805B91B0 (winrt--implements_winrt--Windows--Internal--Shell--SnapComponent--implementation--ImmersiveShell.c)
 *     ?GetRuntimeClassName@?$implements@V?$ImmersiveShellThreadDispatcherCallback@V?$_Binder@U_Unforced@std@@P6A?AUfire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@2@U?$com_ptr@UIServiceProvider@@@4@AEBUCRect@Geometry@@I@ZAEAV52@AEAU64@U78@I@std@@@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIImmersiveShellThreadDispatcherCallback@34567@@winrt@@EEBA?AUhstring@2@XZ @ 0x1805B91E0 (-GetRuntimeClassName@-$implements@V-$ImmersiveShellThreadDispatcherCallback@V-$_Binder@U_Unforce.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x180054754 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

struct winrt::impl::shared_hstring_header **__fastcall winrt::impl::runtime_class_name<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcherCallback,void>::get(
        struct winrt::impl::shared_hstring_header **a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF

  v3[1] = 76LL;
  v3[0] = L"Windows.Internal.Shell.SnapComponent.IImmersiveShellThreadDispatcherCallback";
  winrt::hstring::hstring(a1, (__int64)v3);
  return a1;
}
