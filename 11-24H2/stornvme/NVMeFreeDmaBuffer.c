/*
 * XREFs of NVMeFreeDmaBuffer @ 0x14000CF60
 * Callers:
 *     IoQueuesFreeResources @ 0x140007110 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x140007AD0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x140008210 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000CC80 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x14000D260 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeAllocateAsyncEventCommands @ 0x14000D7B0 (NVMeAllocateAsyncEventCommands.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 *     AdminQueuesFreeResources @ 0x140017250 (AdminQueuesFreeResources.c)
 *     IoQueuesInitialize @ 0x14001A6C8 (IoQueuesInitialize.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x14001B694 (NVMeAllocateAsyncEventCommandsForMFND.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001D908 (NVMeControllerSetHostIdentifier.c)
 *     IoctlDeleteReservedQueuePair @ 0x1400208C0 (IoctlDeleteReservedQueuePair.c)
 *     NVMeControllerAllocateLocalCommand @ 0x140021FDC (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerDeleteLocalCommandPool @ 0x140022178 (NVMeControllerDeleteLocalCommandPool.c)
 *     NVMeControllerDeleteTimestampSyncCommand @ 0x140022220 (NVMeControllerDeleteTimestampSyncCommand.c)
 *     NVMeGetErrorInfoLogPageCompletion @ 0x140022DA0 (NVMeGetErrorInfoLogPageCompletion.c)
 *     NVMeGetLogPageHealthInfoCompletion @ 0x140022E50 (NVMeGetLogPageHealthInfoCompletion.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x140022F00 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x140023260 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1400236B0 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMePersistentReserveOutCompletionRoutine @ 0x1400238D0 (NVMePersistentReserveOutCompletionRoutine.c)
 *     NVMeReservationReportStatus @ 0x140024174 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x140024370 (NVMeReservationReportStatusCompletion.c)
 *     QueryEnduranceInfoLogCompletion @ 0x140025650 (QueryEnduranceInfoLogCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140025E90 (QueryTemperatureInfoHealthLogCompletion.c)
 *     SetProtocolInfoCompletion @ 0x140026670 (SetProtocolInfoCompletion.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1400277DC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1400279FC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x140027C84 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140027F80 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetCloudSSDErrorRecoveryLogPageCompletion @ 0x140028120 (NVMeGetCloudSSDErrorRecoveryLogPageCompletion.c)
 *     NVMeGetControllerInitiatedTelemetry @ 0x1400281F0 (NVMeGetControllerInitiatedTelemetry.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeNameSpaceIdentify @ 0x1400297C8 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x14002A530 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x14002B0D8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeListCompletion @ 0x14002B320 (NVMeReenumerateReissueGetLogNamespaceChangeListCompletion.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x14002BB3C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC (NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreeDmaBuffer(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax

  if ( !a3 )
    return 3238002689LL;
  v5 = *a3;
  if ( !v5 || !a4 )
    return 3238002689LL;
  result = StorPortExtendedFunction(83LL, a1, v5, a2);
  if ( !(_DWORD)result )
    *a3 = 0LL;
  return result;
}
