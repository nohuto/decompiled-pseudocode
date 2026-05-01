/*
 * XREFs of ?Provider@RdpShellExtensionHostTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180674484
 * Callers:
 *     ??$RdpShellExtensionsProcessed@AEAIAEAIAEAI@RdpShellExtensionHostTelemetry@@SAXAEAI00@Z @ 0x180672F8C (--$RdpShellExtensionsProcessed@AEAIAEAIAEAI@RdpShellExtensionHostTelemetry@@SAXAEAI00@Z.c)
 *     _lambda_60eafd7a19afe8909bb8fbc758680c8d_::operator() @ 0x180673888 (_lambda_60eafd7a19afe8909bb8fbc758680c8d_--operator().c)
 *     _lambda_b57f95c0514f45b77712658c5381b8ec_::operator() @ 0x180673928 (_lambda_b57f95c0514f45b77712658c5381b8ec_--operator().c)
 *     ?CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180673C50 (-CreateRdpShellExtension@RdpShellExtensionHost@@IEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ @ 0x180673EBC (-ProcessAllRdpShellExtensions@RdpShellExtensionHost@@IEAAJXZ.c)
 *     ?subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x180674A30 (-subscribe_to_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 *     ?unsubscribe_from_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z @ 0x180674A80 (-unsubscribe_from_services@RdpShellExtensionHost@@UEAAXPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VRdpShellExtensionHostTelemetry@@@details@wil@@QEAAPEAVRdpShellExtensionHostTelemetry@@P6AXXZ@Z @ 0x1806748E0 (-get@-$static_lazy@VRdpShellExtensionHostTelemetry@@@details@wil@@QEAAPEAVRdpShellExtensionHostT.c)
 */

const struct _tlgProvider_t *__fastcall RdpShellExtensionHostTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<RdpShellExtensionHostTelemetry>::get(
                                             a1,
                                             _lambda_3cd2543f69658f6f3420ce7395415b24_::_lambda_invoker_cdecl_)
                                         + 8);
}
