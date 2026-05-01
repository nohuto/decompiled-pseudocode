/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d9e9c424cde1bb067c1645bccadee844_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180596680
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@URectangle@Shapes@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AURectangle@Shapes@Xaml@UI@23@XZ @ 0x1805969B8 (--$ActivateInstance@URectangle@Shapes@Xaml@UI@Windows@winrt@@@IActivationFactory@Foundation@Wind.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_d9e9c424cde1bb067c1645bccadee844_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Xaml::Shapes::Rectangle>(a2, a1);
  return a1;
}
