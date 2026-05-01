/*
 * XREFs of ?Handwriting@KnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@SA@XZ @ 0x1802BE98C
 * Callers:
 *     _anonymous_namespace_::GetViewTypeFromExperienceId @ 0x1800AC274 (_anonymous_namespace_--GetViewTypeFromExperienceId.c)
 * Callees:
 *     ?Query@?$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180054A2C (-Query@-$consume_Windows_Foundation_IUriRuntimeClass@UIUriRuntimeClass@Foundation@Windows@winrt@.c)
 *     ??$call@P6A?AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@?$factory_cache_entry@UKnownOnScreenInputUriSchemes@OnScreenInput@ApplicationModel@WindowsUdk@winrt@@UIKnownOnScreenInputUriSchemesStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUhstring@2@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationModel@WindowsUdk@2@@Z@Z @ 0x1802A5B28 (--$call@P6A-AUhstring@winrt@@AEBUIKnownOnScreenInputUriSchemesStatics@OnScreenInput@ApplicationM.c)
 */

_QWORD *__fastcall winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes::Handwriting(
        _QWORD *a1)
{
  __int64 (__fastcall *v3)(const struct winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics *); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CBBF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics> )
  {
    winrt::impl::consume_Windows_Foundation_IUriRuntimeClass<winrt::Windows::Foundation::IUriRuntimeClass>::Query(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>,
      a1);
    _InterlockedDecrement64(&qword_1808CBBF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CBBF8);
    v3 = _lambda_04b20c681c5c7a5e6c426c1afb5061d5_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::OnScreenInput::KnownOnScreenInputUriSchemes,winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics>::call<winrt::hstring (*)(winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics const &)>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
