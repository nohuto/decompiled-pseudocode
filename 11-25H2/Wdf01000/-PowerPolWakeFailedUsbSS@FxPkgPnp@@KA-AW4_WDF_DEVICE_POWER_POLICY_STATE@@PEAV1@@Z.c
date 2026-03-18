/*
 * XREFs of ?PowerPolWakeFailedUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8E30
 * Callers:
 *     <none>
 * Callees:
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x14003BBB4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x140062648 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x140062884 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWakeFailedUsbSS(FxPkgPnp *This)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  FxPkgPnp::SaveRequestD0IrpReasonHint(This, 15);
  v3 = *(_QWORD *)(v2 + 888);
  if ( *(_BYTE *)(v3 + 689) )
    KeSetEvent(**(PRKEVENT **)(v3 + 616), 0, 0);
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1345;
}
