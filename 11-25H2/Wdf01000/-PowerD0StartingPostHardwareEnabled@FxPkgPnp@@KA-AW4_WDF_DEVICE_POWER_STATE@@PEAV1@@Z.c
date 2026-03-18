/*
 * XREFs of ?PowerD0StartingPostHardwareEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1400A4CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14001C94C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     WPP_IFR_SF_qqLd @ 0x14009CA64 (WPP_IFR_SF_qqLd.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0StartingPostHardwareEnabled(FxPkgPnp *This)
{
  FxPnpDeviceD0EntryPostHwEnabled *p_m_DeviceD0EntryPostHardwareEnabled; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v5; // rdx
  int v6; // r10d
  FxDeviceBase *v7; // rax
  const void *_a2; // r8
  bool v9; // zf
  _DEVICE_OBJECT *_a3; // rax
  FxCxCallbackProgress progress; // [rsp+60h] [rbp+8h] BYREF

  p_m_DeviceD0EntryPostHardwareEnabled = &This->m_DeviceD0EntryPostHardwareEnabled;
  progress = FxCxCallbackProgressInitialized;
  m_DeviceBase = This->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceD0EntryPostHardwareEnabled->m_PreviousState = This->m_DevicePowerState;
  if ( !m_ObjectSize )
    v5 = 0LL;
  p_m_DeviceD0EntryPostHardwareEnabled->m_Device = (WDFDEVICE__ *)v5;
  v6 = FxPrePostCallback::InvokeStateful(p_m_DeviceD0EntryPostHardwareEnabled, &progress, FxCxCleanupAfterPreFailure);
  if ( v6 >= 0 )
    return 786LL;
  v7 = This->m_DeviceBase;
  _a2 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  v9 = v7->m_ObjectSize == 0;
  _a3 = v7->m_DeviceObject.m_DeviceObject;
  if ( v9 )
    _a2 = 0LL;
  WPP_IFR_SF_qqLd(
    This->m_Globals,
    This->m_DevicePowerState,
    0xCu,
    0x10u,
    WPP_PowerStateMachine_cpp_Traceguids,
    _a2,
    _a3,
    This->m_DevicePowerState,
    v6);
  return progress != FxCxCallbackProgressInitialized ? 872 : 834;
}
