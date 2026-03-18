/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x14001FB34
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14000B9E0 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     imp_WdfTimerStop @ 0x140013A50 (imp_WdfTimerStop.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x140015084 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x14001D210 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x14001DC00 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x14001EEA0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14001F370 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  BOOLEAN result; // al
  struct _EX_TIMER *m_KernelExTimer; // rcx

  result = 1;
  if ( !this->m_Timer.m_IsExtTimer )
    return KeCancelTimer(&this->m_Timer.KernelTimer);
  m_KernelExTimer = this->m_Timer.m_KernelExTimer;
  if ( m_KernelExTimer )
    return ExCancelTimer(m_KernelExTimer, 0LL);
  return result;
}
