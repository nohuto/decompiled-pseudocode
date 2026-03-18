/*
 * XREFs of MiInSwapStore @ 0x140A4A81C
 * Callers:
 *     MmInSwapWorkingSet @ 0x140454FFC (MmInSwapWorkingSet.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     KeQueryPriorityThread @ 0x140375500 (KeQueryPriorityThread.c)
 *     ExQueueWorkItemToPartition @ 0x1403AC7C0 (ExQueueWorkItemToPartition.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     MiGetProcessPartition @ 0x1404402D0 (MiGetProcessPartition.c)
 *     MiInSwapStoreContextDereference @ 0x140A4AA48 (MiInSwapStoreContextDereference.c)
 */

__int64 __fastcall MiInSwapStore(PVOID Object)
{
  __int64 Pool; // rax
  __int64 v3; // rdi
  __int64 ProcessPartition; // rax
  int v5; // r8d
  int v6; // edx

  Pool = MiAllocatePool(0x40uLL, 0x48uLL, 1934847309);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  KeInitializeEvent((PRKEVENT)(Pool + 40), NotificationEvent, 0);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 16) = MiInSwapStoreWorker;
  *(_QWORD *)(v3 + 24) = v3;
  ObfReferenceObjectWithTag(Object, 0x73576D4Du);
  *(_QWORD *)(v3 + 32) = Object;
  *(_DWORD *)(v3 + 64) = 2;
  KeQueryPriorityThread(KeGetCurrentThread());
  ProcessPartition = MiGetProcessPartition((__int64)Object);
  v6 = v5 + 1;
  if ( v5 >= 15 )
    v6 = v5;
  ExQueueWorkItemToPartition((_QWORD *)v3, v6 + 32, 0xFFFFFFFF, *(_QWORD *)(ProcessPartition + 184));
  KeWaitForSingleObject((PVOID)(v3 + 40), WrKernel, 0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
  MiInSwapStoreContextDereference(v3);
  return 0LL;
}
