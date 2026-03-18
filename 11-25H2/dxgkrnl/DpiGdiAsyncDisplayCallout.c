/*
 * XREFs of DpiGdiAsyncDisplayCallout @ 0x1403DBFE0
 * Callers:
 *     _lambda_5bf16074e78eca97c9745c10e52e39f7_::operator() @ 0x140082390 (_lambda_5bf16074e78eca97c9745c10e52e39f7_--operator().c)
 *     ?SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z @ 0x1403C1F64 (-SubmitBatch@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1403DBEE4 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGdiAsyncDisplayCallout(__int64 a1)
{
  unsigned int v2; // ebx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v4; // r9
  _BYTE *Pool2; // rax

  v2 = 0;
  WorkItem = IoAllocateWorkItem(g_pDriverObject);
  if ( WorkItem )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 16LL, 1953656900LL, v4);
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = a1;
      Pool2[8] = 1;
      IoQueueWorkItemEx(WorkItem, (PIO_WORKITEM_ROUTINE_EX)DpiGdiHandleAsyncDisplayCallout, DelayedWorkQueue, Pool2);
    }
    else
    {
      IoFreeWorkItem(WorkItem);
      v2 = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 276;
    }
  }
  else
  {
    v2 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 263;
  }
  return v2;
}
