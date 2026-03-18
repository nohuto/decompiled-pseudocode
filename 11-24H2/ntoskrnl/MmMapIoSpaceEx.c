/*
 * XREFs of MmMapIoSpaceEx @ 0x1402E9A50
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x140264C3C (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x1404789A4 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x14047E7E0 (MmMapIoSpace.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048F950 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404A0228 (HalpReadGenericErrorInfo.c)
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053FA0C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054EDEC (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpSignalRAS @ 0x14055483C (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405592F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140584340 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x14058AA2C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14058FF80 (BgkNotifyDisplayOwnershipLost.c)
 *     DifMmMapIoSpaceExWrapper @ 0x140633A50 (DifMmMapIoSpaceExWrapper.c)
 *     WmipFirmwareTableHandler @ 0x14064C4B0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140685BC0 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x140698104 (BgpFwLibraryEnable.c)
 *     BgpFwMapFrameBuffer @ 0x140698320 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x14069F77C (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x1406A141C (InbvPortInitialize.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406FFD04 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1407A4174 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407A4290 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4388 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1407A4898 (WmipParseSysIdTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B42C0 (ExpGetSystemPlatformBinary.c)
 *     WheapClearPoison @ 0x1407C7D6C (WheapClearPoison.c)
 *     MiZeroHotAddMemory @ 0x1407EA394 (MiZeroHotAddMemory.c)
 *     WmipGetSMBiosTableData @ 0x140A42038 (WmipGetSMBiosTableData.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140B4E2D4 (HalpInitializeGenericErrorSource.c)
 *     PopGetHwConfigurationSignature @ 0x140B5CE34 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140B6D6A0 (HalpMapNvsArea.c)
 *     VerifierMmMapIoSpace @ 0x140BA0990 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140BA0A90 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C0E554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C10B98 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140C13F58 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1404C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140C14140 (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x1402EAF70 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, unsigned int a3)
{
  int ProtectionMask; // eax
  int v4; // r10d
  int v5; // r11d

  ProtectionMask = MiMakeProtectionMask(a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, v5, ProtectionMask, 0);
}
