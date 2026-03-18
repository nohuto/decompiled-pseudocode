/*
 * XREFs of memset @ 0x1400314C0
 * Callers:
 *     FormInquiryDeviceIdentifiersData @ 0x1400012F0 (FormInquiryDeviceIdentifiersData.c)
 *     ScsiInquiryRequest @ 0x140001810 (ScsiInquiryRequest.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002140 (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeSetSenseData @ 0x140002390 (NVMeSetSenseData.c)
 *     NVMeHwBuildIo @ 0x140002520 (NVMeHwBuildIo.c)
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     ScsiReadWriteRequest @ 0x140003760 (ScsiReadWriteRequest.c)
 *     ScsiUnmapRequest @ 0x140004080 (ScsiUnmapRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400047E0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     SetPrpFromSrb @ 0x140004B50 (SetPrpFromSrb.c)
 *     SglToPrp @ 0x140005090 (SglToPrp.c)
 *     ProtocolCommandToNVMe @ 0x1400062C0 (ProtocolCommandToNVMe.c)
 *     NVMeInitHostMemoryBuffer @ 0x140006BB0 (NVMeInitHostMemoryBuffer.c)
 *     NVMeIoCompletionQueueCreate @ 0x140007AD0 (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x140008210 (NVMeIoSubmissionQueueCreate.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeMapError @ 0x1400097F0 (NVMeMapError.c)
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     NVMeGetCommandEffectsLog @ 0x14000B4B0 (NVMeGetCommandEffectsLog.c)
 *     GetProcessorInformation @ 0x14000C190 (GetProcessorInformation.c)
 *     CompletionQueueReInit @ 0x14000CAB0 (CompletionQueueReInit.c)
 *     SubmissionQueueReInit @ 0x14000CB10 (SubmissionQueueReInit.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x14000CC80 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     NVMeGetFeatureIdentifiersSupportedLog @ 0x14000D0E0 (NVMeGetFeatureIdentifiersSupportedLog.c)
 *     NVMeGetSupportedLogPagesLog @ 0x14000D260 (NVMeGetSupportedLogPagesLog.c)
 *     NVMeAllocateAsyncEventCommands @ 0x14000D7B0 (NVMeAllocateAsyncEventCommands.c)
 *     DriverEntry @ 0x14000DA10 (DriverEntry.c)
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     QueryProtocolInfoLogPageData @ 0x140011650 (QueryProtocolInfoLogPageData.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140012380 (NVMeAsyncEventRequestCompletion.c)
 *     ProcessPendingIoCommands @ 0x140014BB0 (ProcessPendingIoCommands.c)
 *     GetInterruptMessageInformation @ 0x1400169A0 (GetInterruptMessageInformation.c)
 *     AdminQueuesFreeResources @ 0x140017250 (AdminQueuesFreeResources.c)
 *     ControllerAllocateUncachedExtension @ 0x1400174A0 (ControllerAllocateUncachedExtension.c)
 *     FillControllerConfiguration @ 0x1400178B4 (FillControllerConfiguration.c)
 *     FillControllerRuntimeLog @ 0x140017B10 (FillControllerRuntimeLog.c)
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     NVMeLogEtwControllerInfo @ 0x14001890C (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetry @ 0x140018B04 (NVMeLogTelemetry.c)
 *     AdminQueueInitialize @ 0x140019CE4 (AdminQueueInitialize.c)
 *     GetProcessorGroupInformation @ 0x14001A010 (GetProcessorGroupInformation.c)
 *     IoQueuesInitialize @ 0x14001A6C8 (IoQueuesInitialize.c)
 *     IoReservedQueuesInitialize @ 0x14001ADD8 (IoReservedQueuesInitialize.c)
 *     NVMeAllocateAsyncEventCommandsForMFND @ 0x14001B694 (NVMeAllocateAsyncEventCommandsForMFND.c)
 *     NVMeCaptureLiveDumpWorkItem @ 0x14001BB70 (NVMeCaptureLiveDumpWorkItem.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001BD1C (NVMeCleanUpSqCqMapping.c)
 *     NVMeControllerFilterResourceRequirements @ 0x14001C804 (NVMeControllerFilterResourceRequirements.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeInitStreams @ 0x14001E0C8 (NVMeInitStreams.c)
 *     NVMePowerInitialize @ 0x14001E528 (NVMePowerInitialize.c)
 *     DiagAllDiagnosticData @ 0x14001F1D8 (DiagAllDiagnosticData.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 *     IoctlCreateReservedQueuePair @ 0x1400203C4 (IoctlCreateReservedQueuePair.c)
 *     IoctlQueryEnduranceInformation @ 0x140020DA0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryReservedQueueEntries @ 0x140020F94 (IoctlQueryReservedQueueEntries.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1400211FC (IoctlQueryTemperatureInfoProcess.c)
 *     LogSenseInformationalExceptions @ 0x140021C84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x140021E18 (LogSenseTemperature.c)
 *     NVMeControllerAllocateLocalCommand @ 0x140021FDC (NVMeControllerAllocateLocalCommand.c)
 *     NVMeControllerDeleteTimestampSyncCommand @ 0x140022220 (NVMeControllerDeleteTimestampSyncCommand.c)
 *     NVMeControllerInitializeTimestampSyncCommand @ 0x140022354 (NVMeControllerInitializeTimestampSyncCommand.c)
 *     NVMeGetDeviceTelemetryData @ 0x140022908 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x140022BBC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryDataCompletion @ 0x140022F00 (NVMeGetLogPageTelemetryDataCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x140023260 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1400236B0 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationReportStatus @ 0x140024174 (NVMeReservationReportStatus.c)
 *     NVMeReservationReportStatusCompletion @ 0x140024370 (NVMeReservationReportStatusCompletion.c)
 *     QueryProtocolInfoFeatureData @ 0x140025744 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140025B90 (QueryProtocolInfoIdentifyData.c)
 *     SetProtocolInfoFeatureData @ 0x14002672C (SetProtocolInfoFeatureData.c)
 *     NVMeConfigAsyncEvent @ 0x140026EC0 (NVMeConfigAsyncEvent.c)
 *     NVMeControllerIdentify @ 0x140026FDC (NVMeControllerIdentify.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1400279FC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeGetAutoPowerStateTransition @ 0x140027F80 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeGetControllerInitiatedTelemetryHeader @ 0x1400283E8 (NVMeGetControllerInitiatedTelemetryHeader.c)
 *     NVMeGetControllerInitiatedTelemetryLog @ 0x1400284D8 (NVMeGetControllerInitiatedTelemetryLog.c)
 *     NVMeGetControllerUUIDListIdentify @ 0x14002891C (NVMeGetControllerUUIDListIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1400297C8 (NVMeNameSpaceIdentify.c)
 *     NVMeParseNameSpaceIdentifyData @ 0x140029C40 (NVMeParseNameSpaceIdentifyData.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x14002A33C (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x14002A530 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x14002A95C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceStart @ 0x14002AEE0 (NVMeReenumerateNameSpaceStart.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x14002B0D8 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     NVMeReservedCompletionQueueCreate @ 0x14002B6C0 (NVMeReservedCompletionQueueCreate.c)
 *     NVMeReservedSubmissionQueueCreate @ 0x14002BB3C (NVMeReservedSubmissionQueueCreate.c)
 *     GetDynamicRegistrySettings @ 0x14002D4E0 (GetDynamicRegistrySettings.c)
 *     GetRegistrySettings @ 0x14002D764 (GetRegistrySettings.c)
 *     GetRegistrySettingsForSpecificKey @ 0x14002FAF0 (GetRegistrySettingsForSpecificKey.c)
 *     ReadBinaryRegistryValue @ 0x14002FC78 (ReadBinaryRegistryValue.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x14002FDAC (ReadMultiSzRegistryValueAndCompareId.c)
 *     NVMeSendControllerInternalData @ 0x1400301F4 (NVMeSendControllerInternalData.c)
 *     NVMeSendLunInternalData @ 0x140030914 (NVMeSendLunInternalData.c)
 *     memset$thunk$772440563353939046 @ 0x140035020 (memset$thunk$772440563353939046.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
