/*
 * XREFs of ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x140077C5C
 * Callers:
 *     ?PnpEventFailedOwnHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140077C40 (-PnpEventFailedOwnHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A37E0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRestartReleaseHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3890 (-PnpEventRestartReleaseHardware@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3970 (-PnpEventStopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpReleaseHardware(FxPkgPnp *this)
{
  FxPnpDeviceReleaseHardware *p_m_DeviceReleaseHardware; // rcx
  FxDeviceBase *m_DeviceBase; // rdx
  FxCmResList *m_Resources; // r9
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v6; // rdx
  unsigned __int16 v7; // r8
  unsigned __int64 v8; // r9
  unsigned int v9; // esi
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_InterruptListHead; // rdi
  unsigned int v13; // edx
  FxVerifierDownlevelOption v14; // r9d
  _FX_DRIVER_GLOBALS *v15; // rcx
  _LIST_ENTRY **p_Blink; // rcx

  p_m_DeviceReleaseHardware = &this->m_DeviceReleaseHardware;
  m_DeviceBase = this->m_DeviceBase;
  m_Resources = this->m_Resources;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  v7 = m_Resources->m_ObjectSize;
  if ( !m_ObjectSize )
    v6 = 0LL;
  v8 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
  p_m_DeviceReleaseHardware->m_Device = (WDFDEVICE__ *)v6;
  if ( !v7 )
    v8 = 0LL;
  p_m_DeviceReleaseHardware->m_ResourcesTranslated = (WDFCMRESLIST__ *)v8;
  v9 = FxPrePostCallback::InvokeStateless(p_m_DeviceReleaseHardware);
  if ( v9 == -1073741637 )
  {
    WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x1Cu, WPP_PnpStateMachine_cpp_Traceguids);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(this->m_Globals, v13, 0xBu, v14) )
      FxVerifierDbgBreakPoint(v15);
  }
  Blink = this->m_InterruptListHead.Blink;
  p_m_InterruptListHead = &this->m_InterruptListHead;
  while ( Blink != p_m_InterruptListHead )
  {
    p_Blink = &Blink[-28].Blink;
    Blink = Blink->Blink;
    if ( *((_BYTE *)p_Blink + 264) )
      ((void (__fastcall *)(_LIST_ENTRY **))(*p_Blink)[3].Flink)(p_Blink);
  }
  return v9;
}
