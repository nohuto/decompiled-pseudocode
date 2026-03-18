/*
 * XREFs of RtlStringCbPrintfW @ 0x140404520
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140403D20 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140716BD0 (PipServiceInstanceToDeviceInstance.c)
 *     PpmWmiRegisterInfo @ 0x14074FA04 (PpmWmiRegisterInfo.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x140754600 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14075466C (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 *     SepSetSystemPaths @ 0x14077F780 (SepSetSystemPaths.c)
 *     SepReadAndPopulateCapes @ 0x140786268 (SepReadAndPopulateCapes.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x140797578 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1407978A8 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x14079879C (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140799098 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1407992C4 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140799B94 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079FAC8 (EtwpEnumerateAutologgerPath.c)
 *     CmpCreatePerfKeys @ 0x1407BA790 (CmpCreatePerfKeys.c)
 *     SiGetEfiSystemDevice @ 0x140806448 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408068A0 (SiGetEspFromFirmware.c)
 *     LkmdTelCreateReport @ 0x14081F8EC (LkmdTelCreateReport.c)
 *     PfSnOperationProcess @ 0x1408288CC (PfSnOperationProcess.c)
 *     EtwpAccessCheckFromState @ 0x14089A6E0 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x14089A850 (EtwpGetSecurityDescriptorByGuid.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1408ECD5C (PfSnOpenVolumesForPrefetch.c)
 *     IopGetLegacyVetoListDrivers @ 0x140914FDC (IopGetLegacyVetoListDrivers.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 *     EtwpRealtimeCreateLogfile @ 0x140990098 (EtwpRealtimeCreateLogfile.c)
 *     EtwpExpandFileName @ 0x1409925EC (EtwpExpandFileName.c)
 *     EtwpCreateNtFileName @ 0x1409929D4 (EtwpCreateNtFileName.c)
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 *     PiNormalizeDeviceText @ 0x1409AFC94 (PiNormalizeDeviceText.c)
 *     WmipIncludeStaticNames @ 0x1409B318C (WmipIncludeStaticNames.c)
 *     WmipInsertStaticNames @ 0x1409B622C (WmipInsertStaticNames.c)
 *     WmipPrepareWnodeSI @ 0x1409B6860 (WmipPrepareWnodeSI.c)
 *     ExProcessorCounterSetCallback @ 0x1409FB640 (ExProcessorCounterSetCallback.c)
 *     MiCreateSectionForDriver @ 0x140A1340C (MiCreateSectionForDriver.c)
 *     KiSynchCounterSetCallback @ 0x140A47490 (KiSynchCounterSetCallback.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x140A50714 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     PipMakeGloballyUniqueId @ 0x140A5491C (PipMakeGloballyUniqueId.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140A634F0 (PiBuildDeviceNodeInstancePath.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140A6E140 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140A78080 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140A787C8 (EtwpGetAutoLoggerProviderFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x140A79028 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x140A793F8 (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGenerateFileName @ 0x140A7C3A0 (EtwpGenerateFileName.c)
 *     PnpUnloadAttachedDriver @ 0x140A8BD5C (PnpUnloadAttachedDriver.c)
 *     MiCacheImageSymbols @ 0x140ABB930 (MiCacheImageSymbols.c)
 *     CreateSystemRootLink @ 0x140BF93F8 (CreateSystemRootLink.c)
 *     MfgInitSystem @ 0x140BFACB0 (MfgInitSystem.c)
 *     PoFxRegisterDebugger @ 0x140C21F30 (PoFxRegisterDebugger.c)
 *     EtwpEnableBootLoggerRegistryProviders @ 0x140C2D1AC (EtwpEnableBootLoggerRegistryProviders.c)
 *     VhdInitialize @ 0x140C4BF5C (VhdInitialize.c)
 *     VhdiGetVolumeNumber @ 0x140C4C3B4 (VhdiGetVolumeNumber.c)
 *     VhdiInitializeBootDisk @ 0x140C4C530 (VhdiInitializeBootDisk.c)
 *     CimfsInitialize @ 0x140C4C9EC (CimfsInitialize.c)
 *     CimfsInitializeBootDisk @ 0x140C4CD70 (CimfsInitializeBootDisk.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     _vsnwprintf @ 0x1404FAAE0 (_vsnwprintf.c)
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
