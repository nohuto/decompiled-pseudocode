/*
 * XREFs of ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAEPEAW4FxCxCallbackProgress@@@Z @ 0x1400616BC
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400615D0 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A38F0 (-PnpEventRestartHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStartingFromStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A39F0 (-PnpEventStartingFromStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x14002CCC0 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x14003426C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x140061820 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?ClearCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140061EC8 (-ClearCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ @ 0x140061F28 (-PnpAssignInterruptsSyncIrql@FxPkgPnp@@IEAAXXZ.c)
 *     ?SetCallbackFlags@FxDevice@@QEAAXE@Z @ 0x140061FDC (-SetCallbackFlags@FxDevice@@QEAAXE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084384 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpPrepareHardware(
        FxPkgPnp *this,
        unsigned __int8 *ResourcesMatched,
        FxCxCallbackProgress *Progress)
{
  unsigned int v3; // eax
  unsigned __int8 v7; // dl
  int matched; // ebx
  FxDevice *m_Device; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  FxCmResList *m_ResourcesRaw; // r9
  FxCmResList *m_Resources; // r11
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v15; // rcx
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // r10
  WDFCMRESLIST__ *v18; // r9
  WDFCMRESLIST__ *v19; // r11
  unsigned __int8 v20; // dl
  unsigned int v21; // edx
  FxVerifierDownlevelOption v22; // r9d
  _FX_DRIVER_GLOBALS *v23; // rcx

  v3 = this->m_PnpState.Value & 0xFFFFFAEF;
  *ResourcesMatched = 0;
  *Progress = FxCxCallbackProgressInitialized;
  this->m_PnpState.Value = v3 | 0xA20;
  matched = FxPkgPnp::PnpMatchResources(this);
  if ( matched >= 0 )
  {
    m_Device = this->m_Device;
    *ResourcesMatched = 1;
    FxDevice::SetCallbackFlags(m_Device, v7);
    m_DeviceBase = this->m_DeviceBase;
    m_ResourcesRaw = this->m_ResourcesRaw;
    m_Resources = this->m_Resources;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v15 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v16 = m_ResourcesRaw->m_ObjectSize;
    v17 = m_Resources->m_ObjectSize;
    if ( !m_ObjectSize )
      v15 = 0LL;
    v18 = (WDFCMRESLIST__ *)((unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_DevicePrepareHardware.m_Device = v15;
    if ( !v16 )
      v18 = 0LL;
    v19 = (WDFCMRESLIST__ *)((unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL);
    this->m_DevicePrepareHardware.m_ResourcesRaw = v18;
    if ( !v17 )
      v19 = 0LL;
    this->m_DevicePrepareHardware.m_ResourcesTranslated = v19;
    matched = FxPrePostCallback::InvokeStateful(&this->m_DevicePrepareHardware, Progress, FxCxCleanupAfterPreFailure);
    FxDevice::ClearCallbackFlags(this->m_Device, v20);
    if ( matched < 0 )
    {
      if ( matched == -1073741637 )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Au, WPP_PnpStateMachine_cpp_Traceguids);
        if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(this->m_Globals, v21, 0xBu, v22) )
          FxVerifierDbgBreakPoint(v23);
      }
      FxPkgPnp::SetInternalFailure(this);
      this->m_PendingPnPIrp->IoStatus.Status = matched;
    }
    else
    {
      FxPkgPnp::PnpAssignInterruptsSyncIrql(this);
      return 0;
    }
  }
  else
  {
    *ResourcesMatched = 0;
    FxPkgPnp::SetInternalFailure(this);
    this->m_PendingPnPIrp->IoStatus.Status = matched;
  }
  return (unsigned int)matched;
}
