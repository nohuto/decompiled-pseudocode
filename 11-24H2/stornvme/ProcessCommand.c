/*
 * XREFs of ProcessCommand @ 0x140009500
 * Callers:
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400047E0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
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
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     QueryProtocolInfoCompletion @ 0x1400111F0 (QueryProtocolInfoCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x140012380 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x140013EA0 (NVMeGetLogPageCompletion.c)
 *     NVMeHwStartIo @ 0x140018740 (NVMeHwStartIo.c)
 *     NVMeControllerSetHostIdentifier @ 0x14001D908 (NVMeControllerSetHostIdentifier.c)
 *     NVMeFirmwareActivateCompletion @ 0x140022470 (NVMeFirmwareActivateCompletion.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x140023260 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeGetSanitizeLogWorkItem @ 0x1400236B0 (NVMeGetSanitizeLogWorkItem.c)
 *     NVMeReservationReportStatusCompletion @ 0x140024370 (NVMeReservationReportStatusCompletion.c)
 *     NVMeSanitizeRecoverCompletionRoutine @ 0x140024B10 (NVMeSanitizeRecoverCompletionRoutine.c)
 *     NVMeSplitIoCommandCompletion @ 0x140024E70 (NVMeSplitIoCommandCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1400251A0 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     ProtocolCommandCompletion @ 0x140025490 (ProtocolCommandCompletion.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140025E90 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140026060 (QueryTemperatureThresholdCompletion.c)
 *     NVMeBuildPollingConfiguration @ 0x140026CF4 (NVMeBuildPollingConfiguration.c)
 *     NVMeConfigAsyncEvent @ 0x140026EC0 (NVMeConfigAsyncEvent.c)
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
 *     NVMeSetNonOperationalPowerStatePermissiveMode2 @ 0x14002C3B8 (NVMeSetNonOperationalPowerStatePermissiveMode2.c)
 *     NVMeSetNonOperationalPowerStatePermissiveMode3 @ 0x14002C4AC (NVMeSetNonOperationalPowerStatePermissiveMode3.c)
 *     NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC (NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc.c)
 *     ProcessMultipleCommands @ 0x14002CDD4 (ProcessMultipleCommands.c)
 * Callees:
 *     NVMeRequestComplete @ 0x14000AAB0 (NVMeRequestComplete.c)
 *     ProcessCommandInSpecificQueue @ 0x14000AD90 (ProcessCommandInSpecificQueue.c)
 */

__int64 __fastcall ProcessCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // r12
  unsigned __int16 v7; // r15
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // eax
  unsigned int v14; // edx
  char v15; // cl
  __int64 v16; // rdx
  unsigned int v17; // r8d

  if ( *(_BYTE *)(a2 + 2) == 40 )
    v4 = *(_QWORD *)(a2 + 104);
  else
    v4 = *(_QWORD *)(a2 + 56);
  if ( (v4 & 0xFFF) != 0 )
    v4 = v4 - (v4 & 0xFFF) + 4096;
  v5 = 0;
  v6 = 0LL;
  if ( *(_WORD *)(v4 + 4212) )
  {
    if ( (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
      MEMORY[0x30] = 4660;
    v7 = *(_WORD *)(a1 + 326);
    v8 = 208LL * *(unsigned __int16 *)(v4 + 4212) + *(_QWORD *)(a1 + 936) - 208LL;
  }
  else
  {
    v7 = *(_WORD *)(a1 + 324);
    v8 = a1 + 336;
  }
  if ( g_HeteroSystem && (*(_BYTE *)(a1 + 4064) & 0x10) == 0 )
    v6 = v8;
  result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
  if ( (_BYTE)result )
    return result;
  if ( *(_BYTE *)(a2 + 3) != 5 )
    return NVMeRequestComplete(a1, a2, 0LL);
  if ( !*(_WORD *)(v8 + 48) )
    goto LABEL_38;
  v11 = *(unsigned __int16 *)(a1 + 330);
  if ( v11 > 1 )
  {
    *(_BYTE *)(v4 + 4225) |= 0x10u;
    v12 = v11;
    do
    {
      v13 = *(unsigned __int16 *)(a1 + 330);
      LOWORD(v14) = *(_WORD *)(v8 + 48) + 1;
      if ( (unsigned __int16)v14 > (unsigned __int16)v13 )
        v14 = (unsigned __int16)v14 % v13;
      *(_WORD *)(v4 + 4212) = v14;
      v8 = 208LL * (unsigned __int16)v14 + *(_QWORD *)(a1 + 936) - 208LL;
      result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
      v15 = result;
      if ( (_BYTE)result )
        break;
      if ( *(_BYTE *)(a2 + 3) != 5 )
        break;
      ++v5;
    }
    while ( v5 < v12 );
    if ( !g_HeteroSystem || (result = *(unsigned int *)(a1 + 4064), (result & 0x10) != 0) )
    {
      if ( v15 )
        return result;
    }
    else if ( v15 )
    {
      if ( v5 < v12 )
      {
        v16 = *(_QWORD *)(a1 + 944);
        v17 = *(_DWORD *)(392LL * *(unsigned __int16 *)(v6 + 58) + v16 - 148) & 0xF;
        result = *(_DWORD *)(392LL * *(unsigned __int16 *)(v8 + 58) + v16 - 148) & 0xF;
        if ( (_DWORD)result == v17 )
        {
          ++*(_DWORD *)(a1 + 4120);
        }
        else if ( (unsigned int)result >= v17 )
        {
          ++*(_DWORD *)(a1 + 4128);
        }
        else
        {
          ++*(_DWORD *)(a1 + 4124);
        }
      }
      return result;
    }
    return NVMeRequestComplete(a1, a2, 0LL);
  }
  if ( *(_WORD *)(v8 + 48) )
    return NVMeRequestComplete(a1, a2, 0LL);
LABEL_38:
  while ( 1 )
  {
    StorPortExtendedFunction(81LL, a1, 1000LL, v10);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 992));
    result = ProcessCommandInSpecificQueue(a1, a2, v8, v7);
    if ( (_BYTE)result )
      break;
    if ( ++v5 >= 4 )
      return NVMeRequestComplete(a1, a2, 0LL);
  }
  return result;
}
