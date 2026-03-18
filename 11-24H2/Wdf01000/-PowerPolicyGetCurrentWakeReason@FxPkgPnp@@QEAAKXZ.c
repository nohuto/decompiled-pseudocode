/*
 * XREFs of ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x14000550C
 * Callers:
 *     ?PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ @ 0x1400054E4 (-PowerPolicyIsWakeEnabled@FxPkgPnp@@QEAAEXZ.c)
 *     ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140074A60 (-PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8050 (-PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolicyGetCurrentWakeReason(FxPkgPnp *this)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned int v2; // edx
  __int64 result; // rax

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v2 = 0;
  if ( m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake && m_Owner->m_ChildrenArmedCount > 0 )
    v2 = 2;
  result = v2 | 1;
  if ( !m_Owner->m_WakeSettings.Enabled )
    return v2;
  return result;
}
