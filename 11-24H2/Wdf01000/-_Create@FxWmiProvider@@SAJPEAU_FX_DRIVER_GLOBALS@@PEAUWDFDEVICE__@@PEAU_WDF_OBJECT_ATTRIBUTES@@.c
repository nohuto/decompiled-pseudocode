/*
 * XREFs of ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x14005551C
 * Callers:
 *     imp_WdfWmiInstanceCreate @ 0x140055210 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x14008D6B0 (imp_WdfWmiProviderCreate.c)
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x14001189C (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1400557D4 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z @ 0x140055CEC (-AddProvider@FxWmiIrpHandler@@QEAAJPEAVFxWmiProvider@@PEAE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DB44 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ @ 0x14006DEE8 (-DecrementUpdateCount@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x140079754 (-RemoveProvider@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     WPP_IFR_SF_Dddd @ 0x14008D86C (WPP_IFR_SF_Dddd.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 */

__int64 __fastcall FxWmiProvider::_Create(
        _FX_DRIVER_GLOBALS *CallersGlobals,
        WDFDEVICE__ *Device,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        WDFWMIPROVIDER__ **WmiProvider,
        FxWmiProvider **Provider)
{
  _FX_DRIVER_GLOBALS *v8; // rdi
  __int64 result; // rax
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  unsigned int Size; // ecx
  unsigned int Flags; // edx
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  FX_POOL **v16; // rax
  FxWmiProvider *v17; // rax
  FxWmiProvider *v18; // rbx
  unsigned int v19; // ebx
  unsigned __int16 v20; // r9
  int v21; // edi
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-59h]
  FxObjectType PoolFlags; // [rsp+30h] [rbp-49h]
  int globals; // [rsp+38h] [rbp-41h]
  int v25; // [rsp+40h] [rbp-39h]
  unsigned __int8 update[8]; // [rsp+50h] [rbp-29h] BYREF
  FxDevice *pDevice; // [rsp+58h] [rbp-21h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp-19h] BYREF
  void *hProvider; // [rsp+68h] [rbp-11h] BYREF
  _GUID zeroGuid; // [rsp+70h] [rbp-9h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  hProvider = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    CallersGlobals,
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  v8 = pFxDriverGlobals;
  *Provider = 0LL;
  update[0] = 0;
  *WmiProvider = 0LL;
  result = FxValidateObjectAttributes(v8, ProviderAttributes, 1);
  if ( (int)result >= 0 )
  {
    Size = WmiProviderConfig->Size;
    if ( WmiProviderConfig->Size != 40 )
    {
      v19 = -1073741820;
      WPP_IFR_SF_DDd(
        v8,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xAu,
        WPP_FxWmiProvider_cpp_Traceguids,
        Size,
        0x28u,
        -1073741820);
      return v19;
    }
    Flags = WmiProviderConfig->Flags;
    if ( (Flags & 0xFFFFFFF8) != 0 )
    {
      v19 = -1073741811;
      WPP_IFR_SF_DDd(
        v8,
        (unsigned __int8)WPP_FxWmiProvider_cpp_Traceguids,
        0xCu,
        0xBu,
        WPP_FxWmiProvider_cpp_Traceguids,
        Flags,
        7u,
        -1073741811);
      return v19;
    }
    if ( (Flags & 0xFFFFFFFB) != 0 && (Flags & 4) != 0 )
    {
      v20 = 12;
      v19 = -1073741811;
      goto LABEL_10;
    }
    if ( WmiProviderConfig->EvtWmiProviderFunctionControl && (Flags & 6) == 0 )
    {
      WPP_IFR_SF_Dddd(
        v8,
        Flags,
        v10,
        v11,
        (const _GUID *)ObjectGlobals,
        WmiProviderConfig->Flags,
        PoolFlags,
        globals,
        v25);
      return 3221225485LL;
    }
    zeroGuid = 0LL;
    if ( RtlCompareMemory(&WmiProviderConfig->Guid, &zeroGuid, 0x10uLL) == 16 )
    {
      v19 = -1073741811;
      v20 = 14;
      goto LABEL_10;
    }
    v16 = FxObjectHandleAlloc2(v8, v14, 0xD8uLL, v15, ProviderAttributes, 0, FxObjectTypeExternal);
    if ( !v16
      || (FxWmiProvider::FxWmiProvider((FxWmiProvider *)v16, v8, WmiProviderConfig, pDevice), (v18 = v17) == 0LL) )
    {
      v19 = -1073741670;
      v20 = 15;
LABEL_10:
      WPP_IFR_SF_D(v8, 2u, 0xCu, v20, WPP_FxWmiProvider_cpp_Traceguids, v19);
      return v19;
    }
    v21 = FxWmiIrpHandler::AddProvider(pDevice->m_PkgWmi, v17, update);
    if ( v21 >= 0 )
    {
      v21 = FxObject::Commit(v18, ProviderAttributes, &hProvider, pDevice, 1u);
      if ( v21 >= 0 )
      {
        *WmiProvider = (WDFWMIPROVIDER__ *)hProvider;
        *Provider = v18;
        if ( update[0] )
          FxWmiIrpHandler::UpdateGuids(pDevice->m_PkgWmi);
        return (unsigned int)v21;
      }
      FxWmiIrpHandler::RemoveProvider(pDevice->m_PkgWmi, v18);
    }
    if ( update[0] )
      FxWmiIrpHandler::DecrementUpdateCount(pDevice->m_PkgWmi);
    FxObject::DeleteFromFailedCreate(v18);
    return (unsigned int)v21;
  }
  return result;
}
