/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x1404492D0
 * Callers:
 *     SmpKeyedStoreCreate @ 0x140A42B64 (SmpKeyedStoreCreate.c)
 *     SmProcessDeleteNotification @ 0x140A51570 (SmProcessDeleteNotification.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  __int64 v16; // [rsp+90h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 6832) & 0x3FF;
  WorkItem.List.Blink = 0LL;
  BYTE3(Object) = 0;
  v15 = 0;
  v16 = 0LL;
  v7 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)v4 >> 5));
  v8 = v4;
  if ( v7 )
  {
    v8 = v4 & 0x1F;
    v9 = v7 + 40 * v8;
  }
  else
  {
    v9 = 0LL;
  }
  if ( a3 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v9 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v9 + 34) & 1) == 0 )
  {
    return v3;
  }
  if ( !*(_QWORD *)(a2 + 88) )
  {
    _m_prefetchw((const void *)(v9 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v9 + 34), 2u) & 2) == 0
      && (int)guard_dispatch_icall_no_overrides(a1, &v16, 8LL, v8) >= 0 )
    {
      v13[1] = v13;
      v13[0] = v13;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      WorkItem.List.Blink = 0LL;
      Object = 393216LL;
      v15 = 0;
      v13[2] = a1;
      v14 = v4;
      WorkItem.List.Flink = 0LL;
      if ( v16 )
        ExQueueWorkItemToPartition((ULONG_PTR)&WorkItem, 1, 0xFFFFFFFF, v16);
      else
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v3;
}
