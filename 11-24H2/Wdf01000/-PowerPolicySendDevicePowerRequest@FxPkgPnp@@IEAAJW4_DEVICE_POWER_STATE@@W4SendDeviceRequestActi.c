/*
 * XREFs of ?PowerPolicySendDevicePowerRequest@FxPkgPnp@@IEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@W4RequestDIrpReason@@@Z @ 0x1400302FC
 * Callers:
 *     ?PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z @ 0x14002F5FC (-PowerPolicyPowerDownForSx@FxPkgPnp@@AEAAJW4_DEVICE_POWER_STATE@@W4SendDeviceRequestAction@@@Z.c)
 *     ?PowerPolS0NoWakePowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14002FDB0 (-PowerPolS0NoWakePowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z @ 0x140031F70 (-PowerPolicyCanIdlePowerDown@FxPkgPnp@@AEAAEW4_DEVICE_POWER_STATE@@@Z.c)
 *     ?PowerPolWokeFromS0@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140073D30 (-PowerPolWokeFromS0@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14007AD20 (-PowerPolSystemWakeDeviceWakeEnabledWakeCanceled@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@.c)
 *     ?PowerPolStoppingResetDevice@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8370 (-PowerPolStoppingResetDevice@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolSystemSleepNeedWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A85D0 (-PowerPolSystemSleepNeedWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A8D00 (-PowerPolTimerExpiredWakeCompletedPowerUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x1400076CC (WPP_IFR_SF_dd.c)
 *     ?StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z @ 0x14002FA80 (-StartTrackingDevicePowerIrp@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z @ 0x140030504 (-LogRequestDIrpReason@FxDevicePowerIrpTracker@@QEAAXW4RequestDIrpReason@@E@Z.c)
 *     WPP_IFR_SF_dqqd @ 0x140094414 (WPP_IFR_SF_dqqd.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolicySendDevicePowerRequest(
        FxPkgPnp *this,
        POWER_STATE DeviceState,
        SendDeviceRequestAction Action,
        RequestDIrpReason Reason)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  void (__fastcall *v5)(_DEVICE_OBJECT *, unsigned __int8, _POWER_STATE, void *, _IO_STATUS_BLOCK *); // r13
  FxDevicePowerIrpTracker *p_m_DevicePowerIrpTracker; // rsi
  FxPowerPolicyOwnerSettings *v11; // rax
  int v12; // r14d
  NTSTATUS globals; // ebp
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxPowerPolicyOwnerSettings *v16; // rax
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a4; // rdx
  _LARGE_INTEGER interval; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int8 PowerUp; // [rsp+98h] [rbp+10h]

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  v5 = FxPkgPnp::_PowerPolDevicePowerUpComplete;
  interval.QuadPart = -5000000LL;
  if ( DeviceState.SystemState != PowerSystemWorking )
    v5 = FxPkgPnp::_PowerPolDevicePowerDownComplete;
  p_m_DevicePowerIrpTracker = &m_Owner->m_DevicePowerIrpTracker;
  PowerUp = DeviceState.SystemState == PowerSystemWorking;
  FxDevicePowerIrpTracker::LogRequestDIrpReason(
    p_m_DevicePowerIrpTracker,
    Reason,
    DeviceState.SystemState == PowerSystemWorking);
  if ( (unsigned int)(Reason - 2) <= 1 )
    FxDevicePowerIrpTracker::StartTrackingDevicePowerIrp(p_m_DevicePowerIrpTracker, Reason);
  v11 = this->m_PowerPolicyMachine.m_Owner;
  if ( DeviceState.SystemState == PowerSystemWorking )
    v11->m_RequestedPowerUpIrp = 1;
  else
    v11->m_RequestedPowerDownIrp = 1;
  v12 = 0;
  while ( 1 )
  {
    globals = PoRequestPowerIrp(this->m_DeviceBase->m_DeviceObject.m_DeviceObject, 2u, DeviceState, v5, this, 0LL);
    if ( globals >= 0 )
      break;
    if ( Action )
    {
      KeDelayExecutionThread(0, 0, &interval);
      if ( (unsigned int)++v12 < 0x64 )
        continue;
    }
    FxDevicePowerIrpTracker::LogRequestDIrpReason(p_m_DevicePowerIrpTracker, RequestDIrpFailed, PowerUp);
    if ( (unsigned int)(Reason - 2) <= 1 )
      p_m_DevicePowerIrpTracker->m_DIrpRequestedForSIrp = RequestDIrpReasonInvalid;
    v16 = this->m_PowerPolicyMachine.m_Owner;
    if ( DeviceState.SystemState == PowerSystemWorking )
      v16->m_RequestedPowerUpIrp = 0;
    else
      v16->m_RequestedPowerDownIrp = 0;
    if ( Action == Retry )
    {
      m_DeviceBase = this->m_DeviceBase;
      _a4 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_DeviceBase->m_ObjectSize )
        _a4 = 0LL;
      WPP_IFR_SF_dqqd(
        this->m_Globals,
        (unsigned __int8)_a4,
        0xCu,
        0x27u,
        WPP_PowerPolicyStateMachine_cpp_Traceguids,
        DeviceState.SystemState - 1,
        m_DeviceBase->m_DeviceObject.m_DeviceObject,
        _a4,
        globals);
    }
    break;
  }
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_dd(
      m_Globals,
      5u,
      0xCu,
      0x28u,
      WPP_PowerPolicyStateMachine_cpp_Traceguids,
      DeviceState.SystemState - 1,
      globals);
  return (unsigned int)globals;
}
