/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1403DBA60
 * Callers:
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140189A90 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401DF1D4 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1401F3FEC (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1403DB6A8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140023EE0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
        CSERIALIZEDWORKQUEUE ***this,
        void (*a2)(void *),
        void *a3,
        __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rax
  CSERIALIZEDWORKQUEUE *v9; // rbx
  CSERIALIZEDWORKQUEUE **v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rax

  v7 = 0;
  v8 = operator new(0x20uLL, 0x4B677844u, 256LL, a4);
  v9 = (CSERIALIZEDWORKQUEUE *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = a2;
    *(_QWORD *)(v8 + 24) = a3;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)this);
    v10 = this[7];
    if ( *v10 != (CSERIALIZEDWORKQUEUE *)(this + 6) )
      __fastfail(3u);
    *(_QWORD *)v9 = this + 6;
    *((_QWORD *)v9 + 1) = v10;
    *v10 = v9;
    this[7] = (CSERIALIZEDWORKQUEUE **)v9;
    if ( !*((_BYTE *)this + 64) )
    {
      WorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, CSERIALIZEDWORKQUEUE::SerializedQueueWorker, DelayedWorkQueue, this);
      }
      else
      {
        v7 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1921;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          0xFFFFFFFFLL,
          L"Failed to allocate work item for serialized work queue, returning 0x%I64x.",
          -1073741801LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this);
  }
  else
  {
    v7 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1889;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate serialized work item entry, returning 0x%I64x.",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v7;
}
