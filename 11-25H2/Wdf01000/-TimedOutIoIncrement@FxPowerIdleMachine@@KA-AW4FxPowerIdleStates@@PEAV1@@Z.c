/*
 * XREFs of ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x14001E6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x14001E738 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutIoIncrement(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp *m_TagTracker; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx

  m_TagTracker = (FxPkgPnp *)This[2].m_TagTracker;
  if ( (This->m_Flags & 0x40) != 0 )
  {
    m_DeviceBase = m_TagTracker->m_DeviceBase;
    m_Globals = m_TagTracker->m_Globals;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 4u, 0xCu, 0xAu, WPP_PowerIdleStateMachine_cpp_Traceguids, _a1);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent(m_TagTracker, PwrPolIoPresent, a3);
    This->m_Flags |= 0x40u;
  }
  return 12LL;
}
