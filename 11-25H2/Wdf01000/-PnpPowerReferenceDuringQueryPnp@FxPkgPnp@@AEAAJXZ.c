/*
 * XREFs of ?PnpPowerReferenceDuringQueryPnp@FxPkgPnp@@AEAAJXZ @ 0x1400A6358
 * Callers:
 *     ?PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A33A0 (-PnpEventQueryRemoveEnsureDeviceAwake@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3610 (-PnpEventQueryStopEnsureDeviceAwake@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x14000C4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x14003BBB4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
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
