/*
 * XREFs of ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1400AA950
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ @ 0x140069054 (-GetPowerFrameworkSettings@FxPoxInterface@@AEAAPEAU_POX_SETTINGS@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPoxInterface::PowerControlCallback(
        FxPoxInterface *Context,
        const _GUID *PowerControlCode,
        void *InBuffer,
        unsigned __int64 InBufferSize,
        void *OutBuffer,
        unsigned __int64 OutBufferSize,
        unsigned __int64 *BytesReturned)
{
  FxPkgPnp *m_PkgPnp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // r8
  const void *_a1; // rdx
  _POX_SETTINGS *PowerFrameworkSettings; // rax
  unsigned int _a3; // ebx
  FxPkgPnp *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // rcx
  FxDeviceBase *v19; // rax
  const void *v20; // r10

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
      0x10u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject);
  }
  PowerFrameworkSettings = FxPoxInterface::GetPowerFrameworkSettings(Context);
  _a3 = PowerFrameworkSettings->PowerControlCallback(
          PowerFrameworkSettings->PoFxDeviceContext,
          PowerControlCode,
          InBuffer,
          InBufferSize,
          OutBuffer,
          OutBufferSize,
          BytesReturned);
  v17 = Context->m_PkgPnp;
  v18 = v17->m_Globals;
  if ( v18->FxVerboseOn )
  {
    v19 = v17->m_DeviceBase;
    v20 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v19->m_ObjectSize )
      v20 = 0LL;
    WPP_IFR_SF_qqd(
      v18,
      5u,
      0xCu,
      0x11u,
      WPP_PoxInterfaceKm_cpp_Traceguids,
      v20,
      v19->m_DeviceObject.m_DeviceObject,
      _a3);
  }
  return _a3;
}
