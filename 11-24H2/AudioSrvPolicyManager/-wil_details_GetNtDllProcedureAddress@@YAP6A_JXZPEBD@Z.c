/*
 * XREFs of ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180027048
 * Callers:
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x180025650 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x1800256A0 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x1800272E4 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x1800273FC (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800274C0 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180027538 (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x180027710 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x18002777C (wil_details_RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ?wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180027010 (-wil_details_GetNtDllModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 */

FARPROC __fastcall wil_details_GetNtDllProcedureAddress(const char *a1)
{
  HMODULE NtDllModuleHandle; // rax

  NtDllModuleHandle = wil_details_GetNtDllModuleHandle();
  return GetProcAddress(NtDllModuleHandle, a1);
}
