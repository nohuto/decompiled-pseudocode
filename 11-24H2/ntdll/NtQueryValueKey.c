/*
 * XREFs of NtQueryValueKey @ 0x180160330
 * Callers:
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180004514 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpLookupCurDirSetting @ 0x180005AA0 (RtlpLookupCurDirSetting.c)
 *     RtlpQueryNlsSystemCodePages @ 0x180009BE0 (RtlpQueryNlsSystemCodePages.c)
 *     ReadUlongFromKey @ 0x18000A8A4 (ReadUlongFromKey.c)
 *     RtlpLoadLanguageConfigList @ 0x180014A40 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180015500 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 *     RtlGetPersistedStateLocation @ 0x180053020 (RtlGetPersistedStateLocation.c)
 *     LdrpCodeAuthzInitialize @ 0x18006E240 (LdrpCodeAuthzInitialize.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18007F5C0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18007FAA4 (QueryRegistryValue.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800818D4 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x180081A24 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180081BCC (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800829E0 (RtlpQueryRegistryValues.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18009976C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserLocaleName @ 0x180099D30 (RtlpGetUserLocaleName.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800A3620 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800A4EEC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlQueryImageFileKeyOption @ 0x1800A5610 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800A732C (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x1800C8B80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1800CB894 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     LdrpQueryValueKey @ 0x1800E4440 (LdrpQueryValueKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800EB04C (SaferpIsV2PolicyPresent.c)
 *     RtlpNtQueryValueKey @ 0x1800EDEF0 (RtlpNtQueryValueKey.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F16FC (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     RtlpIsCustomLocale @ 0x1800F2354 (RtlpIsCustomLocale.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180101134 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlInitializeRXact @ 0x180101240 (RtlInitializeRXact.c)
 *     RtlpLookupSafeCurDirList @ 0x18010F9B4 (RtlpLookupSafeCurDirList.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1801111B0 (LdrAppxHandleIntegrityFailure.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180111E30 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlQueryRegistryValueWithFallback @ 0x18011E600 (RtlQueryRegistryValueWithFallback.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x18012FA90 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x180132A8C (WerpEscalationReadUlongFromKey.c)
 *     RtlSetImageMitigationPolicy @ 0x1801350B0 (RtlSetImageMitigationPolicy.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013C964 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlOsDeploymentState @ 0x1801458D0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180145A20 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180148B20 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 23;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
