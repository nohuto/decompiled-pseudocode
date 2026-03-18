/*
 * XREFs of ??1MxTimer@@QEAA@XZ @ 0x14000AB88
 * Callers:
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x140008F8C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14000B9E0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14001D210 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x14004A538 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x14004BF98 (--1FxTimer@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MxTimer::~MxTimer(MxTimer *this, __int64 a2)
{
  struct _EX_TIMER *m_KernelExTimer; // rcx

  if ( this->m_Timer.m_IsExtTimer )
  {
    m_KernelExTimer = this->m_Timer.m_KernelExTimer;
    if ( m_KernelExTimer )
    {
      LOBYTE(a2) = 1;
      ExDeleteTimer(m_KernelExTimer, a2, 0LL, 0LL);
      this->m_Timer.m_KernelExTimer = 0LL;
    }
  }
}
