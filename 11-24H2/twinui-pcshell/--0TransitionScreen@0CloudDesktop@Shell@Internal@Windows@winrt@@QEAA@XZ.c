/*
 * XREFs of ??0TransitionScreen@0CloudDesktop@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180658710
 * Callers:
 *     _lambda_d6825c428197dee9c36f361ea1d02b0a_::operator() @ 0x180659730 (_lambda_d6825c428197dee9c36f361ea1d02b0a_--operator().c)
 *     ?ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBURemoteDesktopProviderInfo@3456@@Z @ 0x18065A084 (-ActivateRemoteDesktopProvider@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ??$ActivateInstance@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTransitionScreen@4CloudDesktop@Shell@Internal@23@XZ @ 0x180656210 (--$ActivateInstance@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@@IActivationFa.c)
 *     ??$call@P6A?AUTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@AEBUIActivationFactory@Foundation@56@@Z@?$factory_cache_entry@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA?A_P$$QEAP6A?AUTransitionScreen@3CloudDesktop@Shell@Internal@Windows@2@AEBUIActivationFactory@Foundation@72@@Z@Z @ 0x180656A68 (--$call@P6A-AUTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@AEBUIActivationFactor.c)
 */

struct IUnknown *__fastcall winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen::TransitionScreen(
        struct IUnknown *this)
{
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v3)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+38h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_1808CCA78);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen,winrt::Windows::Foundation::IActivationFactory> )
  {
    winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen>(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen,winrt::Windows::Foundation::IActivationFactory>,
      this);
    _InterlockedDecrement64(&qword_1808CCA78);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808CCA78);
    v3 = _lambda_0720d4f4c42f5e4bba7fd612998905f8_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
      this,
      (__int64)this,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return this;
}
