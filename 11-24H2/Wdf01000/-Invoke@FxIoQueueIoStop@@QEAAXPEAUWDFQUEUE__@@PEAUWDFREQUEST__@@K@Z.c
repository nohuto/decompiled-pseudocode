/*
 * XREFs of ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x140083434
 * Callers:
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x140028F74 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x14003F6F0 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     ?CallbackStart@FxLockedCallback@@IEAAXPEAE@Z @ 0x140057CC0 (-CallbackStart@FxLockedCallback@@IEAAXPEAE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoQueueIoStop::Invoke(
        FxIoQueueIoStop *this,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ *Request,
        unsigned int ActionFlags)
{
  __int64 v8; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    irql = 0;
    FxLockedCallback::CallbackStart(this, &irql);
    this->Method(Queue, Request, ActionFlags);
    LOBYTE(v8) = irql;
    FxLockedCallback::CallbackEnd(this, v8);
  }
}
