/*
 * XREFs of ?PowerPolSleepingWakeWakeArrivedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1400A7F80
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14001C94C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x14001D588 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x14003BCC0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     ?PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ @ 0x14003C10C (-PowerPolicyGetCurrentWakeReason@FxPkgPnp@@QEAAKXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeWakeArrivedNP(FxPkgPnp *This)
{
  char CurrentWakeReason; // al
  FxDeviceBase *m_DeviceBase; // r8
  FxPowerDeviceArmWakeFromSx *p_m_DeviceArmWakeFromSx; // rcx
  unsigned __int16 m_ObjectSize; // dx
  WDFDEVICE__ *v6; // r8
  int v7; // eax
  int v8; // r8d
  FxDeviceBase *v9; // rdx
  unsigned __int16 v10; // cx
  const void *_a1; // rdx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r9
  const void *v15; // rdx
  bool v16; // zf
  int v17; // eax
  FxDeviceBase *v18; // rdx
  unsigned __int16 v19; // cx
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
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( !FxDevice::IsPdo(This->m_Device) || (v17 = This->PowerEnableWakeAtBusOverload(This), v17 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1472LL;
    }
    v18 = This->m_DeviceBase;
    v14 = 29;
    _a2 = v17;
    v19 = v18->m_ObjectSize;
    v15 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v16 = v19 == 0;
  }
  else
  {
    v9 = This->m_DeviceBase;
    if ( progress == FxCxCallbackProgressInitialized )
    {
      v10 = v9->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v10 )
        _a1 = 0LL;
      WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x1Bu, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, v7);
      return 34237LL;
    }
    v13 = v9->m_ObjectSize;
    v14 = 28;
    v15 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
    _a2 = v8;
    v16 = v13 == 0;
  }
  if ( v16 )
    v15 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, v14, WPP_PowerPolicyStateMachine_cpp_Traceguids, v15, _a2);
  return 34075LL;
}
