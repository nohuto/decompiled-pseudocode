/*
 * XREFs of IovpUnloadDriver @ 0x140B82AF8
 * Callers:
 *     IovUnloadDrivers @ 0x140B8278C (IovUnloadDrivers.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     IopCheckUnloadDriver @ 0x1404D2CBC (IopCheckUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp-18h]
  char v11; // [rsp+90h] [rbp+10h] BYREF

  v11 = 0;
  if ( !Object[13] )
    return 3221225488LL;
  PsReferenceSiloContext(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v11) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v11 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v3 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
    v4 = PsAttachSiloToCurrentThread(v3);
    guard_dispatch_icall_no_overrides(Object, v5, v6, v7);
    PsDetachSiloFromCurrentThread(v4);
  }
  else
  {
    memset_0(&WorkItem, 0, 0x50uLL);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v10 = Object;
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
