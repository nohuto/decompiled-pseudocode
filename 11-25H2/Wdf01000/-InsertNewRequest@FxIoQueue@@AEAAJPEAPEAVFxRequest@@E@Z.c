/*
 * XREFs of ?InsertNewRequest@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140047420
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000C1E0 (-SetTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x1400487EC (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::InsertNewRequest(FxIoQueue *this, FxRequest **Request, unsigned __int8 PreviousIrql)
{
  FxRequest *v3; // rbx
  int inserted; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // r13
  _LIST_ENTRY *p_ListEntry; // r8
  unsigned int RefCount; // edx
  _IRP *m_Irp; // rdx
  $296A67BADB4D0BFB9E59A0608284FDB2 *v14; // rcx
  _LIST_ENTRY *v15; // rax
  int v16; // r12d
  FxTagTracker *Blink; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v19; // rax
  FxRequest_vtbl *v20; // rax
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // [rsp+68h] [rbp+10h] BYREF

  v3 = *Request;
  if ( !*Request )
    return 0;
  m_Globals = v3->m_Globals;
  p_m_Queue = &this->m_Queue;
  v22 = PreviousIrql;
  if ( m_Globals->FxVerifierOn )
  {
    inserted = FxRequest::Vf_VerifyInsertIrpQueue(v3, m_Globals, &this->m_Queue);
    if ( inserted < 0 )
    {
LABEL_26:
      FxNonPagedObject::Unlock(this, PreviousIrql, (unsigned __int8)p_ListEntry);
      FxRequest::CompleteWithInformation(*Request, inserted, 0LL);
      (*Request)->Release(
        *Request,
        (void *)1886220099,
        2636,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxNonPagedObject::Lock(this, &v22, v21);
      *Request = 0LL;
      return (unsigned int)inserted;
    }
  }
  RefCount = _InterlockedIncrement(&v3->m_Refcnt);
  if ( SLOBYTE(v3->m_ObjectFlags) < 0 )
  {
    Blink = (FxTagTracker *)v3[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        Blink,
        (void *)0x75657551,
        1900,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        RefCount);
  }
  m_Irp = v3->m_Irp.m_Irp;
  v14 = &v3->120;
  v3->m_IrpQueue = p_m_Queue;
  if ( v3 == (FxRequest *)-120LL )
  {
    m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
  }
  else
  {
    m_Irp->Tail.Overlay.DriverContext[3] = v14;
    v3->m_CsqContext.Irp = m_Irp;
    v3->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
    v14->m_CsqContext.Type = 1;
  }
  v15 = p_m_Queue->m_Queue.Blink;
  p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
  if ( (FxIrpQueue *)v15->Flink != p_m_Queue )
    goto LABEL_27;
  m_Irp->Tail.Overlay.ListEntry.Blink = v15;
  p_ListEntry->Flink = &p_m_Queue->m_Queue;
  v15->Flink = p_ListEntry;
  p_m_Queue->m_Queue.Blink = p_ListEntry;
  ++p_m_Queue->m_RequestCount;
  m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
  {
    v16 = 0;
    goto LABEL_12;
  }
  Flink = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry
    || (v19 = m_Irp->Tail.Overlay.ListEntry.Blink, v19->Flink != p_ListEntry) )
  {
LABEL_27:
    __fastfail(3u);
  }
  v19->Flink = Flink;
  Flink->Blink = v19;
  m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --p_m_Queue->m_RequestCount;
  if ( v3 != (FxRequest *)-120LL )
    v3->m_CsqContext.Irp = 0LL;
  m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
  v20 = v3->__vftable;
  v3->m_IrpQueue = 0LL;
  v16 = -1073741536;
  v20->Release(v3, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_12:
  inserted = v16;
  if ( v16 < 0 )
    goto LABEL_26;
  (*Request)->m_IoQueue = this;
  if ( this->m_Queue.m_RequestCount == 1 || this->m_ForceTransitionFromEmptyWhenAddingNewRequest )
  {
    FxIoQueue::SetTransitionFromEmpty(this);
    inserted = v16;
  }
  *Request = 0LL;
  return (unsigned int)inserted;
}
