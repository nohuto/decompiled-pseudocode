/*
 * XREFs of RaidDriverGetName @ 0x14003E03C
 * Callers:
 *     RaidPnPPassToMiniPort @ 0x140010ED8 (RaidPnPPassToMiniPort.c)
 *     StorReset @ 0x140040430 (StorReset.c)
 *     StorEtwMiniportLogError @ 0x140042658 (StorEtwMiniportLogError.c)
 *     RaidCaptureLiveDump @ 0x140042C58 (RaidCaptureLiveDump.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     RaidAdapterCreateDevmapEntry @ 0x1400554BC (RaidAdapterCreateDevmapEntry.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x14005A5E4 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     StorLogMFNDCapability @ 0x140066C1C (StorLogMFNDCapability.c)
 *     StorLogMFNDChildPFControl @ 0x140066F1C (StorLogMFNDChildPFControl.c)
 *     StorLogMFNDNSPageMapControl @ 0x1400670F4 (StorLogMFNDNSPageMapControl.c)
 *     StorLogMFNDNameSpaceRead @ 0x140067354 (StorLogMFNDNameSpaceRead.c)
 *     StorLogMFNDNameSpaceWrite @ 0x14006760C (StorLogMFNDNameSpaceWrite.c)
 *     StorLogMFNDReconfigure @ 0x1400678D8 (StorLogMFNDReconfigure.c)
 *     StorLogRegisterMFNDInterface @ 0x140067AC0 (StorLogRegisterMFNDInterface.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x14006A2CC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     RaidRequestDIrpForAssociatedUnits @ 0x1400787A8 (RaidRequestDIrpForAssociatedUnits.c)
 *     RaidAdapterStorageTcgActivateLocking @ 0x14007B66C (RaidAdapterStorageTcgActivateLocking.c)
 *     RaidAdapterStorageTcgAssignLockingObject @ 0x14007BBD0 (RaidAdapterStorageTcgAssignLockingObject.c)
 *     RaidAdapterStorageTcgDeassignLockingObject @ 0x14007C21C (RaidAdapterStorageTcgDeassignLockingObject.c)
 *     RaidAdapterStorageTcgEnumerateLockingObjects @ 0x14007C7A8 (RaidAdapterStorageTcgEnumerateLockingObjects.c)
 *     RaidAdapterStorageTcgEraseLockingObject @ 0x14007CDC0 (RaidAdapterStorageTcgEraseLockingObject.c)
 *     RaidAdapterStorageTcgGetLockingObjectMetadata @ 0x14007D338 (RaidAdapterStorageTcgGetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgQueryCapability @ 0x14007D928 (RaidAdapterStorageTcgQueryCapability.c)
 *     RaidAdapterStorageTcgResetState @ 0x14007DE48 (RaidAdapterStorageTcgResetState.c)
 *     RaidAdapterStorageTcgRevertConfig @ 0x14007E2FC (RaidAdapterStorageTcgRevertConfig.c)
 *     RaidAdapterStorageTcgSetLockingObject @ 0x14007E850 (RaidAdapterStorageTcgSetLockingObject.c)
 *     RaidAdapterStorageTcgSetLockingObjectAuthKey @ 0x14007EE34 (RaidAdapterStorageTcgSetLockingObjectAuthKey.c)
 *     RaidAdapterStorageTcgSetLockingObjectMetadata @ 0x14007F3E0 (RaidAdapterStorageTcgSetLockingObjectMetadata.c)
 *     RaidAdapterStorageTcgSetSpAuthorityKey @ 0x14007F980 (RaidAdapterStorageTcgSetSpAuthorityKey.c)
 *     RaidUnitStorageTcgActivateLocking @ 0x14007FF0C (RaidUnitStorageTcgActivateLocking.c)
 *     RaidUnitStorageTcgAssignLockingObject @ 0x140080484 (RaidUnitStorageTcgAssignLockingObject.c)
 *     RaidUnitStorageTcgDeassignLockingObject @ 0x140080ADC (RaidUnitStorageTcgDeassignLockingObject.c)
 *     RaidUnitStorageTcgEnumerateLockingObjects @ 0x14008108C (RaidUnitStorageTcgEnumerateLockingObjects.c)
 *     RaidUnitStorageTcgEraseLockingObject @ 0x1400816AC (RaidUnitStorageTcgEraseLockingObject.c)
 *     RaidUnitStorageTcgGetLockingObjectMetadata @ 0x140081C48 (RaidUnitStorageTcgGetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgQueryCapability @ 0x14008223C (RaidUnitStorageTcgQueryCapability.c)
 *     RaidUnitStorageTcgResetState @ 0x14008277C (RaidUnitStorageTcgResetState.c)
 *     RaidUnitStorageTcgRevertConfig @ 0x140082C44 (RaidUnitStorageTcgRevertConfig.c)
 *     RaidUnitStorageTcgSetLockingObject @ 0x1400831B4 (RaidUnitStorageTcgSetLockingObject.c)
 *     RaidUnitStorageTcgSetLockingObjectAuthKey @ 0x1400837CC (RaidUnitStorageTcgSetLockingObjectAuthKey.c)
 *     RaidUnitStorageTcgSetLockingObjectMetadata @ 0x140083DA0 (RaidUnitStorageTcgSetLockingObjectMetadata.c)
 *     RaidUnitStorageTcgSetSpAuthorityKey @ 0x140084368 (RaidUnitStorageTcgSetSpAuthorityKey.c)
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibEalLogCommandStatus @ 0x140085958 (TcglibEalLogCommandStatus.c)
 *     TcglibEalLogError @ 0x140085AEC (TcglibEalLogError.c)
 *     TcglibEalLogInfo @ 0x140085CB8 (TcglibEalLogInfo.c)
 *     RaCheckAllMiniportSystemThreadsExit @ 0x140089C78 (RaCheckAllMiniportSystemThreadsExit.c)
 *     RaProcessStorageEventNotification @ 0x14008A428 (RaProcessStorageEventNotification.c)
 *     RaidGetTcgProperties @ 0x14008CF80 (RaidGetTcgProperties.c)
 *     StorLogMFNDCCAsyncEvent @ 0x14008F7F0 (StorLogMFNDCCAsyncEvent.c)
 *     StorLogNVMeErrorInfo @ 0x14008F9E8 (StorLogNVMeErrorInfo.c)
 *     StorLogNVMeErrorRecoveryInfo @ 0x14008FB98 (StorLogNVMeErrorRecoveryInfo.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidUnitAbortSrbCompletion @ 0x14009DE70 (RaidUnitAbortSrbCompletion.c)
 *     StorEtwMiniportLogByteStream @ 0x1400A8AB0 (StorEtwMiniportLogByteStream.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     StorEtwNvmeMiniportEvent @ 0x1400A9580 (StorEtwNvmeMiniportEvent.c)
 *     StorEtwNvmeNamespaceEvent @ 0x1400A9A30 (StorEtwNvmeNamespaceEvent.c)
 *     StorEtwRaidMiniportEvent @ 0x1400A9F58 (StorEtwRaidMiniportEvent.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B0FA0 (StorpLogPhysicalTopologyInfo.c)
 *     StorpTelemetrySendAdapterDlrmStatistics @ 0x1400B8D68 (StorpTelemetrySendAdapterDlrmStatistics.c)
 *     StorLogIdentifyMFNDFailure @ 0x1400C45DC (StorLogIdentifyMFNDFailure.c)
 *     StorLogMFNDCCQoSStatisticsInfo @ 0x1400C4798 (StorLogMFNDCCQoSStatisticsInfo.c)
 *     StorLogMFNDQueryCCQoSStatisticsLog @ 0x1400C49F8 (StorLogMFNDQueryCCQoSStatisticsLog.c)
 *     StorLogMFNDQueryCCQoSStatisticsProperty @ 0x1400C4C38 (StorLogMFNDQueryCCQoSStatisticsProperty.c)
 *     StorLogMFNDQueryCCQueuesState @ 0x1400C4E00 (StorLogMFNDQueryCCQueuesState.c)
 *     StorLogMFNDQueryChildPFCommandPermission @ 0x1400C5128 (StorLogMFNDQueryChildPFCommandPermission.c)
 *     StorLogMFNDQueryChildPFList @ 0x1400C52FC (StorLogMFNDQueryChildPFList.c)
 *     StorLogMFNDQueryChildPFProperty @ 0x1400C54E8 (StorLogMFNDQueryChildPFProperty.c)
 *     StorLogMFNDQueryChildPFSettings @ 0x1400C56D0 (StorLogMFNDQueryChildPFSettings.c)
 *     StorLogMFNDQueryMigrationQoS @ 0x1400C5A10 (StorLogMFNDQueryMigrationQoS.c)
 *     StorLogMFNDQueryNSPageMap @ 0x1400C5BF8 (StorLogMFNDQueryNSPageMap.c)
 *     StorLogMFNDQueryOperationInfo @ 0x1400C5DAC (StorLogMFNDQueryOperationInfo.c)
 *     StorLogMFNDSetCCQoSStatisticsProperty @ 0x1400C5F50 (StorLogMFNDSetCCQoSStatisticsProperty.c)
 *     StorLogMFNDSetCCQueuesState @ 0x1400C6118 (StorLogMFNDSetCCQueuesState.c)
 *     StorLogMFNDSetChildPFCommandPermission @ 0x1400C6454 (StorLogMFNDSetChildPFCommandPermission.c)
 *     StorLogMFNDSetChildPFProperty @ 0x1400C6628 (StorLogMFNDSetChildPFProperty.c)
 *     StorLogMFNDSetChildPFQoS @ 0x1400C6810 (StorLogMFNDSetChildPFQoS.c)
 *     StorLogMFNDSetChildPFSettings @ 0x1400C6A5C (StorLogMFNDSetChildPFSettings.c)
 *     StorLogMFNDSetMigrationQoS @ 0x1400C6D80 (StorLogMFNDSetMigrationQoS.c)
 *     StorLogMFNDSetOperationInfo @ 0x1400C6F68 (StorLogMFNDSetOperationInfo.c)
 *     NvmeAdapterRequestDirectComplete @ 0x1400D6AF8 (NvmeAdapterRequestDirectComplete.c)
 *     StorLogDLRMDripsCallback @ 0x140139EA8 (StorLogDLRMDripsCallback.c)
 *     StorLogDLRMEffectivePowerModeCallback @ 0x14013A058 (StorLogDLRMEffectivePowerModeCallback.c)
 *     StorLogDLRMInitialization @ 0x14013A208 (StorLogDLRMInitialization.c)
 *     StorLogDLRMSetLinkToDesiredSpeed @ 0x14013A43C (StorLogDLRMSetLinkToDesiredSpeed.c)
 *     StorLogDLRMUpdateLinkInfo @ 0x14013A628 (StorLogDLRMUpdateLinkInfo.c)
 *     NvmeDumpCreateDumpDriverInfo @ 0x14019F4E0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A08A8 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BB2C0 (RaidAdapterCreateDriverInfo.c)
 *     RaidInitializeAdapter @ 0x1401BE038 (RaidInitializeAdapter.c)
 *     InitializeNvmeAdapter @ 0x1401BEFA0 (InitializeNvmeAdapter.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RaidDriverGetName(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  _WORD *v6; // r9
  __int16 v7; // ax
  __int16 result; // ax

  v2 = *(_WORD **)(a1 + 48);
  if ( v2 )
  {
    v4 = *(unsigned __int16 *)(a1 + 40);
    if ( (_WORD)v4 )
    {
      v5 = v4 >> 1;
      while ( v5 )
      {
        v6 = &v2[--v5];
        if ( *v6 == 92 )
        {
          if ( v6 )
            v2 = v6 + 1;
          break;
        }
      }
    }
  }
  v7 = *(_WORD *)(a1 + 40) + *(_WORD *)(a1 + 48) - (_WORD)v2;
  *(_WORD *)a2 = v7;
  result = v7 + 2;
  *(_WORD *)(a2 + 2) = result;
  *(_QWORD *)(a2 + 8) = v2;
  return result;
}
