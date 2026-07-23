/*
 * XREFs of IovpUnloadDriver @ 0x140B84AF8
 * Callers:
 *     IovUnloadDrivers @ 0x140B8478C (IovUnloadDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     IopCheckUnloadDriver @ 0x1404CBE7C (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp-18h]
  char v9; // [rsp+90h] [rbp+10h] BYREF

  v9 = 0;
  if ( !Object[13] )
    return 3221225488LL;
  PsReferenceSiloContext(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v9) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v9 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v3 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v4 = PsAttachSiloToCurrentThread(v3);
    guard_dispatch_icall_no_overrides(Object, v5);
    PsDetachSiloFromCurrentThread(v4);
  }
  else
  {
    memset_0(&WorkItem, 0, 0x50uLL);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = Object;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
    WorkItem.List.Flink = 0LL;
    WorkItem.Parameter = &WorkItem;
    ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  ObMakeTemporaryObject(Object);
  ObfDereferenceObject(Object);
  return 0LL;
}
