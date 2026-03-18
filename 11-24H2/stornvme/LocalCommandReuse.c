/*
 * XREFs of LocalCommandReuse @ 0x140009790
 * Callers:
 *     NVMeSetHostMemoryBuffer @ 0x140006A20 (NVMeSetHostMemoryBuffer.c)
 *     NVMeControllerGetFeaturesSupportedCacheCapabilities @ 0x140006E40 (NVMeControllerGetFeaturesSupportedCacheCapabilities.c)
 *     NVMeSetArbitration @ 0x140007010 (NVMeSetArbitration.c)
 *     NVMeSetIoQueueCount @ 0x1400076C0 (NVMeSetIoQueueCount.c)
 *     NVMeIssueAsyncEventCommand @ 0x140007940 (NVMeIssueAsyncEventCommand.c)
 *     NVMeIoCompletionQueueDelete @ 0x140007A30 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoCompletionQueueCreate @ 0x140007AD0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1400080F0 (NVMeIoSubmissionQueueDelete.c)
 *     NVMeIoSubmissionQueueCreate @ 0x140008210 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeSetPowerState @ 0x140008510 (NVMeSetPowerState.c)
 *     NVMeGetCommandEffectsLog @ 0x14000B4B0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x14000D260 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeSetInterruptCoalescing @ 0x14000D410 (NVMeSetInterruptCoalescing.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001D908 (NVMeControllerSetHostIdentifier.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1400236B0 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeBuildPollingConfiguration @ 0x140026CF4 (NVMeBuildPollingConfiguration.c)
 *     NVMeControllerIdentify @ 0x140026FDC (NVMeControllerIdentify.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x140027728 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1400277DC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x140027940 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1400279FC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x140027BC8 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x140027C84 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeGetActiveNameSpaceIdList @ 0x140027E58 (NVMeGetActiveNameSpaceIdList.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140027F80 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1400283E8 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x14002881C (NVMeGetControllerIoCommandSetIdentify.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x14002891C (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeGetNVMSetAttributeList @ 0x140028A84 (NVMeGetNVMSetAttributeList.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x140028C30 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x140028D94 (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1400297C8 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x14002A530 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x14002B0D8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x14002B6C0 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x14002BB3C (NVMeReservedSubmissionQueueCreate.c)
 *     NVMeSanitizeRecoverWorkItem @ 0x14002C100 (NVMeSanitizeRecoverWorkItem.c)
 *     NVMeSetAutoPowerStateTransition @ 0x14002C2B8 (NVMeSetAutoPowerStateTransition.c)
 *     NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC (NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc.c)
 * Callees:
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall LocalCommandReuse(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)a2 )
    *(_DWORD *)(a1 + 4064) |= 0x20000u;
  v3 = *(void **)(a2 + 96);
  *(_BYTE *)(a2 + 11) = 0;
  memset(v3, 0, 0x1088uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4200LL) = 0LL;
  result = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = result;
  *(_BYTE *)a2 = 1;
  return result;
}
