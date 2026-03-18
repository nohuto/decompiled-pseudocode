/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x14000A1A0
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x140047E9C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140008FD0 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x14000A9C0 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000C1E0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E3F64 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  FxIoQueue *v6; // rdi
  _FX_DRIVER_GLOBALS *v7; // rdx
  unsigned int v8; // r15d
  FxRequestCompletionState m_CompletionState; // ebp
  unsigned __int8 v10; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // r14
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v14; // r8
  char m_ObjectFlags; // al
  unsigned __int8 v16; // bp
  _FX_IO_QUEUE_STATE _a4; // r10d
  _FX_DRIVER_GLOBALS *v18; // rdx
  FxIrpQueue *p_m_Queue; // rbp
  unsigned __int8 m_IrpAllocation; // r14
  unsigned int v21; // edx
  _IRP *m_Irp; // rdx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v23; // rcx
  _LIST_ENTRY *v24; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  int v26; // ebp
  unsigned __int8 v27; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rbx
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v30; // r8
  const void *globals; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // r8
  unsigned __int8 v37; // al
  _LIST_ENTRY *v38; // rdx
  FxVerifierLock *v39; // rcx
  FxVerifierLock *v40; // rcx
  FxVerifierLock *v41; // rcx
  _LIST_ENTRY *v42; // rcx
  FxVerifierLock *v43; // rcx
  unsigned int v44; // r12d
  unsigned __int8 v45; // r8
  _LIST_ENTRY *v46; // r9
  _LIST_ENTRY *v47; // rax
  FxRequest_vtbl *v48; // rax
  const void *v49; // rcx
  FxVerifierLock *v50; // rcx
  FxVerifierLock *v51; // rcx
  _LIST_ENTRY *v52; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-78h]
  __int16 updated; // [rsp+50h] [rbp-48h]
  unsigned __int8 irql; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+A8h] [rbp+10h] BYREF
  FxRequestCompletionState NewState; // [rsp+B8h] [rbp+20h]

  m_Globals = this->m_Globals;
  irql = 0;
  v6 = this;
  v7 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement(&Request->m_Refcnt);
  v8 = 0;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    this = (FxIoQueue *)Request[-1].m_OwnerListEntry2.Blink;
    if ( this )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)this,
        (void *)0x74617453,
        1399,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        (unsigned int)v7);
  }
  if ( Request->m_Completed )
  {
    NewState = FxRequestCompletionStateNone;
    v49 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Request->m_ObjectSize )
      v49 = 0LL;
    WPP_IFR_SF_q(Request->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v49);
    FxVerifierDbgBreakPoint(Request->m_Globals);
  }
  else
  {
    m_CompletionState = Request->m_CompletionState;
    NewState = m_CompletionState;
    Request->m_CompletionState = 0;
    if ( m_CompletionState )
      Request->Release(Request, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(this, v7, Request);
  else
    updated = 0;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v39 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v39, &irql, (unsigned __int8)DestQueue);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
    irql = v10;
  }
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 )
    goto LABEL_80;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Blink->Flink != p_m_OwnerListEntry2 )
    goto LABEL_80;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v41 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v41, v10, v10);
  else
    KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v10);
  m_ObjectFlags = DestQueue->m_ObjectFlags;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0 && (v40 = *(FxVerifierLock **)&DestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v40, &PreviousIrql, v14);
    v16 = PreviousIrql;
  }
  else
  {
    v16 = KeAcquireSpinLockRaiseToDpc(&DestQueue->m_NPLock.m_Lock);
    PreviousIrql = v16;
  }
  _a4 = DestQueue->m_QueueState;
  if ( (_a4 & 1) == 0 )
  {
    globals = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a5 = "power stopping (Drain) in progress,";
    if ( !Request->m_ObjectSize )
      globals = 0LL;
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    _a3 = (const void *)((unsigned __int64)DestQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !DestQueue->m_ObjectSize )
      _a3 = 0LL;
    v8 = -1071644156;
    WPP_IFR_SF_qLsqd(
      DestQueue->m_Globals,
      3u,
      (unsigned int)globals,
      0x2Bu,
      RefType,
      _a3,
      _a4,
      _a5,
      globals,
      -1071644156);
    if ( SLOBYTE(DestQueue->m_ObjectFlags) < 0
      && (v43 = *(FxVerifierLock **)&DestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v43, v16, v35);
    }
    else
    {
      KeReleaseSpinLock(&DestQueue->m_NPLock.m_Lock, v16);
    }
    FxRequest::SetCompletionState(Request, NewState);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1461,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v50 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v50, &irql, v36);
      v37 = irql;
    }
    else
    {
      v37 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
    }
    v38 = v6->m_DriverOwned.Blink;
    if ( v38->Flink == &v6->m_DriverOwned )
    {
      p_m_OwnerListEntry2->Flink = &v6->m_DriverOwned;
      Request->m_OwnerListEntry2.Blink = v38;
      v38->Flink = p_m_OwnerListEntry2;
      v6->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      FxNonPagedObject::Unlock(v6, v37);
      return v8;
    }
    goto LABEL_80;
  }
  v18 = Request->m_Globals;
  p_m_Queue = &DestQueue->m_Queue;
  m_IrpAllocation = Request->m_IrpAllocation;
  if ( v18->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(Request, v18, &DestQueue->m_Queue) < 0 )
  {
    Request->m_IoQueue = DestQueue;
LABEL_71:
    v44 = _InterlockedIncrement(&Request->m_Refcnt);
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      v52 = Request[-1].m_OwnerListEntry2.Blink;
      if ( v52 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v52,
          (void *)0x75657551,
          2459,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v44);
    }
    FxIoQueue::CancelForQueue(DestQueue, Request, PreviousIrql);
    if ( SLOBYTE(DestQueue->m_ObjectFlags) < 0
      && (v51 = *(FxVerifierLock **)&DestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v51, &PreviousIrql, v45);
    }
    else
    {
      PreviousIrql = KeAcquireSpinLockRaiseToDpc(&DestQueue->m_NPLock.m_Lock);
    }
    goto LABEL_27;
  }
  v21 = _InterlockedIncrement(&Request->m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    v42 = Request[-1].m_OwnerListEntry2.Blink;
    if ( v42 )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)v42,
        (void *)0x75657551,
        1900,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        v21);
  }
  m_Irp = Request->m_Irp.m_Irp;
  v23 = &Request->120;
  Request->m_IrpQueue = p_m_Queue;
  if ( Request == (FxRequest *)-120LL )
  {
    m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
  }
  else
  {
    m_Irp->Tail.Overlay.DriverContext[3] = v23;
    Request->m_CsqContext.Irp = m_Irp;
    Request->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
    v23->m_CsqContext.Type = 1;
  }
  v24 = DestQueue->m_Queue.m_Queue.Blink;
  p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
  if ( (FxIrpQueue *)v24->Flink != p_m_Queue )
    goto LABEL_80;
  m_Irp->Tail.Overlay.ListEntry.Blink = v24;
  p_ListEntry->Flink = &p_m_Queue->m_Queue;
  v24->Flink = p_ListEntry;
  DestQueue->m_Queue.m_Queue.Blink = p_ListEntry;
  ++DestQueue->m_Queue.m_RequestCount;
  m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
  {
    v26 = 0;
    goto LABEL_24;
  }
  v46 = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry
    || (v47 = m_Irp->Tail.Overlay.ListEntry.Blink, v47->Flink != p_ListEntry) )
  {
LABEL_80:
    __fastfail(3u);
  }
  v47->Flink = v46;
  v46->Blink = v47;
  m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --DestQueue->m_Queue.m_RequestCount;
  if ( Request != (FxRequest *)-120LL )
    Request->m_CsqContext.Irp = 0LL;
  m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
  v48 = Request->__vftable;
  Request->m_IrpQueue = 0LL;
  v26 = -1073741536;
  v48->Release(Request, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_24:
  Request->m_IoQueue = DestQueue;
  if ( v26 < 0 )
    goto LABEL_71;
  if ( DestQueue->m_Queue.m_RequestCount == 1 || DestQueue->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    FxIoQueue::SetTransitionFromEmpty(DestQueue);
LABEL_27:
  if ( m_IrpAllocation && DestQueue->m_Dispatching )
    FxNonPagedObject::Unlock(DestQueue, PreviousIrql);
  else
    FxIoQueue::DispatchEvents(DestQueue, PreviousIrql, 0LL);
  p_m_DbgFlagIsInitialized = (FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v27);
    p_m_Lock = &v6->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &v6->m_NPLock.m_Lock;
    irql = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
  }
  --v6->m_DriverIoCount;
  if ( v6->m_Dispatching )
  {
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, irql, v30);
    else
      KeReleaseSpinLock(p_m_Lock, irql);
  }
  else
  {
    FxIoQueue::DispatchEvents(v6, irql, 0LL);
  }
  return v8;
}
