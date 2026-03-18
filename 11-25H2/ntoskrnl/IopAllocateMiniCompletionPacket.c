/*
 * XREFs of IopAllocateMiniCompletionPacket @ 0x1409D26C0
 * Callers:
 *     AlpcpQueueIoCompletionPort @ 0x140280A30 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x140281CC0 (AlpcpQueueIoCompletion.c)
 *     IoSetIoCompletionEx3 @ 0x140282550 (IoSetIoCompletionEx3.c)
 *     AlpcpSignal @ 0x140284330 (AlpcpSignal.c)
 *     IoSetIoCompletionEx2 @ 0x140284DA0 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140285150 (IoSetIoCompletionEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignalAndWait @ 0x140308E00 (AlpcpSignalAndWait.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
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
    result = (PSLIST_ENTRY)ExAllocatePool2(0x41uLL);
  }
  if ( result )
LABEL_4:
    LOBYTE(result[1].Next) = v3;
  return result;
}
