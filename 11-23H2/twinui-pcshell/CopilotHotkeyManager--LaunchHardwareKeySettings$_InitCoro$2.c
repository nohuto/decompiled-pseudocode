/*
 * XREFs of CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x180271714
 * Callers:
 *     ?LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x180271B64 (-LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA-AU-$IAsyncOperation@_N@Foundation@Windows@.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@UPackageVolume@Deployment@Management@34@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x18022DA84 (-get_return_object@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperati_ea_18022DA84.c)
 *     ??0promise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@QEAA@XZ @ 0x180260DD4 (--0promise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHo.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180271830 (CopilotHotkeyManager--LaunchHardwareKeySettings$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        winrt::Windows::Foundation::IUnknown *a3,
        __int64 a4)
{
  __int64 v6; // rbx

  *(_QWORD *)(a2 + 161) = a4;
  *(_QWORD *)a2 = CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v6 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type::promise_type(v6);
  winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,LockScreenWidgetPackageHelperBase *,winrt::Windows::Management::Deployment::PackageVolume>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
    v6,
    a3);
  *(_BYTE *)(a2 + 160) = 0;
  return CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1(a2);
}
