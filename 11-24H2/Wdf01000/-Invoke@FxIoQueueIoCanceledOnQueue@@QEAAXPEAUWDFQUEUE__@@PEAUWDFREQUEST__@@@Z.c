/*
 * XREFs of ?Invoke@FxIoQueueIoCanceledOnQueue@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x14003F5EC
 * Callers:
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x14003F498 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x14003F6F0 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueueIoCanceledOnQueue::Invoke(
        FxIoQueueIoCanceledOnQueue *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request)
{
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Request);
    FxLockedCallback::CallbackEnd(this, irql);
  }
}
