/*
 * XREFs of ?Create@LowLatencyAction@Shell@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803A23C0
 * Callers:
 *     ?OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18024BE7C (-OnHotkeyInvoke@XamlLauncher@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1803A3550 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     ??$call@AEAV_lambda_125aca5befc74b4b5a948ae8fd19779a_@@@?$factory_cache_entry@ULowLatencyAction@Shell@UI@WindowsUdk@winrt@@UILowLatencyActionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_125aca5befc74b4b5a948ae8fd19779a_@@@Z @ 0x1803A18B0 (--$call@AEAV_lambda_125aca5befc74b4b5a948ae8fd19779a_@@@-$factory_cache_entry@ULowLatencyAction@.c)
 *     ??R_lambda_125aca5befc74b4b5a948ae8fd19779a_@@QEBA@AEBUILowLatencyActionStatics@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1803A1D60 (--R_lambda_125aca5befc74b4b5a948ae8fd19779a_@@QEBA@AEBUILowLatencyActionStatics@Shell@UI@Windows.c)
 */

const struct winrt::param::hstring *__fastcall winrt::WindowsUdk::UI::Shell::LowLatencyAction::Create(
        const struct winrt::param::hstring *a1,
        __int64 *a2)
{
  __int64 *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_1808CA768;
  _InterlockedIncrement64(&qword_1808CA768);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::LowLatencyAction,winrt::WindowsUdk::UI::Shell::ILowLatencyActionStatics> )
  {
    _lambda_125aca5befc74b4b5a948ae8fd19779a_::operator()(
      &v4,
      a1,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::LowLatencyAction,winrt::WindowsUdk::UI::Shell::ILowLatencyActionStatics>);
    _InterlockedDecrement64(&qword_1808CA768);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CA768);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::LowLatencyAction,winrt::WindowsUdk::UI::Shell::ILowLatencyActionStatics>::call<_lambda_125aca5befc74b4b5a948ae8fd19779a_ &>(
      (__int64)a1,
      (__int64)a1,
      (__int64)&v4);
  }
  return a1;
}
