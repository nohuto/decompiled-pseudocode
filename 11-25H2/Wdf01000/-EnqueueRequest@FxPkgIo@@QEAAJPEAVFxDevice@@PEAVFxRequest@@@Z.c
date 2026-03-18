/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140009330
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1400090D0 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140008FD0 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x14000A9C0 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000C1E0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14002FCD4 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1400458F8 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?HasContext@FxRequestBase@@QEAAHXZ @ 0x1400697C8 (-HasContext@FxRequestBase@@QEAAHXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC37C (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1400E3E3C (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a3; // r14
  int result; // eax
  FxIoQueue *m_InternalContext; // rbx
  int MajorFunction; // edx
  int v11; // edx
  int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned __int8 m_CompletionState; // al
  char m_ObjectFlags; // al
  unsigned __int8 v17; // r15
  unsigned int _a4; // edx
  _FX_DRIVER_GLOBALS *v19; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned __int8 m_IrpAllocation; // r15
  unsigned int v22; // edx
  _IRP *m_Irp; // rdx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v24; // rcx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  int v27; // esi
  const void *globals; // rax
  const char *_a5; // rcx
  int v30; // ebp
  unsigned __int8 v31; // r8
  _FX_DRIVER_GLOBALS *v32; // rdx
  FxPkgIo *v33; // rcx
  FxRequest *v34; // rcx
  FxVerifierLock *v35; // rcx
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *v37; // rcx
  _LIST_ENTRY *v38; // rcx
  FxVerifierLock *v39; // rcx
  unsigned __int16 v40; // ax
  const void *v41; // rcx
  const void *v42; // r15
  unsigned __int16 v43; // ax
  const void *v44; // r15
  const void *v45; // rcx
  unsigned int v46; // ebp
  unsigned __int8 v47; // r8
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v49; // rax
  FxRequest_vtbl *v50; // rax
  const void *v51; // rcx
  FxVerifierLock *v52; // rcx
  _LIST_ENTRY *v53; // rcx
  const void *v54; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-58h]
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF
  __int16 origVerifierFlags; // [rsp+90h] [rbp+18h] BYREF

  m_Globals = this->m_Globals;
  _a3 = 0LL;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v54 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !pRequest->m_ObjectSize )
      v54 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v54);
  }
  if ( !m_Globals->FxVerifierOn
    || (result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, pRequest, &origVerifierFlags), result >= 0) )
  {
    m_InternalContext = (FxIoQueue *)pRequest->m_InternalContext;
    pRequest->m_InternalContext = 0LL;
    if ( !m_InternalContext )
    {
      m_InternalContext = this->m_DispatchTable[pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction];
      if ( !m_InternalContext )
      {
        if ( !this->m_Filter )
        {
          v30 = -1073741808;
          v40 = *(_WORD *)(Device + 10);
          v41 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !pRequest->m_ObjectSize )
            v41 = 0LL;
          v42 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v40 )
            v42 = 0LL;
          WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v42, v41, 0xC0000010);
LABEL_83:
          FxVerifierDbgBreakPoint(m_Globals);
$Error:
          if ( m_Globals->FxVerifierOn )
            FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v33, v32, pRequest, origVerifierFlags);
          return v30;
        }
