/*
 * XREFs of NvmeAllocateDmaBuffer @ 0x1400E97F4
 * Callers:
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400BEBD0 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerGetCloudSSDErrorRecoveryLog @ 0x1400C74E4 (NvmeControllerGetCloudSSDErrorRecoveryLog.c)
 *     NvmeControllerGetCloudSSDLog @ 0x1400C77C0 (NvmeControllerGetCloudSSDLog.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400C7A20 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerGetFeatureIdentifiersSupportedLog @ 0x1400C7C64 (NvmeControllerGetFeatureIdentifiersSupportedLog.c)
 *     NvmeControllerGetHealthInfoLog @ 0x1400C7EF4 (NvmeControllerGetHealthInfoLog.c)
 *     NvmeControllerGetSupportedLogPagesLog @ 0x1400C81A8 (NvmeControllerGetSupportedLogPagesLog.c)
 *     NvmeControllerBuildIoPollingConfiguration @ 0x1400C84AC (NvmeControllerBuildIoPollingConfiguration.c)
 *     NvmeControllerSetHostBehaviorSupport @ 0x1400C985C (NvmeControllerSetHostBehaviorSupport.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400C9A0C (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeControllerSyncHostTime @ 0x1400CA8F8 (NvmeControllerSyncHostTime.c)
 *     NvmeGetAutoPowerStateTransition @ 0x1400CAB0C (NvmeGetAutoPowerStateTransition.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterFirmwareGetInfoIoctl @ 0x1400D2588 (NvmeAdapterFirmwareGetInfoIoctl.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400EA850 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerCheckOCPCompliance @ 0x1400EB71C (NvmeControllerCheckOCPCompliance.c)
 *     NvmeControllerGetIoCommandSetIdentify @ 0x1400EE0A8 (NvmeControllerGetIoCommandSetIdentify.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400EEEB0 (NvmeControllerGetTelemetryLog.c)
 *     NvmeControllerIdentify @ 0x1400EF360 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400EF538 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerInitializeAdminQueue @ 0x1400F02F4 (NvmeControllerInitializeAdminQueue.c)
 *     NvmeControllerIoQueuesInitialize @ 0x1400F159C (NvmeControllerIoQueuesInitialize.c)
 *     NvmeControllerSubmissionQueueInit @ 0x1400F5828 (NvmeControllerSubmissionQueueInit.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400F8C74 (NvmeGetNVMSetAttributeList.c)
 *     NvmeGetNamespaceDescriptorListIdentify @ 0x1400F8EB4 (NvmeGetNamespaceDescriptorListIdentify.c)
 *     NvmeGetNamespaceIoCommandSetIdentify @ 0x1400F90FC (NvmeGetNamespaceIoCommandSetIdentify.c)
 *     NvmeNamespaceDsmDeallocate @ 0x1400FE7D0 (NvmeNamespaceDsmDeallocate.c)
 *     NvmeNamespaceDsmDeallocate2 @ 0x1400FECF0 (NvmeNamespaceDsmDeallocate2.c)
 *     NvmeNamespaceDsmWriteZeroes @ 0x1400FF274 (NvmeNamespaceDsmWriteZeroes.c)
 *     NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010B7C0 (NvmeNamespaceReinitializeMediaRecoverWorker.c)
 *     NvmeNamespaceReservationAcquire @ 0x14010C490 (NvmeNamespaceReservationAcquire.c)
 *     NvmeNamespaceReservationRegister @ 0x14010C6BC (NvmeNamespaceReservationRegister.c)
 *     NvmeNamespaceReservationRegisterAndMove @ 0x14010C914 (NvmeNamespaceReservationRegisterAndMove.c)
 *     NvmeNamespaceReservationRelease @ 0x14010CB20 (NvmeNamespaceReservationRelease.c)
 *     NvmeNamespaceReservationReport @ 0x14010CD08 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceStorMQFirmwareGetInfoIoctl @ 0x1401128C0 (NvmeNamespaceStorMQFirmwareGetInfoIoctl.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 *     ScsiUnmapRequest @ 0x1401171E4 (ScsiUnmapRequest.c)
 *     NvmeQueryProtocolInfoFeatureData @ 0x14012B8A0 (NvmeQueryProtocolInfoFeatureData.c)
 *     NvmeQueryProtocolInfoIdentifyData @ 0x14012BDE4 (NvmeQueryProtocolInfoIdentifyData.c)
 *     NvmeQueryProtocolInfoLogPageData @ 0x14012C13C (NvmeQueryProtocolInfoLogPageData.c)
 *     NvmeSetProtocolInfoFeatureData @ 0x14012D404 (NvmeSetProtocolInfoFeatureData.c)
 *     NvmeAdapterGetTemperatureProperty @ 0x14019A77C (NvmeAdapterGetTemperatureProperty.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 *     NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl @ 0x1401AB7AC (NvmeNamespaceStorageQueryDeviceEndurancePropertyIoctl.c)
 * Callees:
 *     NvmeAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1400130A8 (NvmeAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall NvmeAllocateDmaBuffer(__int64 a1, unsigned int a2, __int64 a3, void **a4, _QWORD *a5, char a6)
{
  size_t v8; // r14
  unsigned int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]

  if ( a2 <= 0x1000 && !a6 && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1072), 0) )
  {
    *a4 = *(void **)(a1 + 1112);
    v8 = a2;
    *a5 = *(_QWORD *)(a1 + 1120);
LABEL_5:
    memset_0(*a4, 0, v8);
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 1728) == 1 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1648) + 8LL);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 1048);
    if ( !v11 || (*(_DWORD *)(v11 + 24) & 2) != 0 )
      v10 = 0x80000000;
    else
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1008LL);
  }
  v8 = a2;
  if ( !(unsigned int)NvmeAllocateContiguousMemorySpecifyCacheNodeEx(
                        *(_QWORD *)(a1 + 128),
                        a2,
                        0LL,
                        0x7FFFFFFFFFFFFFFFLL,
                        0LL,
                        1,
                        v10,
                        a4,
                        a5) )
    goto LABEL_5;
  if ( v10 != 0x80000000 )
  {
    LODWORD(v13) = 0x80000000;
    LODWORD(v12) = 1;
    if ( !(unsigned int)NvmeAllocateContiguousMemorySpecifyCacheNodeEx(
                          *(_QWORD *)(a1 + 128),
                          (unsigned int)v8,
                          0LL,
                          0x7FFFFFFFFFFFFFFFLL,
                          0LL,
                          v12,
                          v13,
                          a4,
                          a5) )
      goto LABEL_5;
  }
  return 3221225626LL;
}
