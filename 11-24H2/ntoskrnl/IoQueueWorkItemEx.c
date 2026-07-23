/*
 * XREFs of IoQueueWorkItemEx @ 0x1402F05B0
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x1402F0434 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItemFromIo @ 0x1402CC8A0 (ExQueueWorkItemFromIo.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  _ETHREAD *CurrentThread; // rsi
  int v9; // ebp
  _ETHREAD *WorkOnBehalfThread; // rdi
  KIRQL v11; // al
  KIRQL v12; // r14
  struct _LIST_ENTRY *Flink; // rcx

  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
      IoWorkItem->ActivityId = (_GUID)*Flink;
    else
      IoWorkItem->ActivityId = 0LL;
  }
  else
  {
    IoWorkItem->ActivityId = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = (_ETHREAD *)KeGetCurrentThread();
    v9 = 0;
    WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
    if ( WorkOnBehalfThread && CurrentThread != (_ETHREAD *)KeGetCurrentThread() )
    {
      v11 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
      WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
      v12 = v11;
      if ( WorkOnBehalfThread )
      {
        ObfReferenceObjectWithTag(CurrentThread->WorkOnBehalfThread, 0x746C6644u);
        v9 = 1;
      }
      ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v12);
    }
    IoWorkItem->WorkOnBehalfThread = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v9 )
        ObfReferenceObjectWithTag(WorkOnBehalfThread, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Padding[3] || PopEnergyEstimationEnabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      IoWorkItem->WorkOnBehalfThread = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(IoWorkItem->IoObject, 0x746C6644u);
  IoWorkItem->Routine = (void (__fastcall *)(void *, void *, _IO_WORKITEM *))WorkerRoutine;
  IoWorkItem->Context = Context;
  ExQueueWorkItemFromIo(IoWorkItem, QueueType);
}
