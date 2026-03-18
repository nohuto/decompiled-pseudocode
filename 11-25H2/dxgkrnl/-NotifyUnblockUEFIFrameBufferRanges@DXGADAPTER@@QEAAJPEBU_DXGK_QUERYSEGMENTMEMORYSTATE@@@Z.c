/*
 * XREFs of ?NotifyUnblockUEFIFrameBufferRanges@DXGADAPTER@@QEAAJPEBU_DXGK_QUERYSEGMENTMEMORYSTATE@@@Z @ 0x140066124
 * Callers:
 *     DxgkUnblockUEFIFrameBufferRangesCB @ 0x14006C9B0 (DxgkUnblockUEFIFrameBufferRangesCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::NotifyUnblockUEFIFrameBufferRanges(
        DXGADAPTER *this,
        const struct _DXGK_QUERYSEGMENTMEMORYSTATE *a2,
        __int64 a3,
        __int64 a4)
{
  UINT NumInvalidMemoryRanges; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // edx
  char *Pool2; // rdi
  struct _IO_WORKITEM *WorkItem; // rbp
  DXGK_MEMORYRANGE *pMemoryRanges; // rcx
  __int64 v14; // rax

  NumInvalidMemoryRanges = a2->NumInvalidMemoryRanges;
  v7 = 0;
  if ( NumInvalidMemoryRanges != 1 )
  {
    v7 = -1073741811;
    WdLogSingleEntry1(2LL, NumInvalidMemoryRanges);
    v8 = a2->NumInvalidMemoryRanges;
    v9 = L"UnblockUEFIFrameBufferRanges: NumUEFIFrameBufferRanges must be 1, but 0x%08X";
    v10 = 0x40000;
    WdLogGlobalForLineNumber = 2616;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, v10, 0xFFFFFFFFLL, v9, v8, 0LL, 0LL, 0LL, 0LL);
    return v7;
  }
  Pool2 = (char *)ExAllocatePool2(64LL, 40LL, 1265072196LL, a4);
  if ( !Pool2 )
  {
    v7 = -1073741670;
    WdLogSingleEntry0(6LL);
    v8 = 2626LL;
    v9 = L"Can't allocate memory to hold IO work item data.";
    WdLogGlobalForLineNumber = 2626;
    v10 = 262145;
    goto LABEL_3;
  }
  WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)this + 27));
  if ( WorkItem )
  {
    pMemoryRanges = a2->pMemoryRanges;
    v14 = *(_QWORD *)((char *)this + 412);
    *(struct _DXGK_QUERYSEGMENTMEMORYSTATE *)(Pool2 + 8) = *a2;
    *((_QWORD *)Pool2 + 2) = Pool2 + 24;
    *(_QWORD *)Pool2 = v14;
    *(DXGK_MEMORYRANGE *)(Pool2 + 24) = *pMemoryRanges;
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 2643;
    IoQueueWorkItemEx(WorkItem, HandleUnblockUEFIFrameBufferRanges, DelayedWorkQueue, Pool2);
  }
  else
  {
    v7 = -1073741670;
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2634;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Can't allocate memory to hold IO work item.",
      2634LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0);
  }
  return v7;
}
