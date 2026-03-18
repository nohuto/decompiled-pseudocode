/*
 * XREFs of ?PowerPolIdleCapableDeviceIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140067520
 * Callers:
 *     <none>
 * Callees:
 *     ?DeclareComponentIdle@FxPoxInterface@@QEAAEXZ @ 0x140067554 (-DeclareComponentIdle@FxPoxInterface@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolIdleCapableDeviceIdle(FxPkgPnp *This)
{
  return FxPoxInterface::DeclareComponentIdle(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) != 0 ? 1286 : 1472;
}
