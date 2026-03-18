/*
 * XREFs of ?SerializedQueueWorker@CSERIALIZEDWORKQUEUE@@SAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1403EB3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000A520 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CSERIALIZEDWORKQUEUE::SerializedQueueWorker(
        PVOID IoObject,
        DXGFASTMUTEX *Context,
        PIO_WORKITEM IoWorkItem)
{
  void **v5; // rsi
  void ***v6; // rdi
  void **v7; // rax

  if ( Context )
  {
    DXGFASTMUTEX::Acquire(Context);
    if ( !*((_BYTE *)Context + 64) )
    {
      *((_BYTE *)Context + 64) = 1;
      v5 = (void **)((char *)Context + 48);
      while ( 1 )
      {
        v6 = (void ***)*v5;
        if ( *v5 == v5 )
          break;
        if ( v6[1] != v5 || (v7 = *v6, (*v6)[1] != v6) )
          __fastfail(3u);
        *v5 = v7;
        v7[1] = v5;
        DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
        ((void (__fastcall *)(void **))v6[2])(v6[3]);
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
        DXGFASTMUTEX::Acquire(Context);
      }
      *((_BYTE *)Context + 64) = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)Context);
    if ( IoWorkItem )
      IoFreeWorkItem(IoWorkItem);
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1800;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified NULL pContext to CSERIALIZEDWORKQUEUE::SerializedQueueWorker.",
      1800LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
