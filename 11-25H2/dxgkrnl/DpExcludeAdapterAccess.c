/*
 * XREFs of DpExcludeAdapterAccess @ 0x14022E1A0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402BC7C8 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpExcludeAdapterAccess(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi
  unsigned int v9; // ebx
  int v10; // r14d
  struct _IO_WORKITEM *WorkItem; // rbp
  __int64 v12; // r9
  _QWORD *Pool2; // rsi
  NTSTATUS v14; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( !DeviceObject || !a3 )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 564;
    return v9;
  }
  DeviceExtension = (struct _IO_REMOVE_LOCK *)DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || LODWORD(DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink) != 1953656900
    || HIDWORD(DeviceExtension->Common.RemoveEvent.Header.WaitListHead.Flink) != 2 )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 582;
    return v9;
  }
  if ( KeGetCurrentIrql() )
  {
    v9 = -1073741811;
    if ( *(_DWORD *)(*((_QWORD *)DeviceObject->DeviceExtension + 5) + 28LL) >= 0x2003u )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
      WdLogGlobalForLineNumber = 595;
    }
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 601;
    return v9;
  }
  if ( ((LODWORD(DeviceExtension[128].Common.RemoveEvent.Header.WaitListHead.Blink) - 1) & 0xFFFFFFFB) == 0 )
  {
    v9 = -1073741661;
    WdLogSingleEntry1(2LL, -1073741661LL);
    WdLogGlobalForLineNumber = 619;
    return v9;
  }
  v10 = a2 & 2;
  if ( (a2 & 2) != 0
    && ((a2 & 1) != 0
     || !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(*(_QWORD *)&DeviceExtension[126].Common.Removed, 2LL)) )
  {
    v9 = -1073741637;
    WdLogSingleEntry1(2LL, -1073741637LL);
    WdLogGlobalForLineNumber = 639;
    return v9;
  }
  if ( (a2 & 4) != 0
    && (!DeviceExtension[94].Common.RemoveEvent.Header.WaitListHead.Flink
     || !DeviceExtension[94].Common.RemoveEvent.Header.WaitListHead.Blink) )
  {
    v9 = -1073741637;
    WdLogSingleEntry1(3LL, DeviceExtension);
    WdLogGlobalForLineNumber = 657;
    return v9;
  }
  WorkItem = IoAllocateWorkItem(DeviceObject);
  if ( !WorkItem )
  {
    v9 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 676;
    return v9;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1953656900LL, v12);
  if ( !Pool2 )
  {
    v9 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 695;
LABEL_29:
    IoFreeWorkItem(WorkItem);
    return v9;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *Pool2 = a3;
  Pool2[1] = a4;
  *((_DWORD *)Pool2 + 4) = a2;
  Pool2[3] = (unsigned __int64)&Event & -(__int64)(v10 != 0);
  v14 = IoAcquireRemoveLockEx(DeviceExtension + 2, WorkItem, File, 1u, 0x20u);
  v9 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry1(3LL, v14);
    WdLogGlobalForLineNumber = 717;
LABEL_28:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_29;
  }
  IoQueueWorkItemEx(WorkItem, DpiFdoExcludeAdapterAccess, DelayedWorkQueue, Pool2);
  if ( v10 )
    v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_28;
  return v9;
}
