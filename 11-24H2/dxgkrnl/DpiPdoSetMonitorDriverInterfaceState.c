/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceState @ 0x1403F7F54
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1404279D4 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x14042B7C0 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoSetMonitorDriverInterfaceState(PVOID Object, char a2)
{
  unsigned int v4; // ebx
  __int64 Pool2; // rdi
  __int64 *v6; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  v4 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1953656900LL);
  if ( Pool2 )
  {
    ObfReferenceObject(Object);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_BYTE *)(Pool2 + 24) = a2;
    KeWaitForSingleObject(&stru_140161168, Executive, 0, 0, 0LL);
    v6 = (__int64 *)qword_1401611A8;
    if ( *(__int64 **)qword_1401611A8 != &qword_1401611A0 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &qword_1401611A0;
    *(_QWORD *)(Pool2 + 8) = v6;
    *v6 = Pool2;
    qword_1401611A8 = Pool2;
    if ( !byte_140161160 )
    {
      WorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( !WorkItem )
      {
        v4 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 4547;
        byte_140161160 = 0;
        goto LABEL_9;
      }
      IoQueueWorkItemEx(
        WorkItem,
        (PIO_WORKITEM_ROUTINE_EX)DpiPdoSetMonitorDriverInterfaceStateWorker,
        DelayedWorkQueue,
        0LL);
    }
    byte_140161160 = 1;
LABEL_9:
    KeReleaseMutex(&stru_140161168, 0);
    return v4;
  }
  v4 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 4500;
  return v4;
}
