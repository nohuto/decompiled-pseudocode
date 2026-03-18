/*
 * XREFs of ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x14003F6F0
 * Callers:
 *     ?Invoke@FxIoQueueIoCanceledOnQueue@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x14003F5EC (-Invoke@FxIoQueueIoCanceledOnQueue@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x14003F660 (-Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@.c)
 *     ?Invoke@FxDriverDeviceAdd@@QEAAJPEAUWDFDRIVER__@@PEAUWDFDEVICE_INIT@@@Z @ 0x140040DF8 (-Invoke@FxDriverDeviceAdd@@QEAAJPEAUWDFDRIVER__@@PEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z @ 0x140083434 (-Invoke@FxIoQueueIoStop@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@K@Z.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1400A11E4 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxLockedCallback::CallbackEnd(FxLockedCallback *this, __int64 PreviousIrql)
{
  FxCallbackLock *m_CallbackLock; // rcx

  m_CallbackLock = this->m_CallbackLock;
  if ( m_CallbackLock )
    m_CallbackLock->Unlock(m_CallbackLock, PreviousIrql);
}
