/*
 * XREFs of ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x14003F224
 * Callers:
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x14003EF90 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3050 (-PnpEventFailedInit@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1400141B0 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?ExitThread@FxSystemThread@@QEAAEXZ @ 0x1400ABEA0 (-ExitThread@FxSystemThread@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxPkgPnp::ReleasePowerThread(FxPkgPnp *this, unsigned __int8 a2)
{
  bool v2; // zf
  unsigned __int8 m_HasPowerThread; // al
  FxSystemThread *m_PowerThread; // rcx
  FxCREvent event; // [rsp+20h] [rbp-28h] BYREF

  v2 = this->m_PowerThread == 0LL;
  m_HasPowerThread = this->m_HasPowerThread;
  this->m_HasPowerThread = 0;
  if ( v2 )
  {
    if ( m_HasPowerThread )
      this->m_PowerThreadInterface.Interface.InterfaceDereference(this->m_PowerThreadInterface.Interface.Context);
  }
  else
  {
    FxCREvent::FxCREvent(&event, a2);
    this->m_PowerThreadEvent = &event;
    if ( _InterlockedExchangeAdd(&this->m_PowerThreadInterfaceReferenceCount, 0xFFFFFFFF) > 1 )
      FxCREvent::EnterCRAndWaitAndLeave(&event);
    m_PowerThread = this->m_PowerThread;
    this->m_PowerThreadEvent = 0LL;
    FxSystemThread::ExitThread(m_PowerThread);
    this->m_PowerThread->DeleteObject(this->m_PowerThread);
    this->m_PowerThread = 0LL;
  }
}
