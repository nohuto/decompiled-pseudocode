/*
 * XREFs of ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x14006AA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x14006AB94 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxPoxInterface::ComponentIdleCallback(FxPoxInterface *Context, unsigned int Component)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  _POX_SETTINGS *v7; // rbx
  FxPkgPnp *v8; // r11
  _FX_DRIVER_GLOBALS *v9; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  FxDeviceBase *v12; // r11
  const void *v13; // r10

  m_PkgPnp = Context->m_PkgPnp;
  m_Globals = m_PkgPnp->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = m_PkgPnp->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(
      m_Globals,
      5u,
      0xCu,
      0xEu,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  v7 = PowerFrameworkSettings;
  if ( PowerFrameworkSettings && PowerFrameworkSettings->ComponentIdleConditionCallback )
  {
    v8 = Context->m_PkgPnp;
    v9 = v8->m_Globals;
    if ( v9->FxVerboseOn )
    {
      v12 = v8->m_DeviceBase;
      v13 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v12->m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qq(v9, 5u, 0xCu, 0xFu, WPP_PoxInterfaceKm_cpp_Traceguids, v13, v12->m_DeviceObject.m_DeviceObject);
    }
    v7->ComponentIdleConditionCallback(v7->PoFxDeviceContext, Component);
  }
  else
  {
    PoFxCompleteIdleCondition(Context->m_PoHandle, Component);
  }
}
