/*
 * XREFs of ??$create_and_initialize@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@$$V@impl@winrt@@YAPEAUProcessTracker@factory_implementation@Shell@Internal@Windows@1@XZ @ 0x18065FBF8
 * Callers:
 *     ??$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt@@YA?AUIActivationFactory@Foundation@Windows@1@XZ @ 0x180660038 (--$make_factory@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@@impl@winrt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1806602F4 (--0ProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

_OWORD *winrt::impl::create_and_initialize<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker,>()
{
  _OWORD *v1; // [rsp+30h] [rbp+8h]

  v1 = operator new(0x28uLL);
  *v1 = 0LL;
  v1[1] = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker::ProcessTracker((winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker *)v1);
  *(_QWORD *)v1 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::factory_implementation::ProcessTracker>::`vftable';
  return v1;
}
