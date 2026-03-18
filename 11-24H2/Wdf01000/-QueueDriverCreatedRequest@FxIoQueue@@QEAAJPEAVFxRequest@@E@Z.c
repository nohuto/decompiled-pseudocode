/*
 * XREFs of ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1400211F8
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x140023560 (imp_WdfRequestForwardToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qLsqd @ 0x1400230F0 (WPP_IFR_SF_qLsqd.c)
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140024910 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 *     ?Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1400DC24C (-Vf_VerifyQueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxIoQueue::QueueDriverCreatedRequest(FxIoQueue *this, FxRequest *Request, unsigned __int8 ParentQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  __int16 v7; // si
  int result; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IRP *m_Irp; // rax
  FxDeviceBase *m_DeviceBase; // r13
  char m_ObjectFlags; // al
  _FX_IO_QUEUE_STATE _a4; // r10d
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned __int8 m_IrpAllocation; // r12
  int *p_m_Refcnt; // r14
  int inserted; // r15d
  unsigned int v19; // edx
  _LIST_ENTRY *Blink; // rcx
  _IRP *v21; // rdx
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v22; // r8
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  int v25; // r14d
  const void *globals; // r8
  const char *_a5; // rdx
  const void *_a3; // rcx
  unsigned __int8 v29; // r8
  _IRP *v30; // rax
  FxVerifierLock *v31; // rcx
  FxVerifierLock *v32; // rcx
  unsigned int v33; // r8d
  unsigned __int8 v34; // r8
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v36; // rax
  FxRequest_vtbl *v37; // rax
  FxVerifierLock *v38; // rcx
  _LIST_ENTRY *v39; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-30h]
  unsigned __int8 PreviousIrql; // [rsp+90h] [rbp+40h] BYREF
  __int16 oldFlags; // [rsp+98h] [rbp+48h] BYREF

  m_Globals = this->m_Globals;
  oldFlags = 0;
  v7 = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyQueueDriverCreatedRequest(this, m_Globals, Request, &oldFlags);
    if ( result < 0 )
      return result;
    v7 = oldFlags;
  }
  if ( ParentQueue )
  {
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    m_Irp = Request->m_Irp.m_Irp;
    --m_Irp->CurrentLocation;
    --m_Irp->Tail.Overlay.CurrentStackLocation;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = this->m_DeviceBase->m_DeviceObject.m_DeviceObject;
  }
  m_DeviceBase = Request->m_DeviceBase;
  Request->m_DeviceBase = this->m_DeviceBase;
  m_ObjectFlags = this->m_ObjectFlags;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0 && (v31 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Lock(v31, &PreviousIrql, ParentQueue);
  else
    PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) == 0 )
  {
    globals = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a5 = "power stopping (Drain) in progress,";
    if ( !Request->m_ObjectSize )
      globals = 0LL;
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    v25 = -1071644156;
    WPP_IFR_SF_qLsqd(this->m_Globals, 3u, (unsigned int)globals, 0x2Bu, RefType, _a3, _a4, _a5, globals, -1071644156);
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v32 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v32, PreviousIrql, v29);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
    }
    Request->m_DeviceBase = m_DeviceBase;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, v7);
    if ( ParentQueue )
    {
      v30 = Request->m_Irp.m_Irp;
      ++v30->CurrentLocation;
      ++v30->Tail.Overlay.CurrentStackLocation;
      memset(
        &Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1],
        0,
        sizeof(Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1]));
    }
    return v25;
  }
  v14 = Request->m_Globals;
  p_m_Queue = &this->m_Queue;
  m_IrpAllocation = Request->m_IrpAllocation;
  if ( v14->FxVerifierOn )
  {
    p_m_Refcnt = &Request->m_Refcnt;
    inserted = FxRequest::Vf_VerifyInsertIrpQueue(Request, v14, &this->m_Queue);
    if ( inserted < 0 )
      goto LABEL_19;
  }
  else
  {
    p_m_Refcnt = &Request->m_Refcnt;
  }
  v19 = _InterlockedIncrement(p_m_Refcnt);
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    Blink = Request[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Blink,
        (void *)0x75657551,
        1900,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        v19);
  }
  v21 = Request->m_Irp.m_Irp;
  v22 = &Request->120;
  Request->m_IrpQueue = p_m_Queue;
  if ( Request == (FxRequest *)-120LL )
  {
    v21->Tail.Overlay.DriverContext[3] = p_m_Queue;
  }
  else
  {
    v21->Tail.Overlay.DriverContext[3] = v22;
    Request->m_CsqContext.Irp = v21;
    Request->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
    v22->m_CsqContext.Type = 1;
  }
  v23 = this->m_Queue.m_Queue.Blink;
  p_ListEntry = &v21->Tail.Overlay.ListEntry;
  if ( (FxIrpQueue *)v23->Flink != p_m_Queue )
    goto LABEL_57;
  v21->Tail.Overlay.ListEntry.Blink = v23;
  p_ListEntry->Flink = &p_m_Queue->m_Queue;
  v23->Flink = p_ListEntry;
  this->m_Queue.m_Queue.Blink = p_ListEntry;
  ++this->m_Queue.m_RequestCount;
  v21->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&v21->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( v21->Cancel && _InterlockedExchange64((volatile __int64 *)&v21->CancelRoutine, 0LL) )
  {
    Flink = p_ListEntry->Flink;
    if ( p_ListEntry->Flink->Blink == p_ListEntry )
    {
      v36 = v21->Tail.Overlay.ListEntry.Blink;
      if ( v36->Flink == p_ListEntry )
      {
        v36->Flink = Flink;
        Flink->Blink = v36;
        v21->Tail.Overlay.ListEntry.Blink = &v21->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        --this->m_Queue.m_RequestCount;
        if ( Request != (FxRequest *)-120LL )
          Request->m_CsqContext.Irp = 0LL;
        v21->Tail.Overlay.DriverContext[3] = 0LL;
        v37 = Request->__vftable;
        Request->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v37->Release(Request, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        goto LABEL_19;
      }
    }
LABEL_57:
    __fastfail(3u);
  }
  inserted = 0;
LABEL_19:
  Request->m_IoQueue = this;
  if ( inserted < 0 )
  {
    v33 = _InterlockedIncrement(p_m_Refcnt);
    if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
    {
      v39 = Request[-1].m_OwnerListEntry2.Blink;
      if ( v39 )
        FxTagTracker::UpdateTagHistory(
          (FxTagTracker *)v39,
          (void *)0x75657551,
          2459,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          v33);
    }
    FxIoQueue::CancelForQueue(this, Request, PreviousIrql);
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v38 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v38, &PreviousIrql, v34);
    }
    else
    {
      PreviousIrql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
  }
  else if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
  {
    FxIoQueue::SetTransitionFromEmpty(this);
  }
  if ( m_IrpAllocation && this->m_Dispatching )
    FxNonPagedObject::Unlock(this, PreviousIrql);
  else
    FxIoQueue::DispatchEvents(this, PreviousIrql, 0LL);
  return 0;
}
