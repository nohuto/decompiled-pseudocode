/*
 * XREFs of ExSystemExceptionFilter @ 0x1407B73D0
 * Callers:
 *     NtShutdownWorkerFactory @ 0x1402BB2B0 (NtShutdownWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x14032BA00 (NtSetInformationWorkerFactory.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1403E84E0 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x1403E8DC0 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x1403E8E80 (EtwpGetFieldValue.c)
 *     ExpGetSystemBasicInformation @ 0x140445844 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x140450658 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x140463660 (ExpGetSystemEmulationBasicInformation.c)
 *     NtQueryInformationWorkerFactory @ 0x1404C6180 (NtQueryInformationWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1404F10C0 (NtGetWriteWatch.c)
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140652BF8 (ExPoolSetLimit.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
