/*
 * XREFs of ??1MxTimer@@QEAA@XZ @ 0x1400232B8
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x14000BC50 (--1FxRequestBase@@MEAA@XZ.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1400216BC (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140024110 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x140034B30 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x14003E718 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x140040178 (--1FxTimer@@UEAA@XZ.c)
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
