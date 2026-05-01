/*
 * XREFs of ??0?$produce@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA@XZ @ 0x180451880
 * Callers:
 *     ??0?$producer@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x1804518F8 (--0-$producer@UXamlExplorerHostWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Intern.c)
 * Callees:
 *     ??0?$produce_base@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@X@impl@winrt@@QEAA@XZ @ 0x1804518C8 (--0-$produce_base@UXamlExplorerHostChildWindow_WASDK@factory_implementation@XamlExplorerHost@She.c)
 */

_QWORD *winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IActivationFactory>::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IActivationFactory>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IActivationFactory,void>::produce_base<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostChildWindow_WASDK,winrt::Windows::Foundation::IActivationFactory,void>();
  result = v0;
  *v0 = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  return result;
}
