/*
 * XREFs of ??0?$produce@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@@impl@winrt@@QEAA@XZ @ 0x180660198
 * Callers:
 *     ??0?$producer@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x180660240 (--0-$producer@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrac.c)
 * Callees:
 *     ??0?$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcessTrackerStatics@3456@X@impl@winrt@@QEAA@XZ @ 0x1806601F8 (--0-$produce_base@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@UIProcess.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics>::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>::produce_base<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,winrt::Windows::Internal::Shell::IProcessTrackerStatics>::`vftable';
  return result;
}
