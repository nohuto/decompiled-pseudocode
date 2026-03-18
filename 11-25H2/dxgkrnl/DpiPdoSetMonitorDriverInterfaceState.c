/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceState @ 0x1403FDF54
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 *     DxgkPowerOnOffMonitor @ 0x140427DC4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiPdoSetMonitorDriverInterfaceState(PVOID Object, char a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 Pool2; // rdi
  __int64 *v8; // rax
  struct _IO_WORKITEM *WorkItem; // rax

  v6 = 0;
  Pool2 = ExAllocatePool2(256LL, 32LL, 1953656900LL, a4);
  if ( Pool2 )
  {
    ObfReferenceObject(Object);
    *(_QWORD *)(Pool2 + 16) = Object;
    *(_BYTE *)(Pool2 + 24) = a2;
    KeWaitForSingleObject(&stru_14015E1A8, Executive, 0, 0, 0LL);
    v8 = (__int64 *)qword_14015E1E8;
    if ( *(__int64 **)qword_14015E1E8 != &qword_14015E1E0 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = &qword_14015E1E0;
    *(_QWORD *)(Pool2 + 8) = v8;
    *v8 = Pool2;
    qword_14015E1E8 = Pool2;
    if ( !byte_14015E1A0 )
    {
      WorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( !WorkItem )
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 4381;
        byte_14015E1A0 = 0;
        goto LABEL_9;
      }
      IoQueueWorkItemEx(
        WorkItem,
        (PIO_WORKITEM_ROUTINE_EX)DpiPdoSetMonitorDriverInterfaceStateWorker,
        DelayedWorkQueue,
        0LL);
    }
    byte_14015E1A0 = 1;
LABEL_9:
    KeReleaseMutex(&stru_14015E1A8, 0);
    return v6;
  }
  v6 = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 4334;
  return v6;
}
