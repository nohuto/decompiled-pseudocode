/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeArrived@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x14003B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14001C94C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x14001D588 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x14003BCC0 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeArrived(FxPkgPnp *This)
{
  FxPowerDeviceArmWakeFromS0 *p_m_DeviceArmWakeFromS0; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  int _a2; // edx
  FxDeviceBase *v8; // r8
  unsigned __int16 v9; // cx
  const void *_a1; // r8
  unsigned __int16 v11; // ax
  const void *v12; // r8
  FxDeviceBase *v13; // rdx
  unsigned __int16 v14; // cx
  const void *v15; // rdx
  int v16; // eax
  FxCxCallbackProgress progress; // [rsp+50h] [rbp+8h] BYREF

  p_m_DeviceArmWakeFromS0 = &This->m_PowerPolicyMachine.m_Owner->m_DeviceArmWakeFromS0;
  progress = FxCxCallbackProgressInitialized;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceArmWakeFromS0->m_Device = (WDFDEVICE__ *)v5;
  _a2 = FxPrePostCallback::InvokeStateful(p_m_DeviceArmWakeFromS0, &progress, FxCxCleanupAfterPreOrClientFailure);
  if ( _a2 >= 0 )
  {
    if ( !FxDevice::IsPdo(This->m_Device) || (v16 = This->PowerEnableWakeAtBusOverload(This), v16 >= 0) )
    {
      FxPkgPnp::PowerProcessEvent(This, 0x1000u, 0);
      return 1472LL;
    }
    v13 = This->m_DeviceBase;
    v14 = v13->m_ObjectSize;
    v15 = (const void *)((unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v14 )
      v15 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x24u, WPP_PowerPolicyStateMachine_cpp_Traceguids, v15, v16);
    return 1335LL;
  }
  v8 = This->m_DeviceBase;
  if ( progress != FxCxCallbackProgressClientSucceeded )
  {
    v11 = v8->m_ObjectSize;
    v12 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v11 )
      v12 = 0LL;
    WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x23u, WPP_PowerPolicyStateMachine_cpp_Traceguids, v12, _a2);
    return 1335LL;
  }
  v9 = v8->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v9 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x22u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1, _a2);
  return 1467LL;
}
