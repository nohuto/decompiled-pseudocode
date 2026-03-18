/*
 * XREFs of ?PowerPolSystemWakeDeviceD0PowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A85A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x14003A884 (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceD0PowerRequestFailed(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1389LL;
}
