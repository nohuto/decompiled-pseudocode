/*
 * XREFs of ?Invoke@FxDriverDeviceAdd@@QEAAJPEAUWDFDRIVER__@@PEAUWDFDEVICE_INIT@@@Z @ 0x14004CC18
 * Callers:
 *     ?AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14004B688 (-AddDevice@FxDriver@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?CallbackEnd@FxLockedCallback@@IEAAXE@Z @ 0x14004B510 (-CallbackEnd@FxLockedCallback@@IEAAXE@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDriverDeviceAdd::Invoke(FxDriverDeviceAdd *this, WDFDRIVER__ *Driver, WDFDEVICE_INIT *DeviceInit)
{
  FxCallbackLock *m_CallbackLock; // rcx
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( !this->Method )
    return 3221225473LL;
  m_CallbackLock = this->m_CallbackLock;
  irql = 0;
  if ( m_CallbackLock )
    m_CallbackLock->Lock(m_CallbackLock, &irql);
  v7 = this->Method(Driver, DeviceInit);
  LOBYTE(v8) = irql;
  v9 = v7;
  FxLockedCallback::CallbackEnd(this, v8);
  return v9;
}
