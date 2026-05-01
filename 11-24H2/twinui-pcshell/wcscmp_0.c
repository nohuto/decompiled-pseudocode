/*
 * XREFs of wcscmp_0 @ 0x1806CA2C4
 * Callers:
 *     ?IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z @ 0x1800F394C (-IsCortanaAllowedOnSKU@CortanaAvailability@@YAJPEAE@Z.c)
 *     ??R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ @ 0x180127638 (--R_lambda_fe990823f78b875c41e1c4896de2e063_@@QEBA@XZ.c)
 *     ?IsWindowTabHostEnabledOnSKU@@YA_NXZ @ 0x180152ABC (-IsWindowTabHostEnabledOnSKU@@YA_NXZ.c)
 *     ?_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z @ 0x180196294 (-_AddLinkToCommands@CLauncherTipContextMenu@@AEAAXPEAUIShellItem2@@_NI@Z.c)
 *     ?ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18025B7B0 (-ControlGainedForActivation@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TY.c)
 *     ?SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025BF10 (-SubscribeToServices@CDesktopPositioner@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180275CF8 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1802835B0 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     ?TryGetForUriScheme@ProtocolLauncher@Utils@@SA?AV?$unique_ptr@VProtocolLauncher@Utils@@U?$default_delete@VProtocolLauncher@Utils@@@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@@Z @ 0x180284034 (-TryGetForUriScheme@ProtocolLauncher@Utils@@SA-AV-$unique_ptr@VProtocolLauncher@Utils@@U-$defaul.c)
 *     ?LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Windows@@@Z @ 0x180354290 (-LaunchUriWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUIUriRuntimeClass@Foundation@Wi.c)
 *     ??R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ @ 0x1803E0130 (--R_lambda_472df6ff52501759c6fbda191ba6be37_@@QEBA@XZ.c)
 *     ?EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ @ 0x180622EEC (-EnsureBrandedKeyMDMPoliciesApplied@CopilotButtonHelpers@@YAXXZ.c)
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180626A60 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180640918 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     _lambda_80c9c4321fda70fcbf4fd57f8d5fc182_::operator() @ 0x1806848D0 (_lambda_80c9c4321fda70fcbf4fd57f8d5fc182_--operator().c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcscmp_0(const wchar_t *String1, const wchar_t *String2)
{
  return wcscmp(String1, String2);
}
