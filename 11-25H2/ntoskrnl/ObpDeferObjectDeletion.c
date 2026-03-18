/*
 * XREFs of ObpDeferObjectDeletion @ 0x14036FDD8
 * Callers:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x140250FE0 (IopFreeIrp.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402991C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExpFreeOwnerEntry @ 0x14029C030 (ExpFreeOwnerEntry.c)
 *     IoRemoveIoCompletion @ 0x14029E4A0 (IoRemoveIoCompletion.c)
 *     NtSetInformationFile @ 0x1402A04A0 (NtSetInformationFile.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402BC860 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1402C2260 (ObFastDereferenceObjectDeferDelete.c)
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     NtCancelTimer @ 0x1402EB010 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FF6B0 (ExpReleaseResourceForThreadLite.c)
 *     PfSnGetFileInformation @ 0x140302AF0 (PfSnGetFileInformation.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140303750 (NtReleaseWorkerFactoryWorker.c)
 *     IopProcessWorkItem @ 0x140306B80 (IopProcessWorkItem.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140307190 (NtWaitForWorkViaWorkerFactory.c)
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     IopCallDriverReference @ 0x14035D040 (IopCallDriverReference.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     ObpDereferenceNamedObject @ 0x140370914 (ObpDereferenceNamedObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     NtSignalAndWaitForSingleObject @ 0x1403717F0 (NtSignalAndWaitForSingleObject.c)
 *     IopUnloadSafeCompletion @ 0x140371CB0 (IopUnloadSafeCompletion.c)
 *     IopDeleteFileObjectExtension @ 0x140371E50 (IopDeleteFileObjectExtension.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403AAA00 (IoReferenceIoAttributionFromThread.c)
 *     ExReturnPoolQuota @ 0x1403C5CF0 (ExReturnPoolQuota.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     IopReferenceFileObject @ 0x1403F6490 (IopReferenceFileObject.c)
 *     IopFreeWaitCompletionPacket @ 0x14041E430 (IopFreeWaitCompletionPacket.c)
 *     ObDereferenceObjectEx @ 0x140437DB0 (ObDereferenceObjectEx.c)
 *     ObDereferenceObjectExWithTag @ 0x1404381A0 (ObDereferenceObjectExWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 */

void __fastcall ObpDeferObjectDeletion(signed __int64 a1)
{
  signed __int64 v1; // rdx
  signed __int64 i; // rax

  _m_prefetchw(&ObpRemoveObjectList);
  v1 = ObpRemoveObjectList;
  *(_QWORD *)(a1 + 8) = ObpRemoveObjectList;
  for ( i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, v1);
        i != v1;
        i = _InterlockedCompareExchange64(&ObpRemoveObjectList, a1, i) )
  {
    v1 = i;
    *(_QWORD *)(a1 + 8) = i;
  }
  if ( !v1 )
  {
    if ( ObGetCurrentIrql() > 2u )
      KeInsertQueueDpc(&ObpRemoveObjectDpc, 0LL, 0LL);
    else
      ExQueueWorkItem(&ObpRemoveObjectWorkItem, CriticalWorkQueue);
  }
}
