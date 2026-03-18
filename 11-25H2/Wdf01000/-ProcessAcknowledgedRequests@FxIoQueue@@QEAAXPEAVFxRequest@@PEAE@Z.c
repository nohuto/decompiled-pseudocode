/*
 * XREFs of ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x14007C57C
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140010844 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140008FD0 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x14000B750 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1400446E0 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1400481B4 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1400481F8 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qqs @ 0x1400A1298 (WPP_IFR_SF_qqs.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueue::ProcessAcknowledgedRequests(
        FxIoQueue *this,
        FxRequest *Request,
        unsigned __int8 *PreviousIrql,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 m_PowerStopState; // r14
  const char *v9; // r8
  const void *v10; // rdx
  const void *v11; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // r8
  unsigned int *v16; // r8
  const _GUID *v17; // [rsp+20h] [rbp-38h]

  m_Globals = this->m_Globals;
  m_PowerStopState = Request->m_PowerStopState;
  if ( m_Globals->FxVerboseOn )
  {
    v9 = "with";
    if ( m_PowerStopState != 2 )
      v9 = "without";
    v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    v11 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Request->m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_qqs(m_Globals, (unsigned __int8)v10, (unsigned int)v9, a4, v17, v11, v10, v9);
  }
  Request->m_PowerStopState = 0;
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  Request->m_OwnerListEntry2.Flink = &Request->m_OwnerListEntry2;
  Blink = this->m_DriverOwned.Blink;
  if ( Blink->Flink != &this->m_DriverOwned )
    __fastfail(3u);
  p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
  Request->m_OwnerListEntry2.Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry2;
  this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
  if ( m_Globals->FxVerifierOn )
    FxObject::AddRef(
      Request,
      (void *)0x646C6F48,
      5702,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxNonPagedObject::Unlock(this, *PreviousIrql, (unsigned __int8)PreviousIrql);
  if ( m_Globals->FxVerifierOn )
  {
    FxRequestBase::ClearVerifierFlags(Request, 512);
    Request->Release(
      Request,
      (void *)1684827976,
      5709,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  }
  if ( m_PowerStopState == 2 )
  {
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(Request, 9);
    FxObject::AddRef(
      Request,
      (void *)0x74617453,
      5733,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
    FxNonPagedObject::Lock(this, PreviousIrql, v15);
    FxIoQueue::RemoveFromDriverOwnedList(this, Request);
    if ( !this->m_CancelDispatchedRequests && FxRequest::InsertHeadIrpQueue(Request, &this->m_Queue, v16) >= 0 )
    {
      FxIoQueue::CheckTransitionFromEmpty(this);
      return;
    }
    FxObject::AddRef(
      Request,
      (void *)0x75657551,
      5777,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxIoQueue::CancelForQueue(this, Request, *PreviousIrql);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v14);
}
