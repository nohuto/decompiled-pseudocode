/*
 * XREFs of IopQueueWorkItemProlog @ 0x1402E4B70
 * Callers:
 *     IoTryQueueWorkItem @ 0x140281270 (IoTryQueueWorkItem.c)
 *     IoQueueWorkItem @ 0x1402E4B40 (IoQueueWorkItem.c)
 *     IoQueueWorkItemToNode @ 0x1404821C0 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY v6; // xmm0
  struct _KTHREAD *CurrentThread; // r14
  int v8; // r15d
  PVOID Object; // rbp
  __int64 result; // rax
  KIRQL v11; // al
  KIRQL v12; // r12
  struct _LIST_ENTRY *Flink; // rcx

  if ( (IopIrpExtensionStatus & 1) != 0
    && (IopFunctionPointerMask & 4) != 0
    && KeGetCurrentIrql() < 2u
    && (Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink) != 0LL )
  {
    v6 = *Flink;
  }
  else
  {
    v6 = 0LL;
  }
  *(struct _LIST_ENTRY *)(a1 + 68) = v6;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0;
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( Object && CurrentThread != KeGetCurrentThread() )
    {
      v11 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
      Object = CurrentThread[1].WaitBlock[1].Object;
      v12 = v11;
      if ( Object )
      {
        ObfReferenceObjectWithTag(CurrentThread[1].WaitBlock[1].Object, 0x746C6644u);
        v8 = 1;
      }
      ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v12);
    }
    *(_QWORD *)(a1 + 56) = Object;
    if ( Object )
    {
      if ( !v8 )
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
