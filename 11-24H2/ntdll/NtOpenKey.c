/*
 * XREFs of NtOpenKey @ 0x180160290
 * Callers:
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180004514 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpLookupCurDirSetting @ 0x180005AA0 (RtlpLookupCurDirSetting.c)
 *     RtlpQueryNlsSystemCodePages @ 0x180009BE0 (RtlpQueryNlsSystemCodePages.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18000A5E0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180011648 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlOpenCurrentUser @ 0x180017270 (RtlOpenCurrentUser.c)
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     _GetOverlayPackageKeyForLanguage @ 0x18007F0DC (_GetOverlayPackageKeyForLanguage.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800818D4 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180081BCC (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800829E0 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x180083108 (RtlpGetRegistryHandle.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetLocaleDataKey @ 0x18009A4D4 (RtlpGetLocaleDataKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800A3478 (RtlOpenModernAppOptionsKey.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A3620 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeExecutionOptions @ 0x1800A4268 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800A4EEC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlpOpenBaseImageFileOptionsKey @ 0x1800A5990 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800A5A48 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800A6164 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlpOpenBaseImageFileOptionsKeyEx @ 0x1800A6C54 (RtlpOpenBaseImageFileOptionsKeyEx.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A732C (RtlpGetNtProductTypeFromRegistry.c)
 *     WerpGlobalFlagsForProcess @ 0x1800AC868 (WerpGlobalFlagsForProcess.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadUserUIByPolicy @ 0x1800C9BA0 (RtlpLoadUserUIByPolicy.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1800CBBD4 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     WerpEscalationIsWMRSendStringSet @ 0x1800DEFFC (WerpEscalationIsWMRSendStringSet.c)
 *     LdrpOpenKey @ 0x1800E61E0 (LdrpOpenKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800EB04C (SaferpIsV2PolicyPresent.c)
 *     LdrpInitializeSmtDelayedSleep @ 0x1800F1640 (LdrpInitializeSmtDelayedSleep.c)
 *     RtlpGetCustomCultureRegKey @ 0x1800F242C (RtlpGetCustomCultureRegKey.c)
 *     RtlpNtOpenKey @ 0x1800F3FA0 (RtlpNtOpenKey.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180101134 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RXactpCommit @ 0x180101798 (RXactpCommit.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180101BA0 (RtlpLoadMachineUIByPolicy.c)
 *     RtlpOpenSystemSessionKey @ 0x18010D780 (RtlpOpenSystemSessionKey.c)
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 *     WerpEscalationIsDisabled @ 0x180110668 (WerpEscalationIsDisabled.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180111E30 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1801362A8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013C964 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlOsDeploymentState @ 0x1801458D0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180145A20 (RtlQueryValidationRunlevel.c)
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
