/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x140037354
 * Callers:
 *     ?PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x140024110 (-PowerPolicyProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 *     imp_WdfTimerStop @ 0x14002C8F0 (imp_WdfTimerStop.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x14002D490 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x140034B30 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x140035420 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1400366C0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140036B90 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
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
