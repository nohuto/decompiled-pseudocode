/*
 * XREFs of ??0?$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@@impl@winrt@@QEAA@XZ @ 0x180660174
 * Callers:
 *     ??0?$producer@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x180660228 (--0-$producer@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationF.c)
 * Callees:
 *     ??0?$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@56@X@impl@winrt@@QEAA@XZ @ 0x1806601E0 (--0-$produce_base@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@U.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory>::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Foundation::IActivationFactory,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  return result;
}
