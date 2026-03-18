/*
 * XREFs of ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400795D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14001AB4C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ @ 0x14001B170 (-PowerSendPowerUpEvents@FxPkgPnp@@IEAAXXZ.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x14001B1AC (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x14001B7F8 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingStartSelfManagedIo(FxPkgPnp *This)
{
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx
  __int64 v3; // rdx
  unsigned __int8 v4; // r8
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  FxPkgIo::ResumeProcessingForPower((FxPkgIo *)This->m_DeviceBase[3].m_ChildListHead.Blink);
  m_SelfManagedIoMachine = This->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
  {
    progress = FxCxCallbackProgressInitialized;
    if ( (int)FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, SelfManagedIoEventStart, &progress) < 0 )
      return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 835 : 864;
  }
  FxPkgPnp::PowerSetDevicePowerState(This, (POWER_STATE)1);
  FxPkgPnp::PowerSendPowerUpEvents(This, v3, v4);
  return 787LL;
}
