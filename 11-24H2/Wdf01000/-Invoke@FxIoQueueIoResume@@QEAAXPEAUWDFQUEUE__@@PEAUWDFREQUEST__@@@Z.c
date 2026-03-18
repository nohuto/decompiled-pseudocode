/*
 * XREFs of ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1400A11E4
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140028F74 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x14003F6F0 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x140057CC0 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueueIoResume::Invoke(FxIoQueueIoResume *this, WDFQUEUE__ *Queue, WDFREQUEST__ *Request)
{
  __int64 v6; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    irql = 0;
    FxLockedCallback::CallbackStart(this, &irql);
    this->Method(Queue, Request);
    LOBYTE(v6) = irql;
    FxLockedCallback::CallbackEnd(this, v6);
  }
}
