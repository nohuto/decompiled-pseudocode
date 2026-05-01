/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_0720d4f4c42f5e4bba7fd612998905f8_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1806559C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUTransitionScreen@4CloudDesktop@Shell@Internal@23@XZ @ 0x180656210 (--$ActivateInstance@UTransitionScreen@1CloudDesktop@Shell@Internal@Windows@winrt@@@IActivationFa.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_0720d4f4c42f5e4bba7fd612998905f8_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen>(
    a2,
    a1);
  return a1;
}
