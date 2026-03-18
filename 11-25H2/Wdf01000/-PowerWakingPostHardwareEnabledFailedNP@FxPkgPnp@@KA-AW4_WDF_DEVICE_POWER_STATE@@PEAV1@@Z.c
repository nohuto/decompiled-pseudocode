/*
 * XREFs of ?PowerWakingPostHardwareEnabledFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A59C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CA64 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingPostHardwareEnabledFailedNP(FxPkgPnp *This)
{
  FxPnpDeviceD0ExitPreHwDisabled *p_m_DeviceD0ExitPreHardwareDisabled; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  int v6; // r8d
  FxDeviceBase *v7; // rax
  const void *_a2; // rdx

  p_m_DeviceD0ExitPreHardwareDisabled = &This->m_DeviceD0ExitPreHardwareDisabled;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0ExitPreHardwareDisabled->m_TargetState = WdfPowerDeviceD3Final;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceD0ExitPreHardwareDisabled->m_Device = (WDFDEVICE__ *)v5;
  v6 = FxPrePostCallback::InvokeStateless(p_m_DeviceD0ExitPreHardwareDisabled);
  if ( v6 < 0 )
  {
    v7 = This->m_DeviceBase;
    _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v7->m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      (unsigned __int8)_a2,
      0xCu,
      0x1Fu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      v7->m_DeviceObject.m_DeviceObject,
      5u,
      v6);
  }
  return 33596LL;
}
