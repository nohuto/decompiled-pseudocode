/*
 * XREFs of ??R_lambda_949de2b926fa2a3cc50f06471a2a2214_@@QEBA@AEBUIDeviceInformationStatics@Enumeration@Devices@Windows@winrt@@@Z @ 0x180619120
 * Callers:
 *     ??$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@?$factory_cache_entry@UDeviceInformation@Enumeration@Devices@Windows@winrt@@UIDeviceInformationStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@Z @ 0x180617B08 (--$call@AEAV_lambda_949de2b926fa2a3cc50f06471a2a2214_@@@-$factory_cache_entry@UDeviceInformation.c)
 *     _lambda_aa297103944b40500ac49b04ee807ad8_::operator() @ 0x180619148 (_lambda_aa297103944b40500ac49b04ee807ad8_--operator().c)
 * Callees:
 *     ?CreateExpressionAnimation@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1804A675C (-CreateExpressionAnimation@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition.c)
 */

_QWORD *__fastcall _lambda_949de2b926fa2a3cc50f06471a2a2214_::operator()(__int64 **a1, _QWORD *a2, __int64 **a3)
{
  winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreateExpressionAnimation(
    a3,
    a2,
    *a1);
  return a2;
}
