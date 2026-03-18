/*
 * XREFs of RtlStringCbPrintfW @ 0x14040BC90
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14040B494 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140722CD0 (PipServiceInstanceToDeviceInstance.c)
 *     PpmWmiRegisterInfo @ 0x14075C284 (PpmWmiRegisterInfo.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1407640C0 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14076412C (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     SepSetSystemPaths @ 0x14078EA40 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x140795638 (SepReadAndPopulateCapes.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407A6948 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407A6C78 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407A7B6C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A8468 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A8694 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A8F64 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AEE98 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x1407C9F90 (CmpCreatePerfKeys.c)
 *     SiGetEfiSystemDevice @ 0x140816348 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408167A0 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x14082F62C (LkmdTelCreateReport.c)
 *     EtwpAccessCheckFromState @ 0x140839BF8 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140839D68 (EtwpGetSecurityDescriptorByGuid.c)
 *     PfSnOperationProcess @ 0x140963294 (PfSnOperationProcess.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14096BF6C (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     WmipSecurityMethod @ 0x1409A6000 (WmipSecurityMethod.c)
 *     IopGetLegacyVetoListDrivers @ 0x1409B9634 (IopGetLegacyVetoListDrivers.c)
 *     PiNormalizeDeviceText @ 0x1409C8004 (PiNormalizeDeviceText.c)
 *     WmipIncludeStaticNames @ 0x1409CB50C (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x1409CE570 (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D8F3C (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x1409DB494 (EtwpExpandFileName.c)
 *     EtwpCreateNtFileName @ 0x1409DB87C (EtwpCreateNtFileName.c)
 *     ExProcessorCounterSetCallback @ 0x1409DD2F0 (ExProcessorCounterSetCallback.c)
 *     MiCreateSectionForDriver @ 0x140A1882C (MiCreateSectionForDriver.c)
 *     KiSynchCounterSetCallback @ 0x140A4A660 (KiSynchCounterSetCallback.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A4F688 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A68158 (PiBuildDeviceNodeInstancePath.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A70350 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A79EF0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A7A638 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140A7AE98 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A7B268 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGenerateFileName @ 0x140A7F9B8 (EtwpGenerateFileName.c)
 *     PnpUnloadAttachedDriver @ 0x140A90E60 (PnpUnloadAttachedDriver.c)
 *     MiCacheImageSymbols @ 0x140ABFD60 (MiCacheImageSymbols.c)
 *     CreateSystemRootLink @ 0x140C0A3F8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140C0BCB0 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140C33028 (PoFxRegisterDebugger.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C3E488 (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdInitialize @ 0x140C5D2CC (VhdInitialize.c)
 *     VhdiGetVolumeNumber @ 0x140C5D730 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C5D8B0 (VhdiInitializeBootDisk.c)
 *     CimfsInitialize @ 0x140C5DD6C (CimfsInitialize.c)
 *     CimfsInitializeBootDisk @ 0x140C5E0F0 (CimfsInitializeBootDisk.c)
 *     RamdiskCreateSymbolicLink @ 0x140C5E4D8 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FD260 (_vsnwprintf.c)
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rsi
  NTSTATUS v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147483643;
    }
    else if ( v7 != v5 )
    {
      return v6;
    }
    pszDest[v5] = 0;
    return v6;
  }
  v6 = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return v6;
}
