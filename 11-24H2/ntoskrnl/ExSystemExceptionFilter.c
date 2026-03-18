/*
 * XREFs of ExSystemExceptionFilter @ 0x1407B6F80
 * Callers:
 *     NtSetInformationWorkerFactory @ 0x140204420 (NtSetInformationWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     NtShutdownWorkerFactory @ 0x1402C6730 (NtShutdownWorkerFactory.c)
 *     EtwpApplyPayloadFilterInternal @ 0x14032B140 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpApplyPredicate @ 0x14032BA20 (EtwpApplyPredicate.c)
 *     EtwpGetFieldValue @ 0x14032BAE0 (EtwpGetFieldValue.c)
 *     ExpGetSystemBasicInformation @ 0x1404505D4 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemProcessorInformation @ 0x14045B258 (ExpGetSystemProcessorInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14046ABE4 (ExpGetSystemEmulationBasicInformation.c)
 *     NtQueryInformationWorkerFactory @ 0x1404CCDB0 (NtQueryInformationWorkerFactory.c)
 *     NtGetWriteWatch @ 0x1404F3710 (NtGetWriteWatch.c)
 *     ExPoolQueryLimits @ 0x140654308 (ExPoolQueryLimits.c)
 *     ExPoolSetLimit @ 0x140654500 (ExPoolSetLimit.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

_BOOL8 ExSystemExceptionFilter()
{
  return KeGetCurrentThread()->PreviousMode != 0;
}
