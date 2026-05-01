/*
 * XREFs of ??0?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x1806601F8
 * Callers:
 *     ??0?$produce@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@@impl@winrt@@QEAA@XZ @ 0x180660198 (--0-$produce@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrack.c)
 *     ??0?$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetworkConnectionUtilsStatics@3456@@impl@winrt@@QEAA@XZ @ 0x180670288 (--0-$produce@UNetworkConnectionUtils@factory_implementation@Shell@Internal@Windows@winrt@@UINetw.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>(
        _QWORD *a1)
{
  *a1 = &winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::NetworkConnectionUtils,winrt::Windows::Internal::Shell::INetworkConnectionUtilsStatics,void>::`vftable';
  return a1;
}
