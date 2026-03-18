/*
 * XREFs of ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x14002FCD4
 * Callers:
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x140009330 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     imp_WdfRequestSend @ 0x140031620 (imp_WdfRequestSend.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x14002FE90 (-DeleteEarlyDisposedObject@FxObject@@IEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x140082D6C (-PostProcessCompletionForReserved@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC7D8 (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PostProcessSendAndForget(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  bool v4; // zf
  FxRequestCompletionState m_CompletionState; // edx
  FxIoQueue *m_IoQueue; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 v8; // r8
  unsigned __int16 v9; // r9
  _LIST_ENTRY *p_m_OwnerListEntry2; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  __int64 RefCount; // rdx
  _LIST_ENTRY *v14; // rcx
  FxVerifierLock *v15; // rcx
  FxVerifierLock *v16; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF

  this->m_Irp.m_Irp = 0LL;
  v4 = this->m_Reserved == 0;
  m_CompletionState = this->m_CompletionState;
  m_IoQueue = this->m_IoQueue;
  this->m_CompletionState = 0;
  if ( v4 )
  {
    if ( m_CompletionState )
    {
      if ( (m_CompletionState & 0x80u) == 0 )
      {
        m_Globals = m_IoQueue->m_Globals;
        PreviousIrql = 0;
        if ( m_Globals->FxVerifierOn )
          FxIoQueue::Vf_VerifyValidateCompletedRequest(m_IoQueue, m_Globals, this);
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v15 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v15, &PreviousIrql, a3);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
        }
        p_m_OwnerListEntry2 = &this->m_OwnerListEntry2;
        Flink = this->m_OwnerListEntry2.Flink;
        if ( Flink->Blink != &this->m_OwnerListEntry2
          || (Blink = this->m_OwnerListEntry2.Blink, Blink->Flink != p_m_OwnerListEntry2) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
        p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
        --m_IoQueue->m_DriverIoCount;
        if ( m_IoQueue->m_Dispatching )
        {
          if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
            && (v16 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
          {
            FxVerifierLock::Unlock(v16, PreviousIrql, v8);
          }
          else
          {
            KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
          }
        }
        else
        {
          FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL, v9);
        }
      }
      FxObject::DeleteEarlyDisposedObject(this);
    }
    else
    {
      RefCount = (unsigned int)_InterlockedIncrement(&this->m_Refcnt);
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        v14 = this[-1].m_OwnerListEntry2.Blink;
        if ( v14 )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)v14,
            (void *)0x706D6F43,
            925,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            RefCount);
      }
      ((void (__fastcall *)(FxRequest *, __int64))this->DeleteObject)(this, RefCount);
    }
  }
  else
  {
    this->m_Completed = 1;
    FxRequest::PostProcessCompletionForReserved(this, m_CompletionState, m_IoQueue);
  }
}
