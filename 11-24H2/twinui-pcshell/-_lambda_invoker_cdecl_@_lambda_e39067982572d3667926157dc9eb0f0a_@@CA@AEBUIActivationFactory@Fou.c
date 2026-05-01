/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_e39067982572d3667926157dc9eb0f0a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x1805ED210
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@23@XZ @ 0x1805ED3E8 (--$ActivateInstance@UXmlDocument@Dom@Xml@Data@Windows@winrt@@@IActivationFactory@Foundation@Wind.c)
 */

const struct winrt::Windows::Foundation::IActivationFactory *__fastcall _lambda_e39067982572d3667926157dc9eb0f0a_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::Foundation::IActivationFactory *a1,
        __int64 a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Xml::Dom::XmlDocument>(a2, a1);
  return a1;
}
