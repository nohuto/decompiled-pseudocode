/*
 * XREFs of ZwQuerySystemInformation @ 0x1406A7A70
 * Callers:
 *     SmQuerySystemInformation @ 0x140375D70 (SmQuerySystemInformation.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1404956A4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     HvlpProcessIommu @ 0x1404CD7F4 (HvlpProcessIommu.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1404D18B8 (RtlpInitializeNonVolatileFlush.c)
 *     SmKmStoreTerminateWorker @ 0x14060C0E0 (SmKmStoreTerminateWorker.c)
 *     DifZwQuerySystemInformationWrapper @ 0x140644E70 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x140655FC0 (ExpInitExpCheckTestSigningInfo.c)
 *     HaliSetSystemInformation @ 0x140700414 (HaliSetSystemInformation.c)
 *     PiIsHVCIEnabled @ 0x1407227E4 (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x140732090 (PipKsrCallback.c)
 *     KsepGetLoadedModulesList @ 0x14073DFB0 (KsepGetLoadedModulesList.c)
 *     PopCheckTestsigningEnabled @ 0x140747620 (PopCheckTestsigningEnabled.c)
 *     PopInitializeHibernateGlobals @ 0x140750C3C (PopInitializeHibernateGlobals.c)
 *     PopValidateWinresume @ 0x1407511C8 (PopValidateWinresume.c)
 *     RtlLocalTimeToSystemTime @ 0x14077DB50 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1407B8770 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407B8870 (ExpCloudbookHardwareLockedProvider.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14080388C (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x14080C358 (AslEnvGetProcessWowInfo.c)
 *     BiGetAliasedIdentifier @ 0x1408129C8 (BiGetAliasedIdentifier.c)
 *     BiGetFirmwareType @ 0x140859BF0 (BiGetFirmwareType.c)
 *     PfpPrivSourceEnum @ 0x14085F9A0 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x140860034 (EtwpLogMemInfoWs.c)
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 *     PnpGetStableSystemBootTime @ 0x140981800 (PnpGetStableSystemBootTime.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x1409B9890 (EtwpTiQueryCodeIntegrityOptions.c)
 *     RtlQueryModuleInformation @ 0x140A1FAC0 (RtlQueryModuleInformation.c)
 *     SiGetFirmwareType @ 0x140A3A79C (SiGetFirmwareType.c)
 *     ExpFindDiskSignature @ 0x140A5C820 (ExpFindDiskSignature.c)
 *     SiQuerySystemInformationString @ 0x140A7AA58 (SiQuerySystemInformationString.c)
 *     RtlSystemTimeToLocalTime @ 0x140A90D40 (RtlSystemTimeToLocalTime.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140A9FAB8 (PspQueryComPlusRunUnderWoW.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140B5EEA4 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140BAF008 (HdlspAddLogEntry.c)
 *     PopCheckShutdownMarker @ 0x140C2F7D4 (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140C3BD28 (SepInitializeDebugOptions.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 *     PopInitPlatformSettings @ 0x140C69F98 (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemInformationClass);
}
