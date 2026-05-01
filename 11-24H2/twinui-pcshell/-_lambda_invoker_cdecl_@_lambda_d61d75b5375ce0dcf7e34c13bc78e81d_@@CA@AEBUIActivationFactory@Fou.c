/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d61d75b5375ce0dcf7e34c13bc78e81d_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180643D00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUInMemoryRandomAccessStream@Streams@Storage@23@XZ @ 0x1806444A4 (--$ActivateInstance@UInMemoryRandomAccessStream@Streams@Storage@Windows@winrt@@@IActivationFacto.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_d61d75b5375ce0dcf7e34c13bc78e81d_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Storage::Streams::InMemoryRandomAccessStream>(
    a2,
    a1);
  return a1;
}
