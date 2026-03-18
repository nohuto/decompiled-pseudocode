/*
 * XREFs of ?DeferredDispatchRequestsFromWorkerThread@FxIoQueue@@QEAAXXZ @ 0x140046BFC
 * Callers:
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x140046BB0 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1400466C8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 */

void __fastcall FxIoQueue::DeferredDispatchRequestsFromWorkerThread(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rdi
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v7; // al
  unsigned __int16 v8; // r9
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  irql = 0;
  if ( m_ObjectFlags < 0 && *p_m_DbgFlagIsInitialized )
  {
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, a3);
    v7 = irql;
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    v7 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v7;
  }
  this->m_RequeueDeferredDispatcher = 0;
  FxIoQueue::DispatchEvents(this, v7, 0LL, v8);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v9);
  else
    irql = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  if ( this->m_Deleted
    || !this->m_RequeueDeferredDispatcher
    || !FxSystemWorkItem::EnqueueWorker(
          this->m_SystemWorkItem,
          (void (__fastcall *)(void *))FxIoQueue::_DeferredDispatchThreadThunk,
          this,
          1u) )
  {
    *(_WORD *)&this->m_WorkItemQueued = 0;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, irql, v10);
  else
    KeReleaseSpinLock(p_m_Lock, irql);
}
