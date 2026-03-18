/*
 * XREFs of ?DxgkCddUnsubscribeWnfStateChange@@YAXPEAU_CDD_WNF_CALLBACK_CONTEXT@@@Z @ 0x1403EEF40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DxgkCddUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *Context)
{
  struct _IO_WORKITEM *WorkItem; // rax

  ExWaitForRundownProtectionRelease(Context + 4);
  WorkItem = IoAllocateWorkItem(g_pDriverObject);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, (PIO_WORKITEM_ROUTINE_EX)DxgkUnsubscribeWnfStateChangeWork, DelayedWorkQueue, Context);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4010;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed allocating workitem to unsubscribe the WNF callback.",
      4010LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
