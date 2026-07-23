/*
 * XREFs of RtlStringCbPrintfW @ 0x140404170
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403974 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140720860 (PipServiceInstanceToDeviceInstance.c)
 *     PpmWmiRegisterInfo @ 0x14075B2B4 (PpmWmiRegisterInfo.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x140763A90 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x140763AFC (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     SepSetSystemPaths @ 0x14078E970 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x140795748 (SepReadAndPopulateCapes.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1407A6A88 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407A6DB8 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1407A7CAC (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407A85A8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407A87D4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1407A90A4 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407AF2E8 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x1407CA480 (CmpCreatePerfKeys.c)
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140816EE0 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x14082FE24 (LkmdTelCreateReport.c)
 *     EtwpAccessCheckFromState @ 0x140836E70 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140836FE0 (EtwpGetSecurityDescriptorByGuid.c)
 *     PfSnOperationProcess @ 0x14094AD54 (PfSnOperationProcess.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1409549CC (PfSnOpenVolumesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 *     WmipSecurityMethod @ 0x140989620 (WmipSecurityMethod.c)
 *     IopGetLegacyVetoListDrivers @ 0x14099FC84 (IopGetLegacyVetoListDrivers.c)
 *     WmipIncludeStaticNames @ 0x1409B1C2C (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x1409B3544 (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 *     PiNormalizeDeviceText @ 0x1409B8420 (PiNormalizeDeviceText.c)
 *     EtwpRealtimeCreateLogfile @ 0x1409D3A4C (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x1409D5FA4 (EtwpExpandFileName.c)
 *     EtwpCreateNtFileName @ 0x1409D638C (EtwpCreateNtFileName.c)
 *     EtwpGenerateFileName @ 0x1409D6D84 (EtwpGenerateFileName.c)
 *     ExProcessorCounterSetCallback @ 0x1409D6EC0 (ExProcessorCounterSetCallback.c)
 *     MiCreateSectionForDriver @ 0x140A1199C (MiCreateSectionForDriver.c)
 *     KiSynchCounterSetCallback @ 0x140A41380 (KiSynchCounterSetCallback.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A46438 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PipMakeGloballyUniqueId @ 0x140A4FA70 (PipMakeGloballyUniqueId.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A61658 (PiBuildDeviceNodeInstancePath.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A697E0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A741F0 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A74938 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140A75198 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A75568 (EtwpGetAutoLoggerEventNameFilter.c)
 *     PnpUnloadAttachedDriver @ 0x140A8D55C (PnpUnloadAttachedDriver.c)
 *     MiCacheImageSymbols @ 0x140ABAE40 (MiCacheImageSymbols.c)
 *     CreateSystemRootLink @ 0x140C0C3F8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140C0DCB0 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140C35168 (PoFxRegisterDebugger.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C405D8 (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdInitialize @ 0x140C5F424 (VhdInitialize.c)
 *     VhdiGetVolumeNumber @ 0x140C5F888 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C5FA00 (VhdiInitializeBootDisk.c)
 *     CimfsInitialize @ 0x140C5FEBC (CimfsInitialize.c)
 *     CimfsInitializeBootDisk @ 0x140C60240 (CimfsInitializeBootDisk.c)
 *     RamdiskCreateSymbolicLink @ 0x140C60628 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAB20 (_vsnwprintf.c)
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
