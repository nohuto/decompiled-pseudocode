/*
 * XREFs of ?PowerPolWaitingArmedWakeFailedCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8E00
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x140004FB4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x14005F984 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedWakeFailedCancelUsbSS(FxPkgPnp *This)
{
  FxPkgPnp *v1; // rcx

  FxPkgPnp::SaveRequestD0IrpReasonHint(This, 15);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(v1) != 0 ? 1472 : 1345;
}
