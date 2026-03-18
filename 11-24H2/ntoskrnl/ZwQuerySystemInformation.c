/*
 * XREFs of ZwQuerySystemInformation @ 0x1406A6AD0
 * Callers:
 *     SmQuerySystemInformation @ 0x14044AA18 (SmQuerySystemInformation.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x14049ACB4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     HvlpProcessIommu @ 0x1404D45E4 (HvlpProcessIommu.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpInitializeNonVolatileFlush @ 0x1404D8468 (RtlpInitializeNonVolatileFlush.c)
 *     SmKmStoreTerminateWorker @ 0x14060DB20 (SmKmStoreTerminateWorker.c)
 *     DifZwQuerySystemInformationWrapper @ 0x1406468B0 (DifZwQuerySystemInformationWrapper.c)
 *     ExpInitExpCheckTestSigningInfo @ 0x1406578C0 (ExpInitExpCheckTestSigningInfo.c)
 *     HaliSetSystemInformation @ 0x1407027D4 (HaliSetSystemInformation.c)
 *     PiIsHVCIEnabled @ 0x140724C54 (PiIsHVCIEnabled.c)
 *     PipKsrCallback @ 0x140734160 (PipKsrCallback.c)
 *     KsepGetLoadedModulesList @ 0x140740080 (KsepGetLoadedModulesList.c)
 *     PopCheckTestsigningEnabled @ 0x1407492F4 (PopCheckTestsigningEnabled.c)
 *     PopInitializeHibernateGlobals @ 0x14075291C (PopInitializeHibernateGlobals.c)
 *     PopValidateWinresume @ 0x140752EA8 (PopValidateWinresume.c)
 *     RtlLocalTimeToSystemTime @ 0x14077DC20 (RtlLocalTimeToSystemTime.c)
 *     ExpCloudbookHardwareIDProvider @ 0x1407B8320 (ExpCloudbookHardwareIDProvider.c)
 *     ExpCloudbookHardwareLockedProvider @ 0x1407B8420 (ExpCloudbookHardwareLockedProvider.c)
 *     SdbpCheckMatchingRegistryEntry @ 0x14080314C (SdbpCheckMatchingRegistryEntry.c)
 *     AslEnvGetProcessWowInfo @ 0x14080BC18 (AslEnvGetProcessWowInfo.c)
 *     BiGetAliasedIdentifier @ 0x140812288 (BiGetAliasedIdentifier.c)
 *     BiGetFirmwareType @ 0x14085DE80 (BiGetFirmwareType.c)
 *     PfpPrivSourceEnum @ 0x1408EE170 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x1408EE804 (EtwpLogMemInfoWs.c)
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 *     PnpGetStableSystemBootTime @ 0x1409C5988 (PnpGetStableSystemBootTime.c)
 *     RtlQueryModuleInformation @ 0x140A2BC00 (RtlQueryModuleInformation.c)
 *     SiGetFirmwareType @ 0x140A44E6C (SiGetFirmwareType.c)
 *     ExpFindDiskSignature @ 0x140A63F20 (ExpFindDiskSignature.c)
 *     SiQuerySystemInformationString @ 0x140A7FFF8 (SiQuerySystemInformationString.c)
 *     EtwpTiQueryCodeIntegrityOptions @ 0x140A818C0 (EtwpTiQueryCodeIntegrityOptions.c)
 *     RtlSystemTimeToLocalTime @ 0x140A94590 (RtlSystemTimeToLocalTime.c)
 *     PspQueryComPlusRunUnderWoW @ 0x140AA4728 (PspQueryComPlusRunUnderWoW.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     PopGetHwConfigurationSignature @ 0x140B5CE34 (PopGetHwConfigurationSignature.c)
 *     HdlspAddLogEntry @ 0x140BAD008 (HdlspAddLogEntry.c)
 *     PopCheckShutdownMarker @ 0x140C2D6B4 (PopCheckShutdownMarker.c)
 *     SepInitializeDebugOptions @ 0x140C39BD0 (SepInitializeDebugOptions.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 *     PopInitPlatformSettings @ 0x140C67E1C (PopInitPlatformSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
