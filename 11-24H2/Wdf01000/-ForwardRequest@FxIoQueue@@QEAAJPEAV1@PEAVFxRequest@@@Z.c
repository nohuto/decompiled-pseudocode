/*
 * XREFs of ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1400221F0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140021700 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400230F0 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140024910 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E3F64 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E4898 (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::ForwardRequest(FxIoQueue *this, FxIoQueue *pDestQueue, FxRequest *pRequest)
{
  int inserted; // r15d
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIoQueue *v7; // rdi
  int result; // eax
  _FX_DRIVER_GLOBALS *v9; // r14
  _FX_DRIVER_GLOBALS *v10; // rdx
  FxRequestCompletionState m_CompletionState; // r12d
  __int16 updated; // r13
  KIRQL v13; // dl
  unsigned __int8 v14; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v18; // r8
  char m_ObjectFlags; // al
  _FX_IO_QUEUE_STATE _a4; // r10d
  _FX_DRIVER_GLOBALS *v21; // rdx
  FxIrpQueue *p_m_Queue; // r14
  unsigned __int8 m_IrpAllocation; // r12
  unsigned int v24; // edx
  _LIST_ENTRY *v25; // rcx
  _IRP *m_Irp; // rdx
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v27; // r8
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  unsigned __int8 v30; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rbx
  int v32; // r15d
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v34; // r8
  const void *globals; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v38; // r8
  unsigned __int8 v39; // r8
  KIRQL v40; // al
  _LIST_ENTRY *v41; // rdx
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  FxVerifierLock *v44; // rcx
  FxVerifierLock *v45; // rcx
  unsigned int v46; // r8d
  _LIST_ENTRY *v47; // rcx
  unsigned __int8 v48; // r8
  _LIST_ENTRY *v49; // r9
  _LIST_ENTRY *v50; // rax
  FxRequest_vtbl *v51; // rax
  const void *v52; // rcx
  FxVerifierLock *v53; // rcx
  FxVerifierLock *v54; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-40h]
  _FX_DRIVER_GLOBALS *v56; // [rsp+50h] [rbp-10h]
  KIRQL NewIrql; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B8h] [rbp+58h] BYREF

  inserted = 0;
  m_Globals = this->m_Globals;
  v7 = this;
  if ( !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyForwardRequest(this, m_Globals, pDestQueue, pRequest), result >= 0) )
  {
    v9 = v7->m_Globals;
    v56 = v9;
    NewIrql = 0;
    v10 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      this = (FxIoQueue *)pRequest[-1].m_OwnerListEntry2.Blink;
      if ( this )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)this,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)v10);
    }
    if ( pRequest->m_Completed )
    {
      m_CompletionState = FxRequestCompletionStateNone;
      v52 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v52 = 0LL;
      WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v52);
      FxVerifierDbgBreakPoint(pRequest->m_Globals);
    }
    else
    {
      m_CompletionState = pRequest->m_CompletionState;
      pRequest->m_CompletionState = 0;
      if ( m_CompletionState )
        pRequest->Release(pRequest, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( v9->FxVerifierOn )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(this, v10, pRequest);
    else
      updated = 0;
    if ( SLOBYTE(v7->m_ObjectFlags) < 0 && (v42 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v42, &NewIrql, (unsigned __int8)pRequest);
      v13 = NewIrql;
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      NewIrql = v13;
    }
    p_m_OwnerListEntry2 = &pRequest->m_OwnerListEntry2;
    Flink = pRequest->m_OwnerListEntry2.Flink;
    if ( Flink->Blink != &pRequest->m_OwnerListEntry2 )
      goto LABEL_84;
    Blink = pRequest->m_OwnerListEntry2.Blink;
    if ( Blink->Flink != p_m_OwnerListEntry2 )
      goto LABEL_84;
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    pRequest->m_OwnerListEntry2.Blink = &pRequest->m_OwnerListEntry2;
    p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
    if ( SLOBYTE(v7->m_ObjectFlags) < 0 && (v44 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      FxVerifierLock::Unlock(v44, v13, v14);
    else
      KeReleaseSpinLock(&v7->m_NPLock.m_Lock, v13);
    m_ObjectFlags = pDestQueue->m_ObjectFlags;
    PreviousIrql = 0;
    if ( m_ObjectFlags < 0 && (v43 = *(FxVerifierLock **)&pDestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      FxVerifierLock::Lock(v43, &PreviousIrql, v18);
    else
      PreviousIrql = KeAcquireSpinLockRaiseToDpc(&pDestQueue->m_NPLock.m_Lock);
    _a4 = pDestQueue->m_QueueState;
    if ( (_a4 & 1) == 0 )
    {
      globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a5 = "power stopping (Drain) in progress,";
      if ( !pRequest->m_ObjectSize )
        globals = 0LL;
      if ( (_a4 & 0x10000) == 0 )
        _a5 = a5;
      _a3 = (const void *)((unsigned __int64)pDestQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pDestQueue->m_ObjectSize )
        _a3 = 0LL;
      v32 = -1071644156;
      WPP_IFR_SF_qLsqd(
        pDestQueue->m_Globals,
        3u,
        (unsigned int)globals,
        0x2Bu,
        RefType,
        _a3,
        _a4,
        _a5,
        globals,
        -1071644156);
      if ( SLOBYTE(pDestQueue->m_ObjectFlags) < 0
        && (v45 = *(FxVerifierLock **)&pDestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v45, PreviousIrql, v38);
      }
      else
      {
        KeReleaseSpinLock(&pDestQueue->m_NPLock.m_Lock, PreviousIrql);
      }
      FxRequest::SetCompletionState(pRequest, m_CompletionState);
      if ( v56->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(pRequest, updated);
      pRequest->Release(
        pRequest,
        (void *)1952543827,
        1461,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v53 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v53, &NewIrql, v39);
        v40 = NewIrql;
      }
      else
      {
        v40 = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      }
      v41 = v7->m_DriverOwned.Blink;
      if ( v41->Flink == &v7->m_DriverOwned )
      {
        p_m_OwnerListEntry2->Flink = &v7->m_DriverOwned;
        pRequest->m_OwnerListEntry2.Blink = v41;
        v41->Flink = p_m_OwnerListEntry2;
        v7->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        FxNonPagedObject::Unlock(v7, v40);
        return v32;
      }
      goto LABEL_84;
    }
    v21 = pRequest->m_Globals;
    p_m_Queue = &pDestQueue->m_Queue;
    m_IrpAllocation = pRequest->m_IrpAllocation;
    if ( v21->FxVerifierOn )
    {
      inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v21, &pDestQueue->m_Queue);
      if ( inserted < 0 )
        goto LABEL_30;
      inserted = 0;
    }
    v24 = _InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      v25 = pRequest[-1].m_OwnerListEntry2.Blink;
      if ( v25 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v25,
          (void *)0x75657551,
          1900,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v24);
    }
    m_Irp = pRequest->m_Irp.m_Irp;
    v27 = &pRequest->120;
    pRequest->m_IrpQueue = p_m_Queue;
    if ( pRequest == (FxRequest *)-120LL )
    {
      m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
    }
    else
    {
      m_Irp->Tail.Overlay.DriverContext[3] = v27;
      pRequest->m_CsqContext.Irp = m_Irp;
      pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
      v27->m_CsqContext.Type = 1;
    }
    v28 = pDestQueue->m_Queue.m_Queue.Blink;
    p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
    if ( (FxIrpQueue *)v28->Flink != p_m_Queue )
      goto LABEL_84;
    m_Irp->Tail.Overlay.ListEntry.Blink = v28;
    p_ListEntry->Flink = &p_m_Queue->m_Queue;
    v28->Flink = p_ListEntry;
    pDestQueue->m_Queue.m_Queue.Blink = p_ListEntry;
    ++pDestQueue->m_Queue.m_RequestCount;
    m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
    if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
    {
      v49 = p_ListEntry->Flink;
      if ( p_ListEntry->Flink->Blink == p_ListEntry )
      {
        v50 = m_Irp->Tail.Overlay.ListEntry.Blink;
        if ( v50->Flink == p_ListEntry )
        {
          v50->Flink = v49;
          v49->Blink = v50;
          m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --pDestQueue->m_Queue.m_RequestCount;
          if ( pRequest != (FxRequest *)-120LL )
            pRequest->m_CsqContext.Irp = 0LL;
          m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
          v51 = pRequest->__vftable;
          pRequest->m_IrpQueue = 0LL;
          inserted = -1073741536;
          v51->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          goto LABEL_30;
        }
      }
LABEL_84:
      __fastfail(3u);
    }
LABEL_30:
    pRequest->m_IoQueue = pDestQueue;
    if ( inserted < 0 )
    {
      v46 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        v47 = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( v47 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v47,
            (void *)0x75657551,
            2459,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v46);
      }
      FxIoQueue::CancelForQueue(pDestQueue, pRequest, PreviousIrql);
      if ( SLOBYTE(pDestQueue->m_ObjectFlags) < 0
        && (v54 = *(FxVerifierLock **)&pDestQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v54, &PreviousIrql, v48);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&pDestQueue->m_NPLock.m_Lock);
      }
    }
    else if ( pDestQueue->m_Queue.m_RequestCount == 1 || pDestQueue->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      FxIoQueue::SetTransitionFromEmpty(pDestQueue);
    }
    if ( m_IrpAllocation && pDestQueue->m_Dispatching )
      FxNonPagedObject::Unlock(pDestQueue, PreviousIrql);
    else
      FxIoQueue::DispatchEvents(pDestQueue, PreviousIrql, 0LL);
    p_m_DbgFlagIsInitialized = (FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized;
    v32 = 0;
    if ( SLOBYTE(v7->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    {
      FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &NewIrql, v30);
      p_m_Lock = &v7->m_NPLock.m_Lock;
    }
    else
    {
      p_m_Lock = &v7->m_NPLock.m_Lock;
      NewIrql = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
    }
    --v7->m_DriverIoCount;
    if ( v7->m_Dispatching )
    {
      if ( SLOBYTE(v7->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
        FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, NewIrql, v34);
      else
        KeReleaseSpinLock(p_m_Lock, NewIrql);
    }
    else
    {
      FxIoQueue::DispatchEvents(v7, NewIrql, 0LL);
    }
    return v32;
  }
  return result;
}
