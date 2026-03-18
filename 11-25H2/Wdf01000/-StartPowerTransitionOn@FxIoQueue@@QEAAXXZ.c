/*
 * XREFs of ?StartPowerTransitionOn@FxIoQueue@@QEAAXXZ @ 0x14001B3F4
 * Callers:
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x14001B1AC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 */

void __fastcall FxIoQueue::StartPowerTransitionOn(FxIoQueue *this, __int64 a2, unsigned __int8 a3)
{
  bool v3; // zf
  unsigned __int16 v5; // r9
  FxVerifierLock *v6; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->m_PowerManaged == 0;
  irql = 0;
  if ( !v3 )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v6 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v6, &irql, a3);
    }
    else
    {
      irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    }
    if ( this->m_Queue.m_RequestCount > 0 )
    {
      this->m_TransitionFromEmpty = 1;
      this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
    }
    FxIoQueue::DispatchEvents(this, irql, 0LL, v5);
  }
}
