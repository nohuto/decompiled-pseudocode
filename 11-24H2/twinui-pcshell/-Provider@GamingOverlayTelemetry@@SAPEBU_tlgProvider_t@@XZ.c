/*
 * XREFs of ?Provider@GamingOverlayTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180298B7C
 * Callers:
 *     ??$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z @ 0x180298B08 (--$GamepadConnect@AEAUguid@winrt@@@GamingOverlayTelemetry@@SAXAEAUguid@winrt@@@Z.c)
 *     ??$BuildingLaunchForResultsUri@I@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAX$$QEAI@Z @ 0x18034112C (--$BuildingLaunchForResultsUri@I@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAX$$QE.c)
 *     ??$ReservedLaunchForResultsOperationId@AEAI@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXAEAI@Z @ 0x180342C34 (--$ReservedLaunchForResultsOperationId@AEAI@LaunchForResultsAsyncActivity@GamingOverlayTelemetry.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$04@@IEAA@XZ @ 0x1803479E0 (--1-$_TlgActivityBase@V-$ActivityData@VGamingOverlayTelemetry@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?BuiltLaunchForResultsUri@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXXZ @ 0x18034BBA8 (-BuiltLaunchForResultsUri@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXXZ.c)
 *     ?LaunchForResultsAcknowledged@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXXZ @ 0x18035282C (-LaunchForResultsAcknowledged@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXXZ.c)
 *     ?LaunchedGameBarForResults@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXXZ @ 0x18035487C (-LaunchedGameBarForResults@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180354AD0 (-NotifyFailure@-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18035ACE8 (-ShellView_DismissRequested@GamingOverlayTelemetry@@SAXXZ.c)
 *     ?ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ @ 0x18035AD14 (-ShellView_ShowRequested@GamingOverlayTelemetry@@SAXXZ.c)
 *     ?StartActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXPEBG@Z @ 0x18035AF38 (-StartActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035BD84 (-Stop@-$ActivityBase@VGamingOverlayTelemetry@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StopActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@MEAAXXZ @ 0x18035C220 (-StopActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@MEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ@Z @ 0x180298B9C (-get@-$static_lazy@VGamingOverlayTelemetry@@@details@wil@@QEAAPEAVGamingOverlayTelemetry@@P6AXXZ.c)
 */

const struct _tlgProvider_t *__fastcall GamingOverlayTelemetry::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<GamingOverlayTelemetry>::get(
                                             a1,
                                             _lambda_8eb181b840f08d5270baf7b0794c9c9c_::_lambda_invoker_cdecl_)
                                         + 8);
}
