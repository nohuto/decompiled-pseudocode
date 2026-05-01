/*
 * XREFs of ??0?$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@@impl@winrt@@QEAA@XZ @ 0x180670288
 * Callers:
 *     ??0?$producer@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x1806702E8 (--0-$producer@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINet.c)
 * Callees:
 *     ??0?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x1806601F8 (--0-$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcess.c)
 */

_QWORD *__fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>(a1);
  result = v1;
  *v1 = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics>::`vftable';
  return result;
}
