/*
 * XREFs of IopCancelIrpsInThreadList @ 0x1408BDA64
 * Callers:
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1408BD868 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     IopCancelSynchronousIrpsForThread @ 0x140A98AD4 (IopCancelSynchronousIrpsForThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInsertQueueApc @ 0x1402EFFB0 (KeInsertQueueApc.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     IopCancelIrpsInCurrentThreadList @ 0x14041AD54 (IopCancelIrpsInCurrentThreadList.c)
 *     KeInitializeApc @ 0x140429EA0 (KeInitializeApc.c)
 */

__int64 __fastcall IopCancelIrpsInThreadList(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdx
  char v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    return IopCancelIrpsInCurrentThreadList(
             *(_QWORD *)(a2 + 88),
             (__int64)CurrentThread,
             *(_QWORD *)(a2 + 96),
             *(_BYTE *)(a2 + 128));
  KeInitializeApc(a2, a1, 0, (__int64)IopCancelIrpsInCurrentThreadListSpecialApc, 0LL, 0LL, 0, 0LL);
  if ( (unsigned __int8)KeInsertQueueApc(a2, (__int64)&v6, 0LL, 0) )
  {
    KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    KeResetEvent((PRKEVENT)(a2 + 104));
    if ( v6 )
    {
      KeInitializeEvent((PRKEVENT)(a2 + 104), NotificationEvent, 0);
      KeInitializeApc(
        a2,
        a1,
        0,
        (__int64)AlpcMessageDeleteProcedure,
        0LL,
        (__int64)IopCancelIrpsInCurrentThreadListApcRoutine,
        0,
        a2);
      if ( (unsigned __int8)KeInsertQueueApc(a2, 0LL, 0LL, 0) )
      {
        KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
        KeResetEvent((PRKEVENT)(a2 + 104));
      }
    }
  }
  return *(unsigned int *)(a2 + 132);
}
