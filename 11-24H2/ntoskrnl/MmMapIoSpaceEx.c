/*
 * XREFs of MmMapIoSpaceEx @ 0x14034B090
 * Callers:
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 *     MmMapIoSpace @ 0x1404796E0 (MmMapIoSpace.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x140489B60 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpReadGenericErrorInfo @ 0x14049A8A8 (HalpReadGenericErrorInfo.c)
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     HalpMcaExtendedLogInitialize @ 0x14053D30C (HalpMcaExtendedLogInitialize.c)
 *     HalpDmaAllocateMapRegisterFrame @ 0x14054C72C (HalpDmaAllocateMapRegisterFrame.c)
 *     HalpSignalRAS @ 0x14055217C (HalpSignalRAS.c)
 *     HalpMmUpdateTiledMemoryMapTargetStub @ 0x140556F24 (HalpMmUpdateTiledMemoryMapTargetStub.c)
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 *     HvlpEnableNextLogicalProcessor @ 0x1405816C0 (HvlpEnableNextLogicalProcessor.c)
 *     HvlpInitializeHvCrashdump @ 0x140587D1C (HvlpInitializeHvCrashdump.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14058CFA0 (BgkNotifyDisplayOwnershipLost.c)
 *     DifMmMapIoSpaceExWrapper @ 0x140632010 (DifMmMapIoSpaceExWrapper.c)
 *     WmipFirmwareTableHandler @ 0x14064AAC0 (WmipFirmwareTableHandler.c)
 *     MiHugePageOperation @ 0x140686CF0 (MiHugePageOperation.c)
 *     BgpFwLibraryEnable @ 0x140699184 (BgpFwLibraryEnable.c)
 *     BgpFwMapFrameBuffer @ 0x1406993A0 (BgpFwMapFrameBuffer.c)
 *     IpmiHwKcsInit @ 0x1406A0880 (IpmiHwKcsInit.c)
 *     InbvPortInitialize @ 0x1406A2474 (InbvPortInitialize.c)
 *     HalpDmaCvmMakeContiguousVirtualBufferShared @ 0x1406FD944 (HalpDmaCvmMakeContiguousVirtualBufferShared.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1407A4284 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407A43A0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4498 (WmipGetSMBiosEventlog.c)
 *     WmipParseSysIdTable @ 0x1407A49A8 (WmipParseSysIdTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B4710 (ExpGetSystemPlatformBinary.c)
 *     WheapClearPoison @ 0x1407C820C (WheapClearPoison.c)
 *     MiZeroHotAddMemory @ 0x1407EA964 (MiZeroHotAddMemory.c)
 *     WmipGetSMBiosTableData @ 0x140A37918 (WmipGetSMBiosTableData.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4FD28 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4FF90 (HalpInitGenericErrorSourceEntryV2.c)
 *     HalpInitializeGenericErrorSource @ 0x140B50324 (HalpInitializeGenericErrorSource.c)
 *     PopGetHwConfigurationSignature @ 0x140B5EEA4 (PopGetHwConfigurationSignature.c)
 *     HalpMapNvsArea @ 0x140B6EF40 (HalpMapNvsArea.c)
 *     VerifierMmMapIoSpace @ 0x140BA2990 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapIoSpaceEx @ 0x140BA2A90 (VerifierMmMapIoSpaceEx.c)
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140C10554 (HalpPowerInitFwPerformanceTableMappings.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 *     HalpAuditEnumerateRsdts @ 0x140C15F58 (HalpAuditEnumerateRsdts.c)
 *     HalpAuditEnumerateRsdtsInRange @ 0x140C1604C (HalpAuditEnumerateRsdtsInRange.c)
 *     HalpAuditQuerySlicAddresses @ 0x140C16140 (HalpAuditQuerySlicAddresses.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 */

__int64 __fastcall MmMapIoSpaceEx(__int64 a1, __int64 a2, __int64 a3)
{
  int ProtectionMask; // eax
  int v4; // r10d
  int v5; // r11d

  ProtectionMask = MiMakeProtectionMask((unsigned int)a3, a2, a3);
  if ( (ProtectionMask & 2) != 0 && (ProtectionMask & 0xFFFFFFF8) == 0x18 && (ProtectionMask & 7) != 0 )
    return 0LL;
  else
    return MiMapContiguousMemory(v4, v5, v5, ProtectionMask, 0);
}
