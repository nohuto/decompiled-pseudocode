/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x140065CA4
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x14006C6D0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2)
{
  UINT NumInvalidMemoryRanges; // eax
  unsigned int v5; // ebx
  __int64 v6; // rax
  const wchar_t *v7; // r9
  __int64 v8; // rdx
  char *Pool2; // rdi
  struct _IO_WORKITEM *WorkItem; // rbp
  DXGK_MEMORYRANGE *pMemoryRanges; // rcx
  __int64 v12; // rax

  NumInvalidMemoryRanges = a2->NumInvalidMemoryRanges;
  v5 = 0;
  if ( NumInvalidMemoryRanges != 1 )
  {
    v5 = -1073741811;
    WdLogSingleEntry1(2LL, NumInvalidMemoryRanges);
    v6 = a2->NumInvalidMemoryRanges;
    v7 = L"UnblockUEFIFrameBufferRanges: NumUEFIFrameBufferRanges must be 1, but 0x%08X";
    v8 = 0x40000LL;
    WdLogGlobalForLineNumber = 2673;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, v8, 0xFFFFFFFFLL, v7, v6, 0LL, 0LL, 0LL, 0LL);
    return v5;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, 40LL, 1265072196LL);
  if ( !Pool2 )
  {
    v5 = -1073741670;
    WdLogSingleEntry0(6LL);
    v6 = 2683LL;
    v7 = L"Can't allocate memory to hold IO work item data.";
    WdLogGlobalForLineNumber = 2683;
    v8 = 262145LL;
    goto LABEL_3;
  }
  WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
  if ( WorkItem )
  {
    pMemoryRanges = a2->pMemoryRanges;
    v12 = *(_QWORD *)((char *)this + 412);
    *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(Pool2 + 8) = *a2;
    *((_QWORD *)Pool2 + 2) = Pool2 + 24;
    *(_QWORD *)Pool2 = v12;
    *(DXGK_MEMORYRANGE *)(Pool2 + 24) = *pMemoryRanges;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2700;
    IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, Pool2);
  }
  else
  {
    v5 = -1073741670;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2691;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Can't allocate memory to hold IO work item.",
      2691LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0);
  }
  return v5;
}
