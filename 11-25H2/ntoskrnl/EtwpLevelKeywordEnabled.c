/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1402576B0
 * Callers:
 *     PpmEventTracePerfCheckStart @ 0x140203744 (PpmEventTracePerfCheckStart.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x140204410 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmEventTracePerfCheckStop @ 0x140204BEC (PpmEventTracePerfCheckStop.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     PpmEventPerfSelectProcessorState @ 0x140265B10 (PpmEventPerfSelectProcessorState.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x140276BA8 (PoTraceSystemTimerResolutionUpdate.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402C10CC (PopDiagTraceFxComponentLatency.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140306840 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     EtwpTraceMessageVa @ 0x14030B270 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x14030BF40 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpDiskProvTraceDisk @ 0x140310E84 (EtwpDiskProvTraceDisk.c)
 *     EtwpTraceFileIo @ 0x140310FF0 (EtwpTraceFileIo.c)
 *     PopFxIdleWorkerTail @ 0x1403492B0 (PopFxIdleWorkerTail.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x14034D5B8 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x14034D694 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140358F8C (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopDiagTraceFxDevicePowered @ 0x14035956C (PopDiagTraceFxDevicePowered.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403AF324 (KiIntSteerEtwEventEnabled.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1403B0220 (PpmPerfSnapDeliveredPerformance.c)
 *     PpmPerfRecordUtility @ 0x1403B10B0 (PpmPerfRecordUtility.c)
 *     PpmEventParkNodeRecordedStats @ 0x1403B1B08 (PpmEventParkNodeRecordedStats.c)
 *     EtwProviderEnabled @ 0x1403BE620 (EtwProviderEnabled.c)
 *     EtwpFailLogging @ 0x1403F83E0 (EtwpFailLogging.c)
 *     PpmEventComputeEnergy @ 0x140401744 (PpmEventComputeEnergy.c)
 *     EtwpLogContextSwapEvent @ 0x14042A060 (EtwpLogContextSwapEvent.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14043EB80 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044CC10 (PopDiagTraceFxComponentIdleState.c)
 *     SshpTracingWriteBlockerStateChange @ 0x14044E3EC (SshpTracingWriteBlockerStateChange.c)
 *     EtwTraceMemoryAcg @ 0x140457B54 (EtwTraceMemoryAcg.c)
 *     EtwWriteString @ 0x1404A8DE0 (EtwWriteString.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al

  if ( !*(_DWORD *)a1 )
    return 0;
  v3 = *(_BYTE *)(a1 + 4);
  if ( a2 > v3 )
  {
    if ( v3 )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3 )
    return 1;
  return (a3 & *(_QWORD *)(a1 + 16)) != 0 && (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24);
}
