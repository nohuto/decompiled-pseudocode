/*
 * XREFs of ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x14001B594
 * Callers:
 *     ?PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14001B570 (-PowerGotoDNotZeroIoStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140074350 (-PowerGotoDxIoStoppedArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007BDC0 (-PowerGotoDNotZeroIoStoppedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4F60 (-PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z @ 0x14001B478 (-ProcessPowerEvent@FxPowerIdleMachine@@QEAAXW4FxPowerIdleEvents@@@Z.c)
 *     ?PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z @ 0x14001B7F8 (-PowerSetDevicePowerState@FxPkgPnp@@IEAAXW4_WDF_POWER_DEVICE_STATE@@@Z.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x14001B85C (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x14001BB04 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x14001BBCC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x14001E738 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CA64 (WPP_IFR_SF_qqLd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxPkgPnp::PowerGotoDxIoStoppedCommon(FxPkgPnp *this, unsigned __int8 NonPageable)
{
  char v3; // bp
  _WDF_POWER_DEVICE_STATE TargetDevicePowerStateFromPendingDevicePowerDownIrp; // eax
  FxDeviceBase *m_DeviceBase; // r9
  _WDF_POWER_DEVICE_STATE _a4; // esi
  unsigned __int16 m_ObjectSize; // r8
  WDFDEVICE__ *v9; // r9
  int globals; // r8d
  unsigned __int8 v11; // al
  FxDeviceBase *v12; // rcx
  bool v13; // zf
  int (__fastcall *m_Method)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax
  unsigned __int16 v15; // dx
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // dl
  int v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  FxDeviceBase *v21; // rdx
  char v22; // bl
  unsigned __int16 v23; // ax
  WDFDEVICE__ *v24; // rdx
  unsigned __int8 v25; // r8
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  __int64 v27; // rdx
  FxDeviceBase *v29; // rax
  const void *_a2; // rdx
  FxDeviceBase *v31; // rax
  const void *v32; // r10

  v3 = 0;
  TargetDevicePowerStateFromPendingDevicePowerDownIrp = FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
  m_DeviceBase = this->m_DeviceBase;
  _a4 = TargetDevicePowerStateFromPendingDevicePowerDownIrp;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v9 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0ExitPreHardwareDisabled.m_TargetState = TargetDevicePowerStateFromPendingDevicePowerDownIrp;
  if ( !m_ObjectSize )
    v9 = 0LL;
  this->m_DeviceD0ExitPreHardwareDisabled.m_Device = v9;
  globals = FxPrePostCallback::InvokeStateless(&this->m_DeviceD0ExitPreHardwareDisabled);
  if ( globals < 0 )
  {
    v3 = 1;
    v29 = this->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v29->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      this->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0x16u,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v29->m_DeviceObject.m_DeviceObject,
      _a4,
      globals);
  }
  v11 = FxPkgPnp::PowerDmaPowerDown(this);
  v12 = this->m_DeviceBase;
  v13 = v11 == 0;
  m_Method = this->m_DeviceD0ExitPreInterruptsDisabled.m_Method;
  if ( v13 )
    v3 = 1;
  v15 = v12->m_ObjectSize;
  if ( m_Method )
  {
    v16 = (unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v15 )
      v16 = 0LL;
    v18 = m_Method((WDFDEVICE__ *)v16, _a4);
    if ( v18 < 0 )
    {
      v3 = 1;
      v31 = this->m_DeviceBase;
      v32 = (const void *)((unsigned __int64)v31 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v31->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_qqLd(
        this->m_Globals,
        v17,
        0xCu,
        0x17u,
        WPP_PowerStateMachine_cpp_Traceguids,
        v32,
        v31->m_DeviceObject.m_DeviceObject,
        _a4,
        v18);
    }
  }
  if ( NonPageable )
  {
    v19 = 1;
  }
  else
  {
    v19 = 16;
    if ( this->m_SharedPower.m_WaitWakeIrp || this->m_WakeInterruptsKeepConnected == 1 )
    {
      v19 = 80;
      this->m_WakeInterruptsKeepConnected = 0;
    }
  }
  v20 = FxPkgPnp::NotifyResourceObjectsDx(this, v19);
  v21 = this->m_DeviceBase;
  v22 = v3;
  if ( v20 < 0 )
    v22 = 1;
  v23 = v21->m_ObjectSize;
  v24 = (WDFDEVICE__ *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
  this->m_DeviceD0Exit.m_TargetState = _a4;
  if ( !v23 )
    v24 = 0LL;
  this->m_DeviceD0Exit.m_Device = v24;
  if ( FxPrePostCallback::InvokeStateless(&this->m_DeviceD0Exit) < 0 )
    v22 = 1;
  this->PowerParentPowerDereference(this);
  FxPkgPnp::PowerSetDevicePowerState(this, _a4);
  if ( this->m_PowerMachine.m_IoCallbackFailure )
  {
    this->m_PowerMachine.m_IoCallbackFailure = 0;
    goto LABEL_34;
  }
  if ( v22 )
  {
LABEL_34:
    this->m_PowerMachine.m_PowerDownFailure = 1;
    return 0;
  }
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
    FxPowerIdleMachine::ProcessPowerEvent(&m_Owner->m_PowerIdleMachine, PowerIdleEventPowerDown);
  else
    FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDown, v25);
  LOBYTE(v27) = 1;
  this->PowerReleasePendingDeviceIrp(this, v27);
  return 1;
}
