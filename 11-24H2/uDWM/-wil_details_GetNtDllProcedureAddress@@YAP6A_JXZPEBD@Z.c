/*
 * XREFs of ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1800960A0
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180070958 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x180078DA0 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x180095FBC (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_NtQueryWnfStateData @ 0x180096028 (wil_details_NtQueryWnfStateData.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?UnregisterWilFeatureConfigurationChange@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18009A904 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-UnregisterWilFeatureConfigurationChange@.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x18009FCF0 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x18009FD40 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1800A10E4 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800A1144 (wil_details_NtUpdateWnfStateData.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x18008B6CC (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

FARPROC __fastcall wil_details_GetNtDllProcedureAddress(const char *a1)
{
  HMODULE NtDllModuleHandle; // rax

  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  return GetProcAddress(NtDllModuleHandle, a1);
}
