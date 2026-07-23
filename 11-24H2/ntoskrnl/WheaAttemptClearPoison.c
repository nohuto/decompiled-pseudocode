/*
 * XREFs of WheaAttemptClearPoison @ 0x1407C76B0
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x140552D6C (HalpMemoryErrorDeferredHandler.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptClearPoison(__int64 a1, char a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v5[2]; // [rsp+60h] [rbp+17h] BYREF
  char v6; // [rsp+70h] [rbp+27h]
  __int16 v7; // [rsp+71h] [rbp+28h]
  char v8; // [rsp+73h] [rbp+2Ah]
  __int128 v9; // [rsp+74h] [rbp+2Bh] BYREF
  __int64 Event_12; // [rsp+84h] [rbp+3Bh]
  int Event_20; // [rsp+8Ch] [rbp+43h]
  __int64 v12; // [rsp+90h] [rbp+47h]

  WorkItem.List.Blink = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return WheapAttemptPhysicalPageOffline(a1, a1 >> 12, 0, a2, 1, 1, 0, a3);
  Event_12 = 0LL;
  Event_20 = 0;
  v5[0] = a1;
  v5[1] = a1 >> 12;
  v12 = a3;
  v9 = 0LL;
  v6 = a2;
  v7 = 257;
  v8 = 0;
  KeInitializeEvent((PRKEVENT)((char *)&v9 + 4), NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v5;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v9 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v9;
}
