/*
 * XREFs of KeIsThreadRunning @ 0x1403BE4C8
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A3010 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteIrpInFileObjectList @ 0x14031B490 (IopCompleteIrpInFileObjectList.c)
 *     AlpcpSignal @ 0x14031BB60 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x14031C620 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x14031CA10 (KiInsertQueue.c)
 *     KiInsertQueueInternal @ 0x140323B94 (KiInsertQueueInternal.c)
 *     ExQueueWorkItemFromIo @ 0x140323D10 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x140324510 (ExpQueueWorkItem.c)
 *     AlpcpSignalAndWait @ 0x140324E10 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeInsertQueue @ 0x1403BCC20 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403BCD90 (IopPassiveInterruptDpc.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403BCF10 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x1403BD5D0 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x1403BD9A0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403BDE10 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403BE580 (NtReleaseWorkerFactoryWorker.c)
 *     KeTryToInsertQueueApc @ 0x1404CD418 (KeTryToInsertQueueApc.c)
 *     FsRtlpPostStackOverflow @ 0x1405821AC (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405BD220 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140651B10 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
