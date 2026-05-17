/*
 * XREFs of NtQueryValueKey @ 0x180161F70
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x180026620 (RtlGetPersistedStateLocation.c)
 *     RtlpLoadLanguageConfigList @ 0x1800347C0 (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180035280 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     LdrpCodeAuthzInitialize @ 0x180058660 (LdrpCodeAuthzInitialize.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18007EF80 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180080044 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180082694 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpLookupCurDirSetting @ 0x180083BF4 (RtlpLookupCurDirSetting.c)
 *     RtlQueryImageMitigationPolicy @ 0x180087B60 (RtlQueryImageMitigationPolicy.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x18008942C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18008A254 (RtlpProcessIFEOKeyFilter.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x18008B86C (RtlpGetNtProductTypeFromRegistry.c)
 *     ReadUlongFromKey @ 0x1800AB1D4 (ReadUlongFromKey.c)
 *     RtlpQueryNlsSystemCodePages @ 0x1800ACB90 (RtlpQueryNlsSystemCodePages.c)
 *     _GetOverlayPackageTypeFromKey @ 0x1800B2D20 (_GetOverlayPackageTypeFromKey.c)
 *     QueryRegistryValue @ 0x1800B3204 (QueryRegistryValue.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpGetCpuSpeedFromRegistry @ 0x1800B5034 (EtwpGetCpuSpeedFromRegistry.c)
 *     EtwpQueryRegString @ 0x1800B5184 (EtwpQueryRegString.c)
 *     EtwpGetRegDwordValue @ 0x1800B532C (EtwpGetRegDwordValue.c)
 *     RtlpQueryRegistryValues @ 0x1800B6140 (RtlpQueryRegistryValues.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1800D1784 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpGetUserLocaleName @ 0x1800D2DDC (RtlpGetUserLocaleName.c)
 *     LdrpQueryValueKey @ 0x1800E8D50 (LdrpQueryValueKey.c)
 *     SaferpIsV2PolicyPresent @ 0x1800F03CC (SaferpIsV2PolicyPresent.c)
 *     RtlpNtQueryValueKey @ 0x1800F3600 (RtlpNtQueryValueKey.c)
 *     LdrpInitializeSmtDelayedSleepQueryRegistry @ 0x1800F7164 (LdrpInitializeSmtDelayedSleepQueryRegistry.c)
 *     RtlpIsCustomLocale @ 0x1800F77DC (RtlpIsCustomLocale.c)
 *     RtlpHpApplySegmentHeapConfigurations @ 0x180106204 (RtlpHpApplySegmentHeapConfigurations.c)
 *     RtlInitializeRXact @ 0x180106310 (RtlInitializeRXact.c)
 *     RtlpLookupSafeCurDirList @ 0x1801146A8 (RtlpLookupSafeCurDirList.c)
 *     LdrAppxHandleIntegrityFailure @ 0x180115D20 (LdrAppxHandleIntegrityFailure.c)
 *     RtlpAreLegacyDosDeviceNamesEnabled @ 0x180116E44 (RtlpAreLegacyDosDeviceNamesEnabled.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1801203D0 (RtlQueryRegistryValueWithFallback.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x180131860 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     WerpEscalationReadUlongFromKey @ 0x18013485C (WerpEscalationReadUlongFromKey.c)
 *     RtlSetImageMitigationPolicy @ 0x180136E80 (RtlSetImageMitigationPolicy.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18013E774 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlOsDeploymentState @ 0x180147520 (RtlOsDeploymentState.c)
 *     RtlQueryValidationRunlevel @ 0x180147670 (RtlQueryValidationRunlevel.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014A770 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryValueKey()
{
  __int64 result; // rax

  result = 23LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
