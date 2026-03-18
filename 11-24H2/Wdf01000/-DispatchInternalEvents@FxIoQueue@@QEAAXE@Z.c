/*
 * XREFs of ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1400256A0
 * Callers:
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14003CEFC (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14003E590 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxIoQueue::DispatchInternalEvents(FxIoQueue *this, unsigned __int8 PreviousIrql, unsigned __int8 a3)
{
  if ( this->m_Dispatching )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *(_QWORD *)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized )
      FxVerifierLock::Unlock(*(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized, PreviousIrql, a3);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, PreviousIrql);
  }
  else
  {
    FxIoQueue::DispatchEvents(this, PreviousIrql, 0LL);
  }
}
