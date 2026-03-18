/*
 * XREFs of IoQueueWorkItemEx @ 0x1402E56E0
 * Callers:
 *     PnpDeviceCompletionRequestDestroy @ 0x140463AE4 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

void __stdcall IoQueueWorkItemEx(
        PIO_WORKITEM IoWorkItem,
        PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
        WORK_QUEUE_TYPE QueueType,
        PVOID Context)
{
  _ETHREAD *CurrentThread; // rsi
  int v8; // ebp
  _ETHREAD *WorkOnBehalfThread; // rdi
  KIRQL v10; // al
  KIRQL v11; // r14
  _GUID *Flink; // rcx

  if ( (IopIrpExtensionStatus & 1) != 0 && (IopFunctionPointerMask & 4) != 0 && KeGetCurrentIrql() < 2u )
  {
    Flink = (_GUID *)KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
      IoWorkItem->ActivityId = *Flink;
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
    v8 = 0;
    WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
    if ( WorkOnBehalfThread && CurrentThread != (_ETHREAD *)KeGetCurrentThread() )
    {
      v10 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
      WorkOnBehalfThread = (_ETHREAD *)CurrentThread->WorkOnBehalfThread;
      v11 = v10;
      if ( WorkOnBehalfThread )
      {
        ObfReferenceObjectWithTag(CurrentThread->WorkOnBehalfThread, 0x746C6644u);
        v8 = 1;
      }
      ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v11);
    }
    IoWorkItem->WorkOnBehalfThread = WorkOnBehalfThread;
    if ( WorkOnBehalfThread )
    {
      if ( !v8 )
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
  ExQueueWorkItemFromIo((ULONG_PTR)IoWorkItem);
}
