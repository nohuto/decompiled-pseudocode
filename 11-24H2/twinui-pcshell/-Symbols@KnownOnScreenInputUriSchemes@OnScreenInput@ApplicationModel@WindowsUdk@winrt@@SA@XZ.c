/*
 * XREFs of ?Symbols@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x18020CC00
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x1800AC274 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ?GetApplication@?$consume_Windows_Internal_StateRepository_IApplicationExtension@UIApplicationExtension@StateRepository@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18020CC78 (-GetApplication@-$consume_Windows_Internal_StateRepository_IApplicationExtension@UIApplicationEx.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x1802A5B28 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationM.c)
 */

__int64 __fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Symbols(
        __int64 a1)
{
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CBBF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics> )
  {
    winrt::impl::consume_Windows_Internal_StateRepository_IApplicationExtension<winrt::Windows::Internal::StateRepository::IApplicationExtension>::GetApplication(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808CBBF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CBBF8);
    v3 = _lambda_b3fb1a8ac21bf9559296c5cffbcc67c3_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics const &)>(
      a1,
      a1,
      &v3);
  }
  return a1;
}
