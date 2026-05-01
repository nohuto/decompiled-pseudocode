/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_1f68f4413181401bb9e1178e14cf0745_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180455C50
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXamlControlsResources@Controls@Xaml@UI@Microsoft@3@XZ @ 0x1801E9918 (--$ActivateInstance@UXamlControlsResources@Controls@Xaml@UI@Microsoft@winrt@@@IActivationFactory.c)
 */

struct IUnknown *__fastcall _lambda_1f68f4413181401bb9e1178e14cf0745_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources>(
    a2,
    a1);
  return a1;
}
