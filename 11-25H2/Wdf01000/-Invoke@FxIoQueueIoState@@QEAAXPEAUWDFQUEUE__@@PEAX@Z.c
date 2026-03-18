/*
 * XREFs of ?Invoke@FxIoQueueIoState@@QEAAXPEAUWDFQUEUE__@@PEAX@Z @ 0x1400106C0
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x140012FE4 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueueIoState::Invoke(FxIoQueueIoState *this, WDFQUEUE__ *Queue, void *Context)
{
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Context);
    if ( this->m_CallbackLock )
      this->m_CallbackLock->Unlock(this->m_CallbackLock, irql);
  }
}
