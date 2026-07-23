/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x1409C52D0
 * Callers:
 *     AlpcpSignal @ 0x1402C46F0 (AlpcpSignal.c)
 *     IoSetIoCompletionEx @ 0x1402C51B0 (IoSetIoCompletionEx.c)
 *     AlpcpSignalAndWait @ 0x1402CD9A0 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402D2740 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpQueueIoCompletionPort @ 0x1403ABBA0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x1403AC630 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x1403ACAA0 (IoSetIoCompletionEx3.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1403AD210 (NtReleaseWorkerFactoryWorker.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

PSLIST_ENTRY __fastcall IopAllocateMiniCompletionPacket(char a1, char a2)
{
  char v3; // di
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY result; // rax
  _GENERAL_LOOKASIDE *L; // rbx

  v3 = a1;
  if ( a1 == 4 )
    goto LABEL_5;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[7].P;
  ++P->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[7].L;
  ++L->TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result )
    goto LABEL_4;
  ++L->AllocateMisses;
  if ( !a2 )
  {
LABEL_5:
    result = (PSLIST_ENTRY)ExAllocatePool3(0x40uLL, 1);
  }
  else
  {
    v3 = 3;
    result = (PSLIST_ENTRY)ExAllocatePool2(0x41uLL, 0x38uLL, 0x20706349u);
  }
  if ( result )
LABEL_4:
    LOBYTE(result[1].Next) = v3;
  return result;
}
