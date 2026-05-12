/*
 * XREFs of NvmeControllerReclaimExtendedCommand @ 0x140129B08
 * Callers:
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400BEBD0 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeGetActiveNameSpaceIdList @ 0x1400BF674 (NvmeGetActiveNameSpaceIdList.c)
 *     NvmeGetIdentifyNamespaceData @ 0x1400BF7F8 (NvmeGetIdentifyNamespaceData.c)
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400C74E4 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400C77C0 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400C7A20 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400C7C64 (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400C7EF4 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400C81A8 (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400C84AC (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerConfigAsyncEvent @ 0x1400C8A10 (NvmeControllerConfigAsyncEvent.c)
 *     NvmeControllerGetCurrentWriteCacheState @ 0x1400C8B78 (NvmeControllerGetCurrentWriteCacheState.c)
 *     NvmeControllerGetFeaturesSupportedCacheCapabilities @ 0x1400C8E14 (NvmeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NvmeControllerGetTemperatureThreshold @ 0x1400C8FE0 (NvmeControllerGetTemperatureThreshold.c)
 *     NvmeControllerReConfigAsyncEvent @ 0x1400C9230 (NvmeControllerReConfigAsyncEvent.c)
 *     NvmeControllerReConfigAsyncEventCompletion @ 0x1400C9390 (NvmeControllerReConfigAsyncEventCompletion.c)
 *     NvmeControllerSetArbitration @ 0x1400C941C (NvmeControllerSetArbitration.c)
 *     NvmeControllerSetCurrentWriteCacheState @ 0x1400C95A0 (NvmeControllerSetCurrentWriteCacheState.c)
 *     NvmeControllerSetHostBehaviorSupport @ 0x1400C985C (NvmeControllerSetHostBehaviorSupport.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400C9A0C (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeControllerSetInterruptCoalescing @ 0x1400C9E90 (NvmeControllerSetInterruptCoalescing.c)
 *     NvmeControllerSetIoQueueCount @ 0x1400C9FFC (NvmeControllerSetIoQueueCount.c)
 *     NvmeControllerSetPowerState @ 0x1400CA468 (NvmeControllerSetPowerState.c)
 *     NvmeControllerSetWriteCacheEnable @ 0x1400CA614 (NvmeControllerSetWriteCacheEnable.c)
 *     NvmeControllerSyncHostTime @ 0x1400CA8F8 (NvmeControllerSyncHostTime.c)
 *     NvmeGetAutoPowerStateTransition @ 0x1400CAB0C (NvmeGetAutoPowerStateTransition.c)
 *     NvmeSetAutoPowerStateTransition @ 0x1400CAF34 (NvmeSetAutoPowerStateTransition.c)
 *     NvmeSetNonOperationalPowerStatePermissiveMode @ 0x1400CB05C (NvmeSetNonOperationalPowerStatePermissiveMode.c)
 *     NvmeAdapterFirmwareActivateAfterResetCallback @ 0x1400D00F0 (NvmeAdapterFirmwareActivateAfterResetCallback.c)
 *     NvmeAdapterFirmwareActivateIoctl @ 0x1400D0584 (NvmeAdapterFirmwareActivateIoctl.c)
 *     NvmeAdapterFirmwareActivateIoctlCompletion @ 0x1400D0B30 (NvmeAdapterFirmwareActivateIoctlCompletion.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareDownloadIoctlCompletion @ 0x1400D1E00 (NvmeAdapterFirmwareDownloadIoctlCompletion.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D2588 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctlCompletion @ 0x1400D2AE0 (NvmeAdapterFirmwareGetInfoIoctlCompletion.c)
 *     NvmeAdapterSetTemperatureThresholdIoctl @ 0x1400D74F4 (NvmeAdapterSetTemperatureThresholdIoctl.c)
 *     NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion @ 0x1400D7A90 (NvmeAdapterSetTemperatureThresholdIoctlCommandCompletion.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400D9FA0 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     NvmeControllerGetTemperatureThresholdWorkerCompletion @ 0x1400DB1A0 (NvmeControllerGetTemperatureThresholdWorkerCompletion.c)
 *     NvmeGetStorageTemperaturePropertyComplete @ 0x1400DB9B0 (NvmeGetStorageTemperaturePropertyComplete.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400EB71C (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400EE2B0 (NvmeControllerGetLogPageCompletionForAER.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400EEEB0 (NvmeControllerGetTelemetryLog.c)
 *     NvmeControllerIdentify @ 0x1400EF360 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400EF538 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerIoCompletionQueueCreate @ 0x1400F0D94 (NvmeControllerIoCompletionQueueCreate.c)
 *     NvmeControllerIoCompletionQueueDelete @ 0x1400F0FD4 (NvmeControllerIoCompletionQueueDelete.c)
 *     NvmeControllerIoSubmissionQueueCreate @ 0x1400F1EC8 (NvmeControllerIoSubmissionQueueCreate.c)
 *     NvmeControllerIoSubmissionQueueDelete @ 0x1400F21E4 (NvmeControllerIoSubmissionQueueDelete.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400F8C74 (NvmeGetNVMSetAttributeList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400F8EB4 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400F90FC (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x1400FB5C8 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceCleanupSanitizeContext @ 0x1400FC698 (NvmeNamespaceCleanupSanitizeContext.c)
 *     NvmeNamespaceDsmDeallocate @ 0x1400FE7D0 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0 (NvmeNamespaceDsmDeallocate2.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x1400FF274 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceExecuteNvmeSrbComplete @ 0x1400FF930 (NvmeNamespaceExecuteNvmeSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbComplete @ 0x140100360 (NvmeNamespaceExecuteScsiSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbEx @ 0x140100A80 (NvmeNamespaceExecuteScsiSrbEx.c)
 *     NvmeNamespaceExecuteScsiSrbExComplete @ 0x140100E50 (NvmeNamespaceExecuteScsiSrbExComplete.c)
 *     NvmeNamespaceQueryDeviceEndurancePropertyCompletion @ 0x140108160 (NvmeNamespaceQueryDeviceEndurancePropertyCompletion.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010C490 (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010C6BC (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010C914 (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010CB20 (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010CD08 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceReservationReportCapabilities @ 0x14010D4B4 (NvmeNamespaceReservationReportCapabilities.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x1401128C0 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion @ 0x140112E20 (NvmeNamespaceStorMQFirmwareGetInfoIoctlCompletion.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140113700 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14012AD40 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x14012B8A0 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4 (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoCompletion @ 0x14012CC50 (NvmeSetProtocolInfoCompletion.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x14012D404 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019A77C (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A47F8 (NvmeNamespaceDiskVerifyIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AB7AC (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 * Callees:
 *     IsNvmeExtendedCommandCompleted @ 0x1400BE974 (IsNvmeExtendedCommandCompleted.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall NvmeControllerReclaimExtendedCommand(union _SLIST_HEADER *a1, __int64 a2)
{
  int v4; // edi
  unsigned __int64 Alignment; // rbx
  __int64 v6; // rsi
  KIRQL v7; // r15
  __int64 v8; // r8
  struct _SLIST_ENTRY *v9; // rdx
  union _SLIST_HEADER *v10; // rcx

  if ( a2 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a2 + 4176LL) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)a2 + 4256LL);
      Alignment = a1[8].Alignment;
      v6 = *(_QWORD *)(*(_QWORD *)a2 + 4176LL);
      v7 = KfRaiseIrql(2u);
      LOBYTE(v8) = (v4 & 0x200) != 0;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(Alignment + 1144) + 8LL) + 96LL))(
        *(_QWORD *)(Alignment + 1144),
        v6,
        v8);
      if ( v7 < 2u )
        KeLowerIrql(v7);
      *(_QWORD *)(*(_QWORD *)a2 + 4176LL) = 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 4256LL) & 0x8000) == 0 || IsNvmeExtendedCommandCompleted(a2) )
    {
      memset_0(*(void **)a2, 0, 0x10B0uLL);
      *(_DWORD *)(a2 + 48) &= ~1u;
      v9 = (struct _SLIST_ENTRY *)(a2 + 16);
      v10 = a1 + 71;
    }
    else
    {
      *(_DWORD *)(a2 + 48) |= 2u;
      v9 = (struct _SLIST_ENTRY *)(a2 + 16);
      if ( *(_WORD *)(a2 + 54) )
        v10 = (union _SLIST_HEADER *)(a1[74].Alignment - 16 + 16LL * *(unsigned __int16 *)(a2 + 54));
      else
        v10 = a1 + 73;
    }
    ExpInterlockedPushEntrySList(v10, v9);
  }
}
