/*
 * XREFs of ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x14003348C
 * Callers:
 *     imp_WdfDeviceGetSystemPowerAction @ 0x140032E50 (imp_WdfDeviceGetSystemPowerAction.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x140033424 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::GetSystemPowerAction(FxPkgPnp *this)
{
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  unsigned int v4; // edx

  WdfBindInfo = this->m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major <= 1 && (WdfBindInfo->Version.Major != 1 || WdfBindInfo->Version.Minor < 0x1F) )
    return this->m_SystemPowerAction;
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v4 = 0;
  if ( !m_Owner )
    return this->m_SystemPowerAction;
  if ( m_Owner->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp == RequestD0ForS0 )
  {
    return (unsigned int)m_Owner->m_DevicePowerIrpTracker.m_S0PowerAction;
  }
  else if ( m_Owner->m_DevicePowerIrpTracker.m_DIrpRequestedForSIrp == RequestDxForSx )
  {
    return (unsigned int)m_Owner->m_DevicePowerIrpTracker.m_SxPowerAction;
  }
  return v4;
}
