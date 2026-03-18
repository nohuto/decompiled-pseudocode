/*
 * XREFs of KeInitializeQueue @ 0x1404752D0
 * Callers:
 *     NtCreateIoCompletion @ 0x140A182B0 (NtCreateIoCompletion.c)
 *     EtwpCreateUmReplyObject @ 0x140A74164 (EtwpCreateUmReplyObject.c)
 *     FsRtlInitializeWorkerThread @ 0x140C08408 (FsRtlInitializeWorkerThread.c)
 *     IopInitializePassiveInterruptServices @ 0x140C123F4 (IopInitializePassiveInterruptServices.c)
 *     ExpWorkerFactoryInitialization @ 0x140C324E4 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 */

void __stdcall KeInitializeQueue(PRKQUEUE Queue, ULONG Count)
{
  Queue->Header.Type = 4;
  *(_WORD *)((char *)&Queue->Header.Lock + 1) = 4096;
  Queue->Header.SignalState = 0;
  Queue->Header.WaitListHead.Blink = &Queue->Header.WaitListHead;
  Queue->Header.WaitListHead.Flink = &Queue->Header.WaitListHead;
  Queue->EntryListHead.Blink = &Queue->EntryListHead;
  Queue->EntryListHead.Flink = &Queue->EntryListHead;
  Queue->ThreadListHead.Blink = &Queue->ThreadListHead;
  Queue->ThreadListHead.Flink = &Queue->ThreadListHead;
  Queue->CurrentCount = 0;
  if ( !Count )
    Count = KeQueryActiveProcessorCountEx(0xFFFFu);
  Queue->MaximumCount = Count;
}
