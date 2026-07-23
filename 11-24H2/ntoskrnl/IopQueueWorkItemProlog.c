/*
 * XREFs of IopQueueWorkItemProlog @ 0x1403AA050
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1403A9180 (IoQueueWorkItemToNode.c)
 *     IoTryQueueWorkItem @ 0x1403A9FA0 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItem @ 0x1403AA020 (IoQueueWorkItem.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  int v7; // r15d
  PVOID Object; // rbp
  __int64 result; // rax
  KIRQL v10; // al
  KIRQL v11; // r12
  struct _LIST_ENTRY *Flink; // rcx

  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
      *(struct _LIST_ENTRY *)(a1 + 68) = *Flink;
    else
      *(_OWORD *)(a1 + 68) = 0LL;
  }
  else
  {
    *(_OWORD *)(a1 + 68) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0;
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( Object && CurrentThread != KeGetCurrentThread() )
    {
      v10 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
      Object = CurrentThread[1].WaitBlock[1].Object;
      v11 = v10;
      if ( Object )
      {
        ObfReferenceObjectWithTag(CurrentThread[1].WaitBlock[1].Object, 0x746C6644u);
        v7 = 1;
      }
      ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v11);
    }
    *(_QWORD *)(a1 + 56) = Object;
    if ( Object )
    {
      if ( !v7 )
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Padding[3] || PopEnergyEstimationEnabled )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  result = a1;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 48) = a3;
  return result;
}