$Forward:
        if ( !FxRequestBase::HasContext(pRequest) )
        {
          FxRequest::PreProcessSendAndForget(v34);
          IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), pRequest->m_Irp.m_Irp);
          FxRequest::PostProcessSendAndForget(pRequest);
          return 0;
        }
        v30 = -1073741808;
        v43 = *(_WORD *)(Device + 10);
        v44 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v43 )
          v44 = 0LL;
        v45 = (const void *)((unsigned __int64)v34 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !pRequest->m_ObjectSize )
          v45 = 0LL;
        WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v45, v44, 0xC0000010);
        goto LABEL_83;
      }
    }
    if ( this->m_Filter
      && m_InternalContext == this->m_DefaultQueue
      && m_InternalContext->m_Type != WdfIoQueueDispatchManual
      && !m_InternalContext->m_IoDefault.Method )
    {
      MajorFunction = pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
      if ( MajorFunction == 15 )
      {
        if ( !m_InternalContext->m_IoInternalDeviceControl.Method )
          goto $Forward;
      }
      else
      {
        if ( !pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction )
          goto $Forward;
        v11 = MajorFunction - 3;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 10 || !m_InternalContext->m_IoDeviceControl.Method )
              goto $Forward;
          }
          else if ( !m_InternalContext->m_IoWrite.Method )
          {
            goto $Forward;
          }
        }
        else if ( !m_InternalContext->m_IoRead.Method )
        {
          goto $Forward;
        }
      }
    }
    v13 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
    if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
    {
      Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
      if ( Blink )
        FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v13);
    }
    v14 = _InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      v37 = pRequest[-1].m_OwnerListEntry2.Blink;
      if ( v37 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v37,
          (void *)0x74617453,
          690,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
          TagAddRef,
          v14);
    }
    if ( pRequest->m_Completed )
    {
      v51 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !pRequest->m_ObjectSize )
        v51 = 0LL;
      WPP_IFR_SF_q(pRequest->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v51);
      FxVerifierDbgBreakPoint(pRequest->m_Globals);
    }
    else
    {
      m_CompletionState = pRequest->m_CompletionState;
      pRequest->m_CompletionState = 0;
      if ( m_CompletionState )
        pRequest->Release(pRequest, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    m_ObjectFlags = m_InternalContext->m_ObjectFlags;
    PreviousIrql = 0;
    if ( m_ObjectFlags < 0
      && (v35 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v35, &PreviousIrql, (unsigned __int8)pRequest);
      v17 = PreviousIrql;
    }
    else
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
      PreviousIrql = v17;
    }
    _a4 = m_InternalContext->m_QueueState;
    if ( (_a4 & 1) == 0 )
    {
      globals = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      _a5 = "power stopping (Drain) in progress,";
      if ( !pRequest->m_ObjectSize )
        globals = 0LL;
      if ( (_a4 & 0x10000) == 0 )
        _a5 = a5;
      if ( m_InternalContext->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      v30 = -1071644156;
      WPP_IFR_SF_qLsqd(
        m_InternalContext->m_Globals,
        3u,
        (unsigned int)a5,
        0x2Bu,
        RefType,
        _a3,
        _a4,
        _a5,
        globals,
        -1071644156);
      if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
        && (v39 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v39, v17, v31);
      }
      else
      {
        KeReleaseSpinLock(&m_InternalContext->m_NPLock.m_Lock, v17);
      }
      m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
      FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateIoPkg);
      pRequest->Release(
        pRequest,
        (void *)1952543827,
        722,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      goto $Error;
    }
    v19 = pRequest->m_Globals;
    p_m_Queue = &m_InternalContext->m_Queue;
    m_IrpAllocation = pRequest->m_IrpAllocation;
    if ( v19->FxVerifierOn && FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v19, &m_InternalContext->m_Queue) < 0 )
    {
      pRequest->m_IoQueue = m_InternalContext;
      goto LABEL_85;
    }
    v22 = _InterlockedIncrement(&pRequest->m_Refcnt);
    if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
    {
      v38 = pRequest[-1].m_OwnerListEntry2.Blink;
      if ( v38 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v38,
          (void *)0x75657551,
          1900,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
          TagAddRef,
          v22);
    }
    m_Irp = pRequest->m_Irp.m_Irp;
    v24 = &pRequest->120;
    pRequest->m_IrpQueue = p_m_Queue;
    if ( pRequest == (FxRequest *)-120LL )
    {
      m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
    }
    else
    {
      m_Irp->Tail.Overlay.DriverContext[3] = v24;
      pRequest->m_CsqContext.Irp = m_Irp;
      pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
      v24->m_CsqContext.Type = 1;
    }
    v25 = m_InternalContext->m_Queue.m_Queue.Blink;
    p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
    if ( (FxIrpQueue *)v25->Flink == p_m_Queue )
    {
      m_Irp->Tail.Overlay.ListEntry.Blink = v25;
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      v25->Flink = p_ListEntry;
      m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
      ++m_InternalContext->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        v27 = 0;
        goto LABEL_33;
      }
      Flink = p_ListEntry->Flink;
      if ( p_ListEntry->Flink->Blink == p_ListEntry )
      {
        v49 = m_Irp->Tail.Overlay.ListEntry.Blink;
        if ( v49->Flink == p_ListEntry )
        {
          v49->Flink = Flink;
          Flink->Blink = v49;
          m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --m_InternalContext->m_Queue.m_RequestCount;
          if ( pRequest != (FxRequest *)-120LL )
            pRequest->m_CsqContext.Irp = 0LL;
          m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
          v50 = pRequest->__vftable;
          pRequest->m_IrpQueue = 0LL;
          v27 = -1073741536;
          v50->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_33:
          pRequest->m_IoQueue = m_InternalContext;
          if ( v27 >= 0 )
          {
            if ( m_InternalContext->m_Queue.m_RequestCount == 1
              || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
            {
              FxIoQueue::SetTransitionFromEmpty(m_InternalContext);
            }
LABEL_36:
            if ( m_IrpAllocation && m_InternalContext->m_Dispatching )
              FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
            else
              FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
            m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
            return 0;
          }
LABEL_85:
          v46 = _InterlockedIncrement(&pRequest->m_Refcnt);
          if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
          {
            v53 = pRequest[-1].m_OwnerListEntry2.Blink;
            if ( v53 )
              FxTagTracker::UpdateTagHistory(
                (FxTagTracker *)v53,
                (void *)0x75657551,
                2459,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
                TagAddRef,
                v46);
          }
          FxIoQueue::CancelForQueue(m_InternalContext, pRequest, PreviousIrql);
          if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
            && (v52 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Lock(v52, &PreviousIrql, v47);
          }
          else
          {
            PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
          }
          goto LABEL_36;
        }
      }
    }
    __fastfail(3u);
  }
  return result;
}
