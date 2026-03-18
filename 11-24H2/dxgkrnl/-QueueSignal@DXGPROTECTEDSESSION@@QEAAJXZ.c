/*
 * XREFs of ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1401F0348
 * Callers:
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1400780D0 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x140076C78 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::QueueSignal(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  struct _IO_WORKITEM *WorkItem; // rsi

  v1 = this + 17;
  if ( ExAcquireRundownProtection(this + 17) )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(this[2].Count + 16) + 216LL));
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1213;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Can't allocate memory to hold IO work item.",
        1213LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ExReleaseRundownProtection(v1);
      return 3221225495LL;
    }
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 1218;
    DXGPROTECTEDSESSION::AddReference((DXGPROTECTEDSESSION *)this, 0);
    IoQueueWorkItemEx(WorkItem, DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine, DelayedWorkQueue, this);
  }
  else
  {
    LOBYTE(this[18].Count) = 1;
  }
  return 0LL;
}
