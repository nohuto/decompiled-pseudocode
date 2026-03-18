/*
 * XREFs of MmMapIoSpaceEx @ 0x140413F40
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x140413EF0 (MmMapIoSpace.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048FFC4 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x1404A0B28 (HalpReadGenericErrorInfo.c)
 *     HalInitializeBios @ 0x140539590 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053D1DC (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C488 (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpSignalRAS @ 0x140551F3C (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405569F4 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlPhase1Initialize @ 0x14057F2B0 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x140580B90 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x1405873BC (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14058C7A0 (BgkNotifyDisplayOwnershipLost.c)
 *     DifMmMapIoSpaceExWrapper @ 0x140627A90 (DifMmMapIoSpaceExWrapper.c)
 *     WmipFirmwareTableHandler @ 0x140640490 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x14067A330 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x14068CDB4 (BgpFwLibraryEnable.c)
 *     BgpFwMapFrameBuffer @ 0x14068CFD0 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x1406943DC (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x1406961E8 (InbvPortInitialize.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406F3F14 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 *     WmipFindSMBiosStructure @ 0x140794DA4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140794EC0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140794FB8 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1407954C8 (WmipParseSysIdTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407A4EF0 (ExpGetSystemPlatformBinary.c)
 *     WheapClearPoison @ 0x1407B859C (WheapClearPoison.c)
 *     MiZeroHotAddMemory @ 0x1407DA4D4 (MiZeroHotAddMemory.c)
 *     WmipGetSMBiosTableData @ 0x140A3D178 (WmipGetSMBiosTableData.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B3DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B3DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140B3E2D4 (HalpInitializeGenericErrorSource.c)
 *     PopGetHwConfigurationSignature @ 0x140B4CE34 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140B5E5F0 (HalpMapNvsArea.c)
 *     VerifierMmMapIoSpace @ 0x140B909B0 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140B90AB0 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140BFD554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140BFFB18 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140C02EC8 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C02FBC (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140C030B0 (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140C52860 (PipInitComputerIds.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
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
