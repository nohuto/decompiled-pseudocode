/*
 * XREFs of LZNT1DecompressChunkNewThread @ 0x1402E24E4
 * Callers:
 *     RtlDecompressBufferLZNT1 @ 0x1409E59D0 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x140A138F0 (RtlDecompressFragmentLZNT1.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     LZNT1DecompressChunk @ 0x1406B5310 (LZNT1DecompressChunk.c)
 */

__int64 __fastcall LZNT1DecompressChunkNewThread(
        __int64 a1,
        unsigned __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned __int64 a4,
        __int64 a5,
        int a6)
{
  struct _WORK_QUEUE_ITEM *v10; // rax
  struct _WORK_QUEUE_ITEM *v11; // rbx
  __int64 v12; // rcx
  KPRIORITY PriorityThread; // eax
  int v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0;
  if ( a2 <= 0x7FFFFFFF0000LL )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v15);
  if ( a4 <= 0x7FFFFFFF0000LL )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v15);
  if ( (__int64)((__int64)a3 - a2) < a6 )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v15);
  v10 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RtlLznt1DecompressChunkLookaside);
  v11 = v10;
  if ( !v10 )
    return LZNT1DecompressChunk(a2, (_DWORD)a3, a4, a5, (__int64)&v15);
  v10->List.Flink = 0LL;
  v12 = a5;
  v10->WorkerRoutine = (void (__fastcall *)(void *))LZNT1DecompressChunkWorkItem;
  v10->Parameter = v10;
  v10[1].Parameter = (void *)v12;
  v10[2].List.Flink = (struct _LIST_ENTRY *)&v10[2].List.Blink;
  v10[1].List.Flink = (struct _LIST_ENTRY *)a2;
  v10[1].List.Blink = a3;
  v10[1].WorkerRoutine = (void (__fastcall *)(void *))a4;
  v10[2].WorkerRoutine = (void (__fastcall *)(void *))a1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  ExQueueWorkItem(v11, (WORK_QUEUE_TYPE)(PriorityThread + 32));
  return 0LL;
}
