/*
 * XREFs of NtOpenKey @ 0x180163460
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlOpenCurrentUser @ 0x18005D890 (RtlOpenCurrentUser.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18006C1FC (_GetOverlayPackageKeyForLanguage.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180083784 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180083A7C (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x180088B20 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18008A784 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18008BBB8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLookupCurDirSetting @ 0x1800ABF84 (RtlpLookupCurDirSetting.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B02A0 (RtlpQueryNlsSystemCodePages.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800B094C (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800B0AF0 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800B23BC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800B2E60 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800B31E4 (RtlpProcessIFEOKeyFilter.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800B3634 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800B4124 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800B47FC (RtlpGetNtProductTypeFromRegistry.c)
 *     WerpGlobalFlagsForProcess @ 0x1800CFC84 (WerpGlobalFlagsForProcess.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E06DC (WerpEscalationIsWMRSendStringSet.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E3980 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpOpenKey @ 0x1800EBDC0 (LdrpOpenKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800F1C7C (SaferpIsV2PolicyPresent.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F8D08 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpGetCustomCultureRegKey @ 0x1800F9514 (RtlpGetCustomCultureRegKey.c)
 *     RtlpNtOpenKey @ 0x1800FAFF0 (RtlpNtOpenKey.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180108B14 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RXactpCommit @ 0x180109178 (RXactpCommit.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180109580 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpOpenSystemSessionKey @ 0x180115410 (RtlpOpenSystemSessionKey.c)
 *     RtlpGetLocaleDataKey @ 0x180115CC0 (RtlpGetLocaleDataKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1801175A0 (RtlpLookupSafeCurDirList.c)
 *     WerpEscalationIsDisabled @ 0x180118198 (WerpEscalationIsDisabled.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x18011A088 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801397E8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlOsDeploymentState @ 0x180148AD0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180148C20 (RtlQueryValidationRunlevel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 18;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
