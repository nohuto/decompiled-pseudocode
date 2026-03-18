/*
 * XREFs of ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x140038ED8
 * Callers:
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038A40 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x14003D358 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgIo::FlushAllQueuesByFileObject(FxPkgIo *this, _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // r15
  _LIST_ENTRY *Flink; // rax
  FxIoQueue *p_Blink; // rbx
  _LIST_ENTRY *v11; // rdi
  _LIST_ENTRY *Blink; // rax
  unsigned int RefCount; // edx
  FxTagTracker *v14; // rcx
  _LIST_ENTRY *v15; // rax
  FxVerifierLock *v16; // rcx
  unsigned __int8 v17; // r8
  bool v19; // zf
  unsigned __int16 v20; // r9
  FxIrpQueue *p_m_Queue; // rdi
  FxIrpQueue *i; // rdx
  int *p_m_RequestCount; // rax
  _LIST_ENTRY *v24; // rdx
  __int64 v25; // rcx
  FxIrpQueue *v26; // r8
  FxIrpQueue **v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned __int8 v31; // r8
  unsigned __int8 v32; // r8
  _LIST_ENTRY *v33; // rax
  FxVerifierLock *v34; // rcx
  FxVerifierLock *v35; // rcx
  FxVerifierLock *v36; // rcx
  FxVerifierLock *v37; // rcx
  FxTagTracker *v38; // rcx
  FxIoQueueNode flushBookmark; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+90h] [rbp+40h] BYREF

  m_Globals = this->m_Globals;
  flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
  flushBookmark.m_Type = FxIoQueueNodeTypeBookmark;
  flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
  irql = 0;
  if ( KeGetCurrentIrql() )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v16 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    {
      FxVerifierLock::Lock(v16, &irql, v5);
      v6 = irql;
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v6;
    }
    p_m_IoQueueListHead = &this->m_IoQueueListHead;
    Flink = this->m_IoQueueListHead.Flink;
    if ( Flink->Blink != &this->m_IoQueueListHead )
      goto LABEL_14;
    flushBookmark.m_ListEntry.Flink = this->m_IoQueueListHead.Flink;
    flushBookmark.m_ListEntry.Blink = &this->m_IoQueueListHead;
    p_Blink = 0LL;
    Flink->Blink = (_LIST_ENTRY *)&flushBookmark;
    v11 = flushBookmark.m_ListEntry.Flink;
    p_m_IoQueueListHead->Flink = (_LIST_ENTRY *)&flushBookmark;
    Blink = flushBookmark.m_ListEntry.Blink;
    if ( (FxIoQueueNode *)v11->Blink != &flushBookmark
      || flushBookmark.m_ListEntry.Blink->Flink != (_LIST_ENTRY *)&flushBookmark )
    {
      goto LABEL_14;
    }
    flushBookmark.m_ListEntry.Blink->Flink = v11;
    v11->Blink = Blink;
    flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
    flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
    while ( v11 != p_m_IoQueueListHead )
    {
      if ( LODWORD(v11[1].Flink) == 1 )
      {
LABEL_10:
        p_Blink = (FxIoQueue *)&v11[-57].Blink;
        RefCount = _InterlockedIncrement((volatile signed __int32 *)&v11[-56].Flink + 1);
        if ( ((__int64)v11[-55].Flink & 0x80) != 0 )
        {
          v14 = (FxTagTracker *)v11[-60].Blink;
          if ( v14 )
            FxTagTracker::UpdateTagHistory(
              v14,
              (void *)0x73756C66,
              1687,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              RefCount);
        }
        v15 = v11->Flink;
        if ( v11->Flink->Blink != v11 )
          goto LABEL_14;
        v6 = irql;
        flushBookmark.m_ListEntry.Flink = v11->Flink;
        flushBookmark.m_ListEntry.Blink = v11;
        v15->Blink = (_LIST_ENTRY *)&flushBookmark;
        v11->Flink = (_LIST_ENTRY *)&flushBookmark;
        goto LABEL_18;
      }
      v11 = v11->Flink;
    }
    while ( 1 )
    {
LABEL_18:
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v34 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
        FxVerifierLock::Unlock(v34, v6, v7);
      else
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, v6);
      if ( !p_Blink )
        break;
      v19 = p_Blink->m_SupportForwardProgress == 0;
      PreviousIrql = 0;
      if ( !v19 )
        FxIoQueue::PurgeForwardProgressIrps(p_Blink, FileObject);
      if ( (p_Blink->m_ObjectFlags & 0x80) != 0
        && (v35 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v35, &PreviousIrql, v17);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
      }
      p_m_Queue = &p_Blink->m_Queue;
LABEL_27:
      for ( i = (FxIrpQueue *)p_m_Queue->m_Queue.Flink; ; i = (FxIrpQueue *)i->m_Queue.Flink )
      {
        p_m_RequestCount = 0LL;
        if ( i == p_m_Queue )
          break;
        p_m_RequestCount = &i[-5].m_RequestCount;
        if ( !FileObject || *(_FILE_OBJECT **)(*((_QWORD *)p_m_RequestCount + 23) + 48LL) == FileObject )
          break;
      }
      while ( p_m_RequestCount )
      {
        v24 = (_LIST_ENTRY *)(p_m_RequestCount + 42);
        v25 = _InterlockedExchange64((volatile __int64 *)p_m_RequestCount + 13, 0LL);
        v26 = (FxIrpQueue *)*((_QWORD *)p_m_RequestCount + 21);
        if ( v25 )
        {
          if ( v26->m_Queue.Blink == v24 )
          {
            v27 = (FxIrpQueue **)*((_QWORD *)p_m_RequestCount + 22);
            if ( *v27 == (FxIrpQueue *)v24 )
            {
              *v27 = v26;
              v26->m_Queue.Blink = (_LIST_ENTRY *)v27;
              *((_QWORD *)p_m_RequestCount + 22) = p_m_RequestCount + 42;
              v24->Flink = v24;
              --p_Blink->m_Queue.m_RequestCount;
              v28 = *((_QWORD *)p_m_RequestCount + 18);
              if ( *(_DWORD *)v28 == 1 )
                *(_QWORD *)(v28 + 8) = 0LL;
              *((_QWORD *)p_m_RequestCount + 18) = 0LL;
              v29 = *(_QWORD *)(v28 - 120);
              *(_QWORD *)(v28 + 104) = 0LL;
              (*(void (__fastcall **)(__int64, __int64, __int64, const char *))(v29 + 16))(
                v28 - 120,
                1969583441LL,
                2102LL,
                "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
              v30 = _InterlockedIncrement((volatile signed __int32 *)(v28 - 108));
              if ( *(char *)(v28 - 96) < 0 )
              {
                v38 = *(FxTagTracker **)(v28 - 168);
                if ( v38 )
                  FxTagTracker::UpdateTagHistory(
                    v38,
                    (void *)0x75657551,
                    4330,
                    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                    TagAddRef,
                    v30);
              }
              FxIoQueue::CancelForQueue(p_Blink, (FxRequest *)(v28 - 120), PreviousIrql);
              if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
                && (v37 = *(FxVerifierLock **)&p_Blink[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Lock(v37, &PreviousIrql, v31);
              }
              else
              {
                PreviousIrql = KeAcquireSpinLockRaiseToDpc(&p_Blink->m_NPLock.m_Lock);
              }
              goto LABEL_27;
            }
          }
LABEL_14:
          __fastfail(3u);
        }
        while ( 1 )
        {
          p_m_RequestCount = 0LL;
          if ( v26 == p_m_Queue )
            break;
          p_m_RequestCount = &v26[-5].m_RequestCount;
          if ( !FileObject || *(_FILE_OBJECT **)(*((_QWORD *)p_m_RequestCount + 23) + 48LL) == FileObject )
            break;
          v26 = (FxIrpQueue *)v26->m_Queue.Flink;
        }
      }
      FxIoQueue::DispatchEvents(p_Blink, PreviousIrql, 0LL, v20);
      p_Blink->Release(
        p_Blink,
        (void *)1937075302,
        1442,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( (this->m_ObjectFlags & 0x80) != 0 && (v36 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
      {
        FxVerifierLock::Lock(v36, &irql, v32);
        v6 = irql;
      }
      else
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        irql = v6;
      }
      v11 = flushBookmark.m_ListEntry.Flink;
      v33 = flushBookmark.m_ListEntry.Blink;
      p_Blink = 0LL;
      if ( (FxIoQueueNode *)flushBookmark.m_ListEntry.Flink->Blink != &flushBookmark
        || flushBookmark.m_ListEntry.Blink->Flink != (_LIST_ENTRY *)&flushBookmark )
      {
        goto LABEL_14;
      }
      flushBookmark.m_ListEntry.Blink->Flink = flushBookmark.m_ListEntry.Flink;
      v11->Blink = v33;
      flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
      flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
      while ( v11 != p_m_IoQueueListHead )
      {
        if ( LODWORD(v11[1].Flink) == 1 )
          goto LABEL_10;
        v11 = v11->Flink;
      }
    }
  }
  return 0LL;
}
