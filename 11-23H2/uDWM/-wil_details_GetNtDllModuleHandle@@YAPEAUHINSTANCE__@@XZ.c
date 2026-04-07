/*
 * XREFs of ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18001F680
 * Callers:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x18001F5A0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z @ 0x18001F600 (-RtlDisownModuleHeapAllocation@details@wil@@YAJPEAX0@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18005E8D8 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x18005EA04 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x18005EAF8 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18005EB8C (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x18005ED84 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18009A658 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 *     ?FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z @ 0x18009B130 (-FormatNtStatusMsg@details@wil@@YAXJPEAGK@Z.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18009D280 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 * Callees:
 *     <none>
 */

HINSTANCE wil_details_GetNtDllModuleHandle(void)
{
  HINSTANCE result; // rax

  result = g_wil_details_ntdllModuleHandle;
  if ( !g_wil_details_ntdllModuleHandle )
  {
    result = GetModuleHandleW(L"ntdll.dll");
    g_wil_details_ntdllModuleHandle = result;
  }
  return result;
}
