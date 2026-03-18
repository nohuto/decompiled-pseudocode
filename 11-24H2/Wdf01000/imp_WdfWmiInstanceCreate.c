/*
 * XREFs of imp_WdfWmiInstanceCreate @ 0x140055210
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1400055F8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140016CE0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14005551C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1400558B4 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  _FX_DRIVER_GLOBALS *v5; // rsi
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  WDFWMIPROVIDER__ *Provider; // rdx
  _WDF_WMI_PROVIDER_CONFIG **p_ProviderConfig; // rdi
  FxPowerPolicyOwnerSettings *m_Owner; // r15
  _WDF_WMI_PROVIDER_CONFIG **v13; // r14
  SIZE_T v14; // rax
  int result; // eax
  FxWmiProvider *v16; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v18; // eax
  FxWmiInstanceExternal *v19; // r14
  int v20; // esi
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  FxWmiInstanceExternal *pInstance; // [rsp+50h] [rbp-20h] BYREF
  WDFWMIINSTANCE__ *hInstance; // [rsp+58h] [rbp-18h] BYREF
  WDFWMIPROVIDER__ *hProvider; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  FxDevice *pDevice; // [rsp+B0h] [rbp+40h] BYREF
  FxWmiProvider *pProvider; // [rsp+C0h] [rbp+50h] BYREF
  _WDF_OBJECT_ATTRIBUTES *v28; // [rsp+C8h] [rbp+58h]

  v28 = InstanceAttributes;
  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pProvider = 0LL;
  v6 = InstanceAttributes;
  hInstance = 0LL;
  pDevice = (FxDevice *)&DriverGlobals[-8];
  pInstance = 0LL;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      v5,
      (unsigned __int8)WPP_FxWmiAPI_cpp_Traceguids,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      0x40u,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  if ( Provider )
  {
    ProviderConfig = InstanceConfig->ProviderConfig;
    if ( !ProviderConfig )
    {
      FxObjectHandleGetPtrAndGlobals(
        v5,
        (unsigned __int64)Provider,
        0x1004u,
        (void **)&pProvider,
        (_FX_DRIVER_GLOBALS **)&pDevice);
      m_Globals = (_FX_DRIVER_GLOBALS *)pDevice;
      p_ProviderConfig = &InstanceConfig->ProviderConfig;
      v16 = pProvider;
LABEL_12:
      v18 = FxWmiInstanceExternal::_Create(m_Globals, v16, InstanceConfig, v6, &hInstance, &pInstance);
      v19 = pInstance;
      v20 = v18;
      if ( v18 < 0 || InstanceConfig->Register && (v20 = FxWmiProvider::AddInstance(pProvider, pInstance, 0), v20 < 0) )
      {
        if ( v19 )
          FxObject::DeleteFromFailedCreate(v19);
        if ( *p_ProviderConfig )
          FxObject::DeleteFromFailedCreate(pProvider);
      }
      else if ( Instance )
      {
        *Instance = hInstance;
      }
      return v20;
    }
    WPP_IFR_SF_qqqd(
      v5,
      2u,
      0x12u,
      0xDu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig,
      Provider,
      ProviderConfig,
      -1073741811);
    return -1073741811;
  }
  p_ProviderConfig = &InstanceConfig->ProviderConfig;
  if ( !InstanceConfig->ProviderConfig )
  {
    WPP_IFR_SF_qd(v5, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, -1073741811);
    return -1073741811;
  }
  pDevice = 0LL;
  hProvider = 0LL;
  FxObjectHandleGetPtr(v5, (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  m_Owner = pDevice->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner )
  {
    if ( RtlCompareMemory(&(*p_ProviderConfig)->Guid, &GUID_POWER_DEVICE_ENABLE, 0x10uLL) == 16 )
    {
      if ( m_Owner->m_IdleSettings.WmiInstance )
      {
LABEL_31:
        WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
        return -1073741055;
      }
      v13 = &InstanceConfig->ProviderConfig;
    }
    else
    {
      v13 = p_ProviderConfig;
    }
    v14 = RtlCompareMemory(&(*p_ProviderConfig)->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE, 0x10uLL);
    p_ProviderConfig = v13;
    if ( v14 == 16 && m_Owner->m_WakeSettings.WmiInstance )
      goto LABEL_31;
    v6 = v28;
  }
  result = FxWmiProvider::_Create(v5, Device, 0LL, *p_ProviderConfig, &hProvider, &pProvider);
  if ( result >= 0 )
  {
    v16 = pProvider;
    m_Globals = pProvider->m_Globals;
    goto LABEL_12;
  }
  return result;
}
