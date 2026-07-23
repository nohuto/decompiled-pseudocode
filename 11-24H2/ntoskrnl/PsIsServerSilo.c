/*
 * XREFs of PsIsServerSilo @ 0x1403C35A8
 * Callers:
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpTraceFileIo @ 0x1402D1360 (EtwpTraceFileIo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1403C1D70 (UpcaseUnicodeToSingleByteNHelper.c)
 *     PsGetThreadServerSilo @ 0x1403C24D0 (PsGetThreadServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1403C3570 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x1405E2318 (PspJobIsAppSilo.c)
 *     PsIsProcessInAppSilo @ 0x1407723E0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1407725E0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140772974 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140772E54 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x140778014 (PspSetJobMemoryPartition.c)
 *     PspJobClose @ 0x14085AC90 (PspJobClose.c)
 *     PspTerminateProcessesJobCallback @ 0x14085BEE0 (PspTerminateProcessesJobCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 *     PspGetNextSilo @ 0x14085D264 (PspGetNextSilo.c)
 *     IopAllocRealFileObject @ 0x1408A3050 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A52C64 (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1504) != 0LL;
}
