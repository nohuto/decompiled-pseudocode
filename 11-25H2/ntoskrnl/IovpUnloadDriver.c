/*
 * XREFs of IovpUnloadDriver @ 0x140B72AF8
 * Callers:
 *     IovUnloadDrivers @ 0x140B7278C (IovUnloadDrivers.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     IopCheckUnloadDriver @ 0x1404D2DEC (IopCheckUnloadDriver.c)
 *     Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline @ 0x140592580 (Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 */

__int64 __fastcall IovpUnloadDriver(_QWORD *Object)
{
  struct _LIST_ENTRY *v3; // rax
  struct _LIST_ENTRY *v4; // rbx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v7; // [rsp+68h] [rbp-18h]
  char v8; // [rsp+90h] [rbp+10h] BYREF

  v8 = 0;
  if ( !Object[13] )
    return 3221225488LL;
  PsReferenceSiloContext(Object);
  if ( (int)IopCheckUnloadDriver(Object, &v8) >= 0 )
    return 259LL;
  ObfDereferenceObject(Object);
  if ( !v8 )
    return 259LL;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    if ( (unsigned int)Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline() )
    {
      v3 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
      v4 = PsAttachSiloToCurrentThread(v3);
      guard_dispatch_icall_no_overrides(Object);
      PsDetachSiloFromCurrentThread(v4);
    }
    else
    {
      guard_dispatch_icall_no_overrides(Object);
    }
  }
  else
  {
    memset_0(&WorkItem, 0, 0x50uLL);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v7 = Object;
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
