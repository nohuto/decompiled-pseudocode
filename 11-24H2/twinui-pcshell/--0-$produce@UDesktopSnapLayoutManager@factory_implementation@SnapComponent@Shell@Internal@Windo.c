/*
 * XREFs of ??0?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA@XZ @ 0x18016EC2C
 * Callers:
 *     ??0?$producer@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x18016EC14 (--0-$producer@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@_ea_18016EC14.c)
 * Callees:
 *     ??0?$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x1802CF728 (--0-$produce_base@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Sh_ea_1802CF728.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory>::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::factory_implementation::DesktopSnapLayoutManager,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  return result;
}
