/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1403D5030
 * Callers:
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14018BCE0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401E43D4 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1401FA838 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x1403D4C78 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
        CSERIALIZEDWORKQUEUE ***this,
        void (*a2)(void *),
        void *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  CSERIALIZEDWORKQUEUE *v8; // rbx
  CSERIALIZEDWORKQUEUE **v9; // rcx
  struct _IO_WORKITEM *WorkItem; // rax

  v6 = 0;
  v7 = operator new(0x20uLL, 0x4B677844u, 256LL);
  v8 = (CSERIALIZEDWORKQUEUE *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = a3;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)this);
    v9 = this[7];
    if ( *v9 != (CSERIALIZEDWORKQUEUE *)(this + 6) )
      __fastfail(3u);
    *(_QWORD *)v8 = this + 6;
    *((_QWORD *)v8 + 1) = v9;
    *v9 = v8;
    this[7] = (CSERIALIZEDWORKQUEUE **)v8;
    if ( !*((_BYTE *)this + 64) )
    {
      WorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, CSERIALIZEDWORKQUEUE::SerializedQueueWorker, DelayedWorkQueue, this);
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 1941;
        DxgkLogInternalTriageEvent(
          0LL,
          262145LL,
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
    v6 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 1909;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate serialized work item entry, returning 0x%I64x.",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v6;
}
