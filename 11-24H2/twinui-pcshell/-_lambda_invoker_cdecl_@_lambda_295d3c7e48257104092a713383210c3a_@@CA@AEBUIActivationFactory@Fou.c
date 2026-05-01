/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_295d3c7e48257104092a713383210c3a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18058DB00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUGestureRecognizer@Input@UI@23@XZ @ 0x18058E204 (--$ActivateInstance@UGestureRecognizer@Input@UI@Windows@winrt@@@IActivationFactory@Foundation@Wi.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_295d3c7e48257104092a713383210c3a_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Input::GestureRecognizer>(a2);
  return a1;
}
