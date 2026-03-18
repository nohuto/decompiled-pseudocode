/*
 * XREFs of ?PowerPolSleepingWakeWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x140074A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1400050C0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x14000550C (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14003426C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x140034EA8 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrived(FxPkgPnp *This)
{
  char CurrentWakeReason; // al
  FxDeviceBase *m_DeviceBase; // r8
  FxPowerDeviceArmWakeFromSx *p_m_DeviceArmWakeFromSx; // rcx
  unsigned __int16 m_ObjectSize; // dx
  WDFDEVICE__ *v6; // r8
  int v7; // r8d
  FxDeviceBase *v9; // rdx
  unsigned __int16 v10; // cx
  const void *_a1; // rdx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r9
  const void *v14; // rdx
  bool v15; // zf
  FxDeviceBase *v16; // rdx
  unsigned __int16 v17; // cx
  int v18; // eax
  int _a2; // [rsp+30h] [rbp-18h]
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  CurrentWakeReason = FxPkgPnp::PowerPolicyGetCurrentWakeReason(This);
  m_DeviceBase = This->m_DeviceBase;
  p_m_DeviceArmWakeFromSx = &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromSx.m_Device = v6;
  p_m_DeviceArmWakeFromSx->m_DeviceWakeEnabled = CurrentWakeReason & 1;
  p_m_DeviceArmWakeFromSx->m_ChildrenArmedForWake = (CurrentWakeReason & 2) != 0;
  v7 = FxPrePostCallback::InvokeStateful(p_m_DeviceArmWakeFromSx, &progress, FxCxCleanupAfterPreFailure);
  if ( v7 >= 0 )
  {
    if ( !FxDevice::IsPdo(This->m_Device) || (v18 = This->PowerEnableWakeAtBusOverload(This), v18 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1472LL;
    }
    v16 = This->m_DeviceBase;
    v13 = 25;
    _a2 = v18;
    v17 = v16->m_ObjectSize;
    v14 = (const void *)((unsigned __int64)v16 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v15 = v17 == 0;
    goto LABEL_11;
  }
  v9 = This->m_DeviceBase;
  if ( progress )
  {
    v12 = v9->m_ObjectSize;
    v13 = 24;
    v14 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a2 = v7;
    v15 = v12 == 0;
LABEL_11:
    if ( v15 )
      v14 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, v13, WPP_PowerPolicyStateMachine_cpp_Traceguids, v14, _a2);
    return 1298LL;
  }
  v10 = v9->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v10 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x17u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, v7);
  return 1468LL;
}
