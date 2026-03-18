/*
 * XREFs of ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x140049F60
 * Callers:
 *     imp_WdfRequestMarkCancelable @ 0x140049DD0 (imp_WdfRequestMarkCancelable.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14006A560 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BF54 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DC714 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1400E3DA0 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

int __fastcall FxIoQueue::RequestCancelable(
        FxIoQueue *this,
        FxRequest *pRequest,
        unsigned __int8 Cancelable,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *),
        unsigned __int8 FailIfIrpIsCancelled)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  _LIST_ENTRY *p_ListEntry; // r8
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxIrpQueue *p_m_DriverCancelable; // r15
  int inserted; // esi
  unsigned int RefCount; // edx
  _IRP *m_Irp; // rdx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v17; // rcx
  _LIST_ENTRY *v18; // rax
  _IRP *Irp; // r8
  _FX_DRIVER_GLOBALS *v20; // r12
  _FX_DRIVER_GLOBALS *v21; // rdx
  int v22; // r14d
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rcx
  _LIST_ENTRY *v25; // rdx
  FxRequest_vtbl *v26; // rax
  FxVerifierLock *v27; // rcx
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *v29; // rcx
  FxVerifierLock *v30; // rcx
  FxVerifierLock *v31; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v33; // rax
  FxRequest_vtbl *v34; // rax
  unsigned __int8 v35; // dl
  const void *v36; // rdx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( !m_Globals->FxVerifierOn
    || (result = FxIoQueue::Vf_VerifyRequestCancelable(this, m_Globals, pRequest, Cancelable), result >= 0) )
  {
    if ( Cancelable )
    {
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(pRequest, 16);
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v27 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v27, &irql, Cancelable);
      }
      else
      {
        irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      }
      pRequest->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( this->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
        goto LABEL_53;
      }
      v12 = pRequest->m_Globals;
      p_m_DriverCancelable = &this->m_DriverCancelable;
      if ( v12->FxVerifierOn )
      {
        inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v12, &this->m_DriverCancelable);
        if ( inserted < 0 )
        {
LABEL_53:
          v35 = irql;
          if ( FailIfIrpIsCancelled )
          {
            pRequest->m_CancelRoutine.m_Cancel = 0LL;
            FxNonPagedObject::Unlock(this, v35, (unsigned __int8)p_ListEntry);
            if ( m_Globals->FxVerifierOn )
              FxRequestBase::ClearVerifierFlags(pRequest, 16);
          }
          else
          {
            inserted = 0;
            pRequest->m_Canceled = 1;
            FxNonPagedObject::Unlock(this, v35, (unsigned __int8)p_ListEntry);
            FxObject::AddRef(
              pRequest,
              (void *)0x75657551,
              2210,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForDriver(this, pRequest);
          }
          return inserted;
        }
      }
      RefCount = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            RefCount);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v17 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_DriverCancelable;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_DriverCancelable;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v17;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_DriverCancelable;
        v17->m_CsqContext.Type = 1;
      }
      v18 = this->m_DriverCancelable.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v18->Flink == p_m_DriverCancelable )
      {
        m_Irp->Tail.Overlay.ListEntry.Blink = v18;
        p_ListEntry->Flink = &p_m_DriverCancelable->m_Queue;
        v18->Flink = p_ListEntry;
        this->m_DriverCancelable.m_Queue.Blink = p_ListEntry;
        ++this->m_DriverCancelable.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          inserted = 0;
          goto LABEL_17;
        }
        Flink = p_ListEntry->Flink;
        if ( p_ListEntry->Flink->Blink == p_ListEntry )
        {
          v33 = m_Irp->Tail.Overlay.ListEntry.Blink;
          if ( v33->Flink == p_ListEntry )
          {
            v33->Flink = Flink;
            Flink->Blink = v33;
            m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
            p_ListEntry->Flink = p_ListEntry;
            --this->m_DriverCancelable.m_RequestCount;
            if ( pRequest != (FxRequest *)-120LL )
              pRequest->m_CsqContext.Irp = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v34 = pRequest->__vftable;
            pRequest->m_IrpQueue = 0LL;
            inserted = -1073741536;
            v34->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_17:
            if ( inserted >= 0 )
            {
              if ( SLOBYTE(this->m_ObjectFlags) < 0
                && (v29 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v29, irql, (unsigned __int8)p_ListEntry);
              }
              else
              {
                KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
              }
              return inserted;
            }
            goto LABEL_53;
          }
        }
      }
LABEL_55:
      __fastfail(3u);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v30 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v30, &irql, Cancelable);
    }
    else
    {
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    v20 = pRequest->m_Globals;
    if ( !pRequest->m_CsqContext.Irp )
      goto LABEL_36;
    v21 = this->m_DriverCancelable.m_LockObject->m_Globals;
    if ( v21->FxVerifierOn )
      FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(&this->m_DriverCancelable, v21, &pRequest->m_CsqContext);
    Irp = pRequest->m_CsqContext.Irp;
    v22 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    {
      v23 = &Irp->Tail.Overlay.ListEntry;
      v24 = Irp->Tail.Overlay.ListEntry.Flink;
      if ( (void **)v24->Blink != &Irp->Tail.CompletionKey + 6 )
        goto LABEL_55;
      v25 = Irp->Tail.Overlay.ListEntry.Blink;
      if ( v25->Flink != v23 )
        goto LABEL_55;
      v25->Flink = v24;
      v24->Blink = v25;
      Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
      v23->Flink = v23;
      --this->m_DriverCancelable.m_RequestCount;
      pRequest->m_CsqContext.Irp = 0LL;
      Irp->Tail.Overlay.DriverContext[3] = 0LL;
      if ( v20->FxVerifierOn && !pRequest->m_IrpQueue )
      {
        v36 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !pRequest->m_ObjectSize )
          v36 = 0LL;
        WPP_IFR_SF_q(v20, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, v36);
        FxVerifierDbgBreakPoint(v20);
      }
      v26 = pRequest->__vftable;
      pRequest->m_IrpQueue = 0LL;
      v26->Release(pRequest, (void *)1969583441, 2030, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      pRequest->m_CancelRoutine.m_Cancel = 0LL;
    }
    else
    {
LABEL_36:
      v22 = -1073741536;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v31 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v31, irql, (unsigned __int8)Irp);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    }
    if ( m_Globals->FxVerifierOn && v22 >= 0 )
      FxRequestBase::ClearVerifierFlags(pRequest, 16);
    return v22;
  }
  return result;
}
