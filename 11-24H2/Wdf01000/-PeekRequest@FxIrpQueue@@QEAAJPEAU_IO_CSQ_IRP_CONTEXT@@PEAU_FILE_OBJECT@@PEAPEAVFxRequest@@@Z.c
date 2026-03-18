/*
 * XREFs of ?PeekRequest@FxIrpQueue@@QEAAJPEAU_IO_CSQ_IRP_CONTEXT@@PEAU_FILE_OBJECT@@PEAPEAVFxRequest@@@Z @ 0x14002E2D0
 * Callers:
 *     ?PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV2@@Z @ 0x14002E108 (-PeekRequest@FxIoQueue@@QEAAJPEAVFxRequest@@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPE.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxIrpQueue::PeekRequest(
        FxIrpQueue *this,
        _IO_CSQ_IRP_CONTEXT *TagContext,
        _FILE_OBJECT *FileObject,
        _IO_CSQ_IRP_CONTEXT **ppOutRequest)
{
  FxIrpQueue *Flink; // r11
  bool v6; // r10
  _IO_CSQ_IRP_CONTEXT *m_LockObject; // rbx
  _IO_CSQ_IRP_CONTEXT *v8; // rbx
  unsigned int RefCount; // edx
  FxTagTracker *v10; // rcx
  int v12; // r8d

  Flink = (FxIrpQueue *)this->m_Queue.Flink;
  v6 = TagContext == 0LL;
  while ( Flink != this )
  {
    if ( !BYTE4(Flink[-3].m_LockObject) )
    {
      m_LockObject = (_IO_CSQ_IRP_CONTEXT *)Flink[-1].m_LockObject;
      if ( v6 )
      {
        if ( !FileObject )
        {
          v8 = m_LockObject - 5;
          RefCount = _InterlockedIncrement((volatile signed __int32 *)&v8->Irp + 1);
          if ( SLOBYTE(v8[1].Type) < 0 )
          {
            v10 = *(FxTagTracker **)&v8[-2].Type;
            if ( v10 )
            {
              v12 = 447;
LABEL_19:
              FxTagTracker::UpdateTagHistory(
                v10,
                0LL,
                v12,
                "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp",
                TagAddRef,
                RefCount);
            }
          }
          goto LABEL_10;
        }
        if ( *(_FILE_OBJECT **)&Flink->m_LockObject->m_SpinLock.m_DbgFlagIsInitialized == FileObject )
        {
          v8 = m_LockObject - 5;
          RefCount = _InterlockedIncrement((volatile signed __int32 *)&v8->Irp + 1);
          if ( SLOBYTE(v8[1].Type) < 0 )
          {
            v10 = *(FxTagTracker **)&v8[-2].Type;
            if ( v10 )
            {
              v12 = 432;
              goto LABEL_19;
            }
          }
LABEL_10:
          *ppOutRequest = v8;
          return 0LL;
        }
      }
      else
      {
        v6 = m_LockObject == TagContext;
      }
    }
    Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
  }
  if ( TagContext )
    return v6 ? -2147483622 : -1073741275;
  else
    return 2147483674LL;
}
