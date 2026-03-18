/*
 * XREFs of ?PowerPolSleepingWakePowerDown@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007E990
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x140017CDC (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakePowerDown(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicyPowerDownForSx(
         This,
         (_FX_DRIVER_GLOBALS *)(unsigned int)This->m_PowerPolicyMachine.m_Owner->m_WakeSettings.DxState,
         NoRetry);
  v2 = 1472;
  if ( v1 < 0 )
    return 1319;
  return v2;
}
