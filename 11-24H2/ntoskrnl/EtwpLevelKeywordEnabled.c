/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1402A2030
 * Callers:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     PpmEventTracePerfCheckStop @ 0x14029FD0C (PpmEventTracePerfCheckStop.c)
 *     KiSetNextClockTickDueTime @ 0x1402A01F0 (KiSetNextClockTickDueTime.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402A18F4 (PoTraceSystemTimerResolutionKernel.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x1402A1AC0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     EtwpTraceFileIo @ 0x1402A1C30 (EtwpTraceFileIo.c)
 *     PspRevertContainerImpersonation @ 0x1402A2A90 (PspRevertContainerImpersonation.c)
 *     PopDiagTraceFxDefaultPepWorkerStart @ 0x140316888 (PopDiagTraceFxDefaultPepWorkerStart.c)
 *     PopDiagTraceFxComponentLatency @ 0x140316B7C (PopDiagTraceFxComponentLatency.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     EtwpTraceMessageVa @ 0x140326900 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1403274F0 (EtwpLogSystemEventUnsafe.c)
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpFailLogging @ 0x14032A9F0 (EtwpFailLogging.c)
 *     KeInsertQueueApc @ 0x140337240 (KeInsertQueueApc.c)
 *     EtwpDiskProvTraceDisk @ 0x140349D5C (EtwpDiskProvTraceDisk.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140351020 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x1403536D8 (KiIntSteerEtwEventEnabled.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140377C48 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PpmEventTraceProcessorLatencyLimitChange @ 0x1403B5D60 (PpmEventTraceProcessorLatencyLimitChange.c)
 *     EtwProviderEnabled @ 0x1403D47F0 (EtwProviderEnabled.c)
 *     IopfCompleteRequest @ 0x1403DBB10 (IopfCompleteRequest.c)
 *     PpmPerfRecordUtility @ 0x140409370 (PpmPerfRecordUtility.c)
 *     PoTraceSystemTimerResolutionUpdate @ 0x14041D72C (PoTraceSystemTimerResolutionUpdate.c)
 *     EtwpLogContextSwapEvent @ 0x140421EE0 (EtwpLogContextSwapEvent.c)
 *     PpmEventPerfSelectProcessorState @ 0x14042AAD0 (PpmEventPerfSelectProcessorState.c)
 *     PopDiagTraceFxComponentLogicalCondition @ 0x14043F1E0 (PopDiagTraceFxComponentLogicalCondition.c)
 *     PopDiagTraceFxDefaultPepWorkerEnd @ 0x1404416E0 (PopDiagTraceFxDefaultPepWorkerEnd.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14044C130 (PopDiagTraceFxComponentIdleState.c)
 *     SshpTracingWriteBlockerStateChange @ 0x14044DF2C (SshpTracingWriteBlockerStateChange.c)
 *     PpmEventComputeEnergy @ 0x140450300 (PpmEventComputeEnergy.c)
 *     PpmEventParkNodeRecordedStats @ 0x140456C2C (PpmEventParkNodeRecordedStats.c)
 *     PpmEventTracePerfCheckStart @ 0x140457864 (PpmEventTracePerfCheckStart.c)
 *     EtwTraceMemoryAcg @ 0x1404585D0 (EtwTraceMemoryAcg.c)
 *     EtwWriteString @ 0x1404A9DC0 (EtwWriteString.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
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
