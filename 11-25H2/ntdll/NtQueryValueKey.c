/*
 * XREFs of NtQueryValueKey @ 0x180163500
 * Callers:
 *     LdrpCodeAuthzInitialize @ 0x1800142A0 (LdrpCodeAuthzInitialize.c)
 *     ReadUlongFromKey @ 0x18003A014 (ReadUlongFromKey.c)
 *     _GetOverlayPackageTypeFromKey @ 0x18006C6E0 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x18006CBC4 (QueryRegistryValue.c)
 *     RtlGetPersistedStateLocation @ 0x180080A00 (RtlGetPersistedStateLocation.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x180083784 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800838D4 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x180083A7C (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x180085770 (RtlpQueryRegistryValues.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x180087AE0 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18008AAA4 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpLoadLanguageConfigList @ 0x18008C150 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x18008CC10 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800A7CAC (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLookupCurDirSetting @ 0x1800ABF84 (RtlpLookupCurDirSetting.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800B02A0 (RtlpQueryNlsSystemCodePages.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800B0AF0 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800B23BC (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800B31E4 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800B47FC (RtlpGetNtProductTypeFromRegistry.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E3980 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpQueryValueKey @ 0x1800EA0C0 (LdrpQueryValueKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800F1C7C (SaferpIsV2PolicyPresent.c)
 *     RtlpNtQueryValueKey @ 0x1800F5170 (RtlpNtQueryValueKey.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F8DC4 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     RtlpIsCustomLocale @ 0x1800F943C (RtlpIsCustomLocale.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180108B14 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlInitializeRXact @ 0x180108C20 (RtlInitializeRXact.c)
 *     RtlpGetUserLocaleName @ 0x180115BDC (RtlpGetUserLocaleName.c)
 *     RtlpLookupSafeCurDirList @ 0x1801175A0 (RtlpLookupSafeCurDirList.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180118F10 (LdrAppxHandleIntegrityFailure.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x18011A088 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlQueryRegistryValueWithFallback @ 0x180121CA0 (RtlQueryRegistryValueWithFallback.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180133340 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x18013610C (WerpEscalationReadUlongFromKey.c)
 *     RtlSetImageMitigationPolicy @ 0x1801385F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013FEA4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlOsDeploymentState @ 0x180148AD0 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180148C20 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014BD20 (_RtlpMuiRegPopulateBaseLanguages.c)
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
