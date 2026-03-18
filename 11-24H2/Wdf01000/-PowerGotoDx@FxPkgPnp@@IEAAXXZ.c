/*
 * XREFs of ?PowerGotoDx@FxPkgPnp@@IEAAXXZ @ 0x14003414C
 * Callers:
 *     ?PowerGotoDxArmedForWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x140034130 (-PowerGotoDxArmedForWake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x14003246C (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA?AW4_WDF_POWER_DEVICE_STATE@@XZ @ 0x140033424 (-GetTargetDevicePowerStateFromPendingDevicePowerDownIrp@FxPkgPnp@@QEAA-AW4_WDF_POWER_DEVICE_STAT.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x140033988 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::PowerGotoDx(FxPkgPnp *this, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int8 v5; // r8
  int TargetDevicePowerStateFromPendingDevicePowerDownIrp; // eax
  __int64 v7; // r11
  signed int _a1; // eax

  if ( this->m_SelfManagedIoMachine )
  {
    TargetDevicePowerStateFromPendingDevicePowerDownIrp = FxPkgPnp::GetTargetDevicePowerStateFromPendingDevicePowerDownIrp(this);
    *(_DWORD *)(v7 + 160) = TargetDevicePowerStateFromPendingDevicePowerDownIrp;
    _a1 = FxSelfManagedIoMachine::ProcessEvent((FxSelfManagedIoMachine *)v7, SelfManagedIoEventSuspend, 0LL);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x15u, WPP_PowerStateMachine_cpp_Traceguids, _a1);
      this->m_PowerMachine.m_IoCallbackFailure = 1;
    }
  }
  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 1u, a3, a4);
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolPowerDownIoStopped, v5);
}
