/*
 * XREFs of NtOpenKey @ 0x180161ED0
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800020A0 (WerpGlobalFlagsForProcess.c)
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlOpenCurrentUser @ 0x180036FF0 (RtlOpenCurrentUser.c)
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18007CD08 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x18007FDF0 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180080384 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180082694 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpLookupCurDirSetting @ 0x180083BF4 (RtlpLookupCurDirSetting.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800879B4 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x180087B60 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x18008942C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x180089ED0 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x18008A6A4 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x18008B194 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B86C (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800AAF10 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800ACB90 (RtlpQueryNlsSystemCodePages.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x1800B283C (_GetOverlayPackageKeyForLanguage.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800B5034 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x1800B532C (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetLocaleDataKey @ 0x1800D313C (RtlpGetLocaleDataKey.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800E3A2C (WerpEscalationIsWMRSendStringSet.c)
 *     LdrpOpenKey @ 0x1800EA970 (LdrpOpenKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800F03CC (SaferpIsV2PolicyPresent.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F70A8 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpGetCustomCultureRegKey @ 0x1800F78B4 (RtlpGetCustomCultureRegKey.c)
 *     RtlpNtOpenKey @ 0x1800F93D0 (RtlpNtOpenKey.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180106204 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RXactpCommit @ 0x180106868 (RXactpCommit.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180106C70 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpOpenSystemSessionKey @ 0x180112310 (RtlpOpenSystemSessionKey.c)
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 *     WerpEscalationIsDisabled @ 0x180115298 (WerpEscalationIsDisabled.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180116E44 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180138078 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013E774 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlOsDeploymentState @ 0x180147520 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180147670 (RtlQueryValidationRunlevel.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenKey()
{
  __int64 result; // rax

  result = 18LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
