/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1402D1760
 * Callers:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     PpmEventTracePerfCheckStop @ 0x1402AE07C (PpmEventTracePerfCheckStop.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x1402AECA0 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x1402AFD50 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x1402B14A8 (KiIntSteerEtwEventEnabled.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x1402BF438 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxComponentLatency @ 0x1402BF72C (PopDiagTraceFxComponentLatency.c)
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402D11F0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpTraceFileIo @ 0x1402D1360 (EtwpTraceFileIo.c)
 *     PspRevertContainerImpersonation @ 0x1402D21C0 (PspRevertContainerImpersonation.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1402E6324 (PopDiagTraceFxDevicePowerRequirement.c)
 *     KiSetNextClockTickDueTime @ 0x140317B60 (KiSetNextClockTickDueTime.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     PpmEventPerfSelectProcessorState @ 0x1403A3000 (PpmEventPerfSelectProcessorState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1403A5978 (PopDiagTraceFxComponentIdleState.c)
 *     EtwpDiskProvTraceDisk @ 0x1403C379C (EtwpDiskProvTraceDisk.c)
 *     IopfCompleteRequest @ 0x1403CCDE0 (IopfCompleteRequest.c)
 *     EtwpFailLogging @ 0x1403FABA0 (EtwpFailLogging.c)
 *     PpmPerfRecordUtility @ 0x140401850 (PpmPerfRecordUtility.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140410FE0 (PoTraceSystemTimerResolutionKernel.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14041141C (PoTraceSystemTimerResolutionUpdate.c)
 *     EtwpLogContextSwapEvent @ 0x140415D90 (EtwpLogContextSwapEvent.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x140434D90 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x140438020 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     SshpTracingWriteBlockerStateChange @ 0x140444E2C (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventComputeEnergy @ 0x140445570 (PpmEventComputeEnergy.c)
 *     PpmEventParkNodeRecordedStats @ 0x14044BBFC (PpmEventParkNodeRecordedStats.c)
 *     PpmEventTracePerfCheckStart @ 0x14044C314 (PpmEventTracePerfCheckStart.c)
 *     EtwTraceMemoryAcg @ 0x14044DA80 (EtwTraceMemoryAcg.c)
 *     EtwWriteString @ 0x1404A4090 (EtwWriteString.c)
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
