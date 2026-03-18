/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x140016AB0
 * Callers:
 *     imp_WdfIoQueueStop @ 0x140016970 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x140017170 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x140075578 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x140015DB0 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1400481F8 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400483F4 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x140048454 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x140059A20 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14006A560 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  _FX_IO_QUEUE_STATE m_QueueState; // eax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rsi
  unsigned __int8 v14; // al
  unsigned __int16 v15; // r9
  FxVerifierLock *v17; // rcx
  FxVerifierLock *v18; // rcx
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  unsigned __int8 v20; // di
  FxRequest *NextRequest; // rax
  unsigned __int8 v22; // r8
  FxRequest *v23; // r15
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // di
  FxRequest *v26; // rax
  unsigned __int8 v27; // r8
  FxRequest *v28; // rsi
  FxIoQueue *v29; // rcx
  FxIrpQueue *p_m_Queue; // r15
  FxNonPagedObject *v31; // rsi
  FxIrpQueue *Flink; // rax
  FxNonPagedObject *v33; // rcx
  bool v34; // dl
  FxNonPagedObject *m_LockObject; // rsi
  unsigned int v36; // edx
  FxNonPagedObject_vtbl *v37; // rax
  FxVerifierLock *v38; // rcx
  const void *_a1; // rdx
  unsigned __int8 v40; // r8
  const void *v41; // rcx
  unsigned __int8 v42; // r8
  FxRequest *v43; // rcx
  unsigned int *v44; // r8
  const void *v45; // rcx
  const void *v46; // rax
  unsigned int v47; // edx
  FxVerifierLock *v48; // rcx
  FxTagTracker *v49; // rcx
  unsigned int v50; // eax
  FxTagTracker *Blink; // rcx
  FxTagTracker *v52; // rcx
  const void *v53; // rdx
  const void *v54; // rcx
  const void *v55; // rcx
  _LIST_ENTRY fwrIrpList; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  m_Globals = this->m_Globals;
  irql = 0;
  fwrIrpList = 0LL;
  if ( m_ObjectFlags < 0 && (v17 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Lock(v17, &irql, (unsigned __int8)IdleComplete);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741738);
    FxNonPagedObject::Unlock(this, irql, v40);
    return 3221225558LL;
  }
  else
  {
    if ( IdleComplete )
    {
      _a2 = this->m_IdleComplete.Method;
      if ( _a2 )
      {
        v41 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v41 = 0LL;
        WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, v41, _a2, 0xC0000010);
        FxNonPagedObject::Unlock(this, irql, v42);
        return 3221225488LL;
      }
      this->m_IdleComplete.Method = IdleComplete;
      this->m_IdleCompleteContext = Context;
    }
    m_QueueState = this->m_QueueState;
    if ( (m_QueueState & 0x10000) != 0 )
    {
      v53 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v53 = 0LL;
      WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x17u, WPP_FxIoQueue_cpp_Traceguids, v53);
    }
    else
    {
      this->m_QueueState = m_QueueState | 1;
    }
    this->m_QueueState &= ~2u;
    v11 = 1;
    if ( CancelRequests )
    {
      this->m_CancelDispatchedRequests = 1;
      p_m_Queue = &this->m_Queue;
      v31 = 0LL;
LABEL_32:
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      v33 = v31 + 1;
      if ( !v31 )
        v33 = 0LL;
      v34 = v33 == 0LL;
      while ( Flink != p_m_Queue )
      {
        if ( !BYTE4(Flink[-3].m_LockObject) )
        {
          m_LockObject = Flink[-1].m_LockObject;
          if ( v34 )
          {
            v31 = m_LockObject - 1;
            v36 = _InterlockedIncrement(&v31->m_Refcnt);
            if ( SLOBYTE(v31->m_ObjectFlags) < 0 )
            {
              v49 = (FxTagTracker *)v31[-1].m_ChildEntry.Flink;
              if ( v49 )
                FxTagTracker::UpdateTagHistory(
                  v49,
                  0LL,
                  447,
                  "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp",
                  TagAddRef,
                  v36);
            }
            v37 = v31->__vftable;
            HIBYTE(v31[1].m_DisposeSingleEntry.Next) = 1;
            v37->Release(v31, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            v11 = 1;
            goto LABEL_32;
          }
          v34 = m_LockObject == v33;
        }
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( this->m_SupportForwardProgress )
      {
        fwrIrpList.Blink = &fwrIrpList;
        fwrIrpList.Flink = &fwrIrpList;
        FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
      }
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v38 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
          p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
          v38) )
    {
      FxVerifierLock::Unlock(v38, irql, v11);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
      p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
    }
    if ( CancelRequests )
    {
      while ( 1 )
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
        {
          FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v12);
          v20 = irql;
        }
        else
        {
          v20 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v20;
        }
        NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
        v23 = NextRequest;
        if ( !NextRequest )
          break;
        if ( !FxRequest::IsCancelled(NextRequest) && FxRequest::InsertHeadIrpQueue(v43, &this->m_Queue, v44) >= 0 )
          goto LABEL_24;
        v45 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v45 = 0LL;
        if ( v23->m_ObjectSize )
          v46 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v46 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v46, v45);
        v47 = _InterlockedIncrement(&v23->m_Refcnt);
        if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)v23[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x75657551,
              3782,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagAddRef,
              v47);
        }
        FxIoQueue::CancelForQueue(this, v23, irql);
      }
      if ( m_Globals->FxVerboseOn )
      {
        v54 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v54 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v54);
      }
LABEL_24:
      FxNonPagedObject::Unlock(this, v20, v22);
      while ( 1 )
      {
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v48 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v48, &irql, v24);
          v25 = irql;
        }
        else
        {
          v25 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v25;
        }
        v26 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
        v28 = v26;
        if ( !v26 )
          break;
        v26->m_Canceled = 1;
        FxNonPagedObject::Unlock(this, v25, v27);
        v50 = _InterlockedIncrement(&v28->m_Refcnt);
        if ( SLOBYTE(v28->m_ObjectFlags) < 0 )
        {
          v52 = (FxTagTracker *)v28[-1].m_OwnerListEntry2.Blink;
          if ( v52 )
            FxTagTracker::UpdateTagHistory(
              v52,
              (void *)0x75657551,
              3823,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
              TagAddRef,
              v50);
        }
        FxIoQueue::CancelForDriver(this, v28);
      }
      if ( m_Globals->FxVerboseOn )
      {
        v55 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v55 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v55);
      }
      FxNonPagedObject::Unlock(this, v25, v27);
      if ( this->m_SupportForwardProgress )
        FxIoQueue::CancelIrps(v29, &fwrIrpList);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v18 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v18, &irql, v12);
      v14 = irql;
    }
    else
    {
      v14 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    FxIoQueue::DispatchEvents(this, v14, 0LL, v15);
    return 0LL;
  }
}
