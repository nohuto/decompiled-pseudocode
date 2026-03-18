/*
 * XREFs of PsIsServerSilo @ 0x1403104CC
 * Callers:
 *     EtwpTraceMessageVa @ 0x14030B270 (EtwpTraceMessageVa.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetEffectiveServerSilo @ 0x140310610 (PsGetEffectiveServerSilo.c)
 *     PsGetThreadServerSilo @ 0x140310C30 (PsGetThreadServerSilo.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x140310D10 (UpcaseUnicodeToSingleByteNHelper.c)
 *     EtwpTraceFileIo @ 0x140310FF0 (EtwpTraceFileIo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     PspJobIsAppSilo @ 0x1405D8E54 (PspJobIsAppSilo.c)
 *     PsIsProcessInAppSilo @ 0x140762800 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140762A00 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140762D94 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x14076326C (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x140768374 (PspSetJobMemoryPartition.c)
 *     IopAllocRealFileObject @ 0x14085A290 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x14085F1F0 (IopParseDevice.c)
 *     PspJobClose @ 0x1408DA090 (PspJobClose.c)
 *     PspTerminateProcessesJobCallback @ 0x1408DB2E0 (PspTerminateProcessesJobCallback.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 *     PspGetNextSilo @ 0x1408DC664 (PspGetNextSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A58CFC (PspValidateJobAssignmentSiloPolicy.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1504) != 0LL;
}
