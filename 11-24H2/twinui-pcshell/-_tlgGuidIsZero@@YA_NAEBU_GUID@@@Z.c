/*
 * XREFs of ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800B6C98
 * Callers:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x1801FEF90 (-zInternalRelatedId@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z @ 0x1802A25EC (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBGHI@Z.c)
 *     ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18033413C (-StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z.c)
 *     ??$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@Z @ 0x1803395BC (--$StartActivity@K@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBGK@.c)
 *     ??$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG0@Z @ 0x180339684 (--$StartActivity@PEBG@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEB.c)
 *     ??$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_N@Z @ 0x18033974C (--$StartActivity@_N@SetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG_.c)
 *     ?StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z @ 0x18033B7E0 (-StartActivity@GetConfigurationValueActivity@GamingPostureCoreTelemetryProvider@@QEAAXPEBG@Z.c)
 *     ?StartActivity@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAXPEBGU_GUID@@_N@Z @ 0x18033F2F8 (-StartActivity@SystemDialogActivity@GamingPostureUXTelemetryProvider@@QEAAXPEBGU_GUID@@_N@Z.c)
 *     ?StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z @ 0x18035AE0C (-StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z.c)
 *     ?StartActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXPEBG@Z @ 0x18035AF38 (-StartActivity@LaunchForResultsAsyncActivity@GamingOverlayTelemetry@@QEAAXPEBG@Z.c)
 *     ?StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803C01D8 (-StartActivity@UndockedSearchExperienceManager_TrySetWebSearchEnabledStateOnUpdate@SearchAppExpe.c)
 *     ?StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG@Z @ 0x180466C70 (-StartActivity@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXW4Mode@LauncherTelemetry@@IPEBG.c)
 *     ?StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ @ 0x1806A11E8 (-StartActivity@CreateGamingTaskViewControl@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z @ 0x1806A1280 (-StartActivity@ShowGamingTaskView@XamlSwitcherTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall _tlgGuidIsZero(const struct _GUID *a1)
{
  char result; // al

  result = 0;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && !*(_DWORD *)a1->Data4 && !*(_DWORD *)&a1->Data4[4] )
    return 1;
  return result;
}
