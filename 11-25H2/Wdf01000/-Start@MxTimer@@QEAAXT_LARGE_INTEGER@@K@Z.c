/*
 * XREFs of ?Start@MxTimer@@QEAAXT_LARGE_INTEGER@@K@Z @ 0x140060E8C
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14000B9E0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14001D210 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 * Callees:
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x140065080 (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 */

void __fastcall MxTimer::Start(MxTimer *this, _LARGE_INTEGER DueTime, unsigned int TolerableDelay)
{
  if ( this->m_Timer.m_IsExtTimer )
    MxTimer::StartWithReturn(this, DueTime, TolerableDelay);
  else
    KeSetCoalescableTimer(
      &this->m_Timer.KernelTimer,
      DueTime,
      this->m_Timer.m_Period,
      TolerableDelay,
      &this->m_Timer.TimerDpc);
}
