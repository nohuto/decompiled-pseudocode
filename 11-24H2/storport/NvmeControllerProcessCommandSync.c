/*
 * XREFs of NvmeControllerProcessCommandSync @ 0x1400BF2F4
 * Callers:
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
 *     NvmeControllerCheckOCPCompliance @ 0x1400EB71C (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8 (NvmeControllerGetIoCommandSetIdentify.c)
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
 *     NvmeNamespaceDsmDeallocate @ 0x1400FE7D0 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0 (NvmeNamespaceDsmDeallocate2.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x1400FF274 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceReinitializeMediaIoctl @ 0x14010B154 (NvmeNamespaceReinitializeMediaIoctl.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010B7C0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010C490 (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010C6BC (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010C914 (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010CB20 (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010CD08 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceReservationReportCapabilities @ 0x14010D4B4 (NvmeNamespaceReservationReportCapabilities.c)
 *     NvmeNamespaceDiskVerifyIoctl @ 0x1401A47F8 (NvmeNamespaceDiskVerifyIoctl.c)
 * Callees:
 *     WaitForNVMeCommandComplete @ 0x1400BFF04 (WaitForNVMeCommandComplete.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 */

__int64 __fastcall NvmeControllerProcessCommandSync(__int64 a1, _QWORD *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // r8

  *(_DWORD *)(*a2 + 4256LL) |= 0x2000u;
  *(_DWORD *)(*a2 + 4256LL) |= 0x10000u;
  result = NvmeControllerProcessCommand(a1, a2);
  if ( (int)result >= 0 )
  {
    LOBYTE(v7) = a3;
    return WaitForNVMeCommandComplete(a1, *a2, v7);
  }
  return result;
}
