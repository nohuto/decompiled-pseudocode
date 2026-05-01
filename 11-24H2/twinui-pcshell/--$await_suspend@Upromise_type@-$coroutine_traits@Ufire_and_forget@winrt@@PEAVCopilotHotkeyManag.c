/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCopilotHotkeyManager@@_N@experimental@std@@@?$await_adapter@U?$IAsyncOperation@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCopilotHotkeyManager@@_N@experimental@std@@@experimental@std@@@Z @ 0x18061D894
 * Callers:
 *     CopilotHotkeyManager::LaunchCustomUriForResultsAsync$_ResumeCoro$1 @ 0x180632B20 (CopilotHotkeyManager--LaunchCustomUriForResultsAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x1806359B0 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriResult>,1>::await_suspend<std::experimental::coroutine_traits<winrt::fire_and_forget,CopilotHotkeyManager *,bool>::promise_type>()
{
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::System::LaunchUriResult>,1>::register_completed_callback();
}
