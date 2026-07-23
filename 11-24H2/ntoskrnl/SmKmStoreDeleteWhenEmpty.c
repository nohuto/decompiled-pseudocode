/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x140441A20
 * Callers:
 *     SmpKeyedStoreCreate @ 0x140A383F4 (SmpKeyedStoreCreate.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]
  __int64 v15; // [rsp+90h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 6832) & 0x3FF;
  WorkItem.List.Blink = 0LL;
  BYTE3(Object) = 0;
  v14 = 0;
  v15 = 0LL;
  v7 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v4 >> 5));
  if ( v7 )
    v8 = v7 + 40LL * (v4 & 0x1F);
  else
    v8 = 0LL;
  if ( a3 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v8 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v8 + 34) & 1) == 0 )
  {
    return v3;
  }
  if ( !*(_QWORD *)(a2 + 88) )
  {
    _m_prefetchw((const void *)(v8 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v8 + 34), 2u) & 2) == 0
      && (int)guard_dispatch_icall_no_overrides(a1, &v15) >= 0 )
    {
      v12[1] = v12;
      v12[0] = v12;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      WorkItem.List.Blink = 0LL;
      Object = 393216LL;
      v14 = 0;
      v12[2] = a1;
      v13 = v4;
      WorkItem.List.Flink = 0LL;
      if ( v15 )
        ExQueueWorkItemToPartition((ULONG_PTR)&WorkItem, 1, 0xFFFFFFFF, v15);
      else
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v3;
}
