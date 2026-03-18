/*
 * XREFs of ?_PnpProcessEventInner@FxPkgPnp@@KAXPEAV1@PEAUFxPostProcessInfo@@PEAX@Z @ 0x14003D020
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x14001A750 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14001C030 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z @ 0x14003D2B0 (-PnpProcessEventInner@FxPkgPnp@@IEAAXPEAUFxPostProcessInfo@@@Z.c)
 */

void __fastcall FxPkgPnp::_PnpProcessEventInner(FxPkgPnp *This, _FX_DRIVER_GLOBALS *Info, void *WorkerContext)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rsi
  _FX_DRIVER_GLOBALS *v6; // rdx

  p_m_StateMachineLock = &This->m_PnpMachine.m_StateMachineLock;
  FxWaitLockInternal::AcquireLock(&This->m_PnpMachine.m_StateMachineLock, Info, 0LL);
  FxPkgPnp::PnpProcessEventInner(This, (FxPostProcessInfo *)Info);
  FxWaitLockInternal::ReleaseLock(p_m_StateMachineLock, v6);
}
