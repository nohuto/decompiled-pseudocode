/*
 * XREFs of PsIsServerSilo @ 0x140349B68
 * Callers:
 *     EtwpTraceFileIo @ 0x1402A1C30 (EtwpTraceFileIo.c)
 *     EtwpTraceMessageVa @ 0x140326900 (EtwpTraceMessageVa.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140348330 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetThreadServerSilo @ 0x140348A90 (PsGetThreadServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x140349B30 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x1405E4DF0 (PspJobIsAppSilo.c)
 *     PsIsProcessInAppSilo @ 0x1407721C0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1407723C0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140772754 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140772C34 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x140777E54 (PspSetJobMemoryPartition.c)
 *     IopAllocRealFileObject @ 0x14089A9B0 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     PspJobClose @ 0x1408E9460 (PspJobClose.c)
 *     PspTerminateProcessesJobCallback @ 0x1408EA6B0 (PspTerminateProcessesJobCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408EB088 (EtwpUpdateGlobalGroupMasks.c)
 *     PspGetNextSilo @ 0x1408EBA34 (PspGetNextSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A5B354 (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1504) != 0LL;
}
