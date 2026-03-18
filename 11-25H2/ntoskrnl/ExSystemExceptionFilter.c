/*
 * XREFs of ExSystemExceptionFilter @ 0x1407A7AE0
 * Callers:
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x14036D940 (NtShutdownWorkerFactory.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1403F03A0 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1403F0C80 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1403F0D40 (EtwpGetFieldValue.c)
 *     NtSetInformationWorkerFactory @ 0x14043ED50 (NtSetInformationWorkerFactory.c)
 *     ExpGetSystemBasicInformation @ 0x14044DD04 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x14045C2B8 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14046B528 (ExpGetSystemEmulationBasicInformation.c)
 *     NtQueryInformationWorkerFactory @ 0x1404CD1F0 (NtQueryInformationWorkerFactory.c)
 *     ExPoolQueryLimits @ 0x140648408 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140648600 (ExPoolSetLimit.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
