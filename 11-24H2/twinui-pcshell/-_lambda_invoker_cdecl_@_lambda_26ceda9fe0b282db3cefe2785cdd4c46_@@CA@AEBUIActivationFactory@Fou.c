/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_26ceda9fe0b282db3cefe2785cdd4c46_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x18031B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonArray@Json@Data@23@XZ @ 0x1802A83A8 (--$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@w.c)
 */

struct IUnknown *__fastcall _lambda_26ceda9fe0b282db3cefe2785cdd4c46_::_lambda_invoker_cdecl_(
        struct IUnknown *a1,
        __int64 *a2)
{
  winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonArray>(a2, a1);
  return a1;
}
