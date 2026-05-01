/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_93de59c7ba7574afa65973f54421ad03_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18069A610
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UCompositor@Composition@UI@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUCompositor@Composition@UI@23@XZ @ 0x18069A7A0 (--$ActivateInstance@UCompositor@Composition@UI@Windows@winrt@@@IActivationFactory@Foundation@Win.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_93de59c7ba7574afa65973f54421ad03_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::UI::Composition::Compositor>(a2, a1);
  return a1;
}
