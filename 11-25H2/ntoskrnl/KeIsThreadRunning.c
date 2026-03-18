/*
 * XREFs of KeIsThreadRunning @ 0x14028123C
 * Callers:
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     KeInsertQueueEx @ 0x140281900 (KeInsertQueueEx.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     IopInsertIrpInCompletionQueue @ 0x140283BF0 (IopInsertIrpInCompletionQueue.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140285500 (KiInsertQueue.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     IopPassiveInterruptDpc @ 0x140461CF0 (IopPassiveInterruptDpc.c)
 *     KeInsertQueue @ 0x140464700 (KeInsertQueue.c)
 *     KeTryToInsertQueueApc @ 0x1404CD804 (KeTryToInsertQueueApc.c)
 *     FsRtlpPostStackOverflow @ 0x14057E9FC (FsRtlpPostStackOverflow.c)
 *     KeInsertHeadQueue @ 0x1405B9380 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x140645B60 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
