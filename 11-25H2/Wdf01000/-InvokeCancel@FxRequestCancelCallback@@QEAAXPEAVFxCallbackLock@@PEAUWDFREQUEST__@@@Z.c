/*
 * XREFs of ?InvokeCancel@FxRequestCancelCallback@@QEAAXPEAVFxCallbackLock@@PEAUWDFREQUEST__@@@Z @ 0x1400139CC
 * Callers:
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x140012E54 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestCancelCallback::InvokeCancel(
        FxRequestCancelCallback *this,
        FxCallbackLock *Lock,
        WDFREQUEST__ *Request)
{
  void (__fastcall *m_Cancel)(WDFREQUEST__ *); // rax
  __int64 v7; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->m_Cancel )
  {
    irql = 0;
    if ( Lock )
      Lock->Lock(Lock, &irql);
    m_Cancel = this->m_Cancel;
    this->m_Cancel = 0LL;
    m_Cancel(Request);
    if ( Lock )
    {
      LOBYTE(v7) = irql;
      Lock->Unlock(Lock, v7);
    }
  }
}
