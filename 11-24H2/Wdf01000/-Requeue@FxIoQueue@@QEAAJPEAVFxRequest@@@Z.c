/*
 * XREFs of ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x14003DE30
 * Callers:
 *     imp_WdfRequestRequeue @ 0x14003D510 (imp_WdfRequestRequeue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x140021700 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ @ 0x140023E80 (-CheckTransitionFromEmpty@FxIoQueue@@AEAAXXZ.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x14003DD00 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x14003E034 (-RemoveFromDriverOwnedList@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x14003E078 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC8C4 (-Vf_VerifyRequeue@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::Requeue(FxIoQueue *this, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int result; // eax
  unsigned int v6; // edx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 v8; // r8
  unsigned int *v9; // r8
  int inserted; // esi
  unsigned __int16 v11; // r9
  FxVerifierLock *v12; // rcx
  const void *v13; // rcx
  unsigned __int8 v14; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( !m_Globals->FxVerifierOn || (result = FxIoQueue::Vf_VerifyRequeue(this, m_Globals, pRequest), result >= 0) )
  {
    if ( FxRequest::GetCurrentQueue(pRequest)->m_Type == WdfIoQueueDispatchManual )
    {
      v6 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x74617453,
            1992,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v6);
      }
      FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateNone);
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v12 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v12, &irql, v8);
      }
      else
      {
        irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      }
      FxIoQueue::RemoveFromDriverOwnedList(this, pRequest);
      if ( m_Globals->FxVerboseOn )
      {
        v13 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !pRequest->m_ObjectSize )
          v13 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x28u, WPP_FxIoQueue_cpp_Traceguids, v13);
      }
      if ( this->m_CancelDispatchedRequests
        || (inserted = FxRequest::InsertHeadIrpQueue(pRequest, &this->m_Queue, v9), inserted < 0) )
      {
        inserted = 0;
        FxObject::AddRef(
          pRequest,
          (void *)0x75657551,
          2046,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxIoQueue::CancelForQueue(this, pRequest, irql);
        FxNonPagedObject::Lock(this, &irql, v14);
      }
      else
      {
        FxIoQueue::CheckTransitionFromEmpty(this);
      }
      FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
      return inserted;
    }
    else
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x27u, WPP_FxIoQueue_cpp_Traceguids, pRequest, -1073741808);
      FxVerifierDbgBreakPoint(m_Globals);
      return -1073741808;
    }
  }
  return result;
}
