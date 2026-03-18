/*
 * XREFs of ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x14003FA14
 * Callers:
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x14003C148 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1400A7880 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x14003FAC8 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     __security_check_cookie @ 0x1400AC640 (__security_check_cookie.c)
 */

__int64 __fastcall FxPkgPnp::RegisterPowerPolicyWmiInstance(
        FxPkgPnp *this,
        const _GUID *Guid,
        FxWmiInstanceInternalCallbacks *Callbacks,
        FxWmiInstanceInternal **Instance)
{
  FxDeviceBase *m_DeviceBase; // rcx
  _GUID v6; // xmm0
  int v7; // eax
  signed int _a1; // ebx
  _WDF_WMI_PROVIDER_CONFIG config; // [rsp+30h] [rbp-38h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  memset(&config, 0, sizeof(config));
  config.Size = 40;
  v6 = *Guid;
  config.MinInstanceBufferSize = 1;
  config.Guid = v6;
  v7 = FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
         (FxWmiIrpHandler *)m_DeviceBase[3].m_ParentObject,
         &config,
         Callbacks,
         Instance);
  _a1 = 0;
  if ( v7 != -1073741771 )
    _a1 = v7;
  if ( _a1 < 0 )
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x2Fu, WPP_FxPkgPnp_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
