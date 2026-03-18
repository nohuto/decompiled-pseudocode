/*
 * XREFs of ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1400A6428
 * Callers:
 *     ?PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3470 (-PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A36E0 (-PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x140004FB4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x140024BF0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 */

__int64 __fastcall FxPkgPnp::PnpPowerReferenceDuringQueryPnp(FxPkgPnp *this)
{
  __int64 v1; // rcx
  void *Line; // r9

  if ( !this->m_PowerPolicyMachine.m_Owner )
    return 0LL;
  FxPkgPnp::SaveRequestD0IrpReasonHint(this, 10);
  return FxPowerIdleMachine::PowerReferenceWorker(
           *(FxPowerIdleMachine **)(v1 + 888),
           0,
           (FxPowerReferenceFlags)((_DWORD)Line + 1),
           Line,
           (int)Line,
           (char *)Line);
}
