/*
 * XREFs of ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x140053E84
 * Callers:
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140055080 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x140090790 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x140038CF0 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1400537B4 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::_AllocAndQueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int PoolType,
        _POOL_TYPE PropertyMemoryAttributes,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemory,
        WDFMEMORY__ **PropertyType,
        unsigned int *DriverGlobals_0)
{
  signed int v12; // edi
  void **v13; // r14
  unsigned int *v14; // rbp
  unsigned __int64 v15; // rsi
  _POOL_TYPE v16; // r8d
  _WDF_OBJECT_ATTRIBUTES *v17; // rdx
  FxMemoryObject *v18; // rdi
  IFxMemory *v19; // r15
  void *ResultLength; // rax
  int v21; // eax
  unsigned int v22; // r12d
  unsigned __int16 v24; // r9
  signed int v25; // eax
  unsigned int v26; // esi
  unsigned int BufferSize; // [rsp+20h] [rbp-68h]
  unsigned int BufferSizea; // [rsp+20h] [rbp-68h]
  unsigned int propType; // [rsp+50h] [rbp-38h] BYREF
  FxMemoryObject *pMemory; // [rsp+58h] [rbp-30h] BYREF

  pMemory = 0LL;
  propType = 0;
  PoolType = 0;
  v12 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          BufferSize,
          0,
          0LL,
          &PoolType,
          &propType);
  if ( v12 != -1073741789 )
  {
    v24 = 19;
LABEL_7:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, v24, WPP_FxDevice_cpp_Traceguids, v12);
    return (unsigned int)v12;
  }
  v13 = (void **)PropertyType;
  v14 = DriverGlobals_0;
  v15 = PoolType;
  v16 = PropertyMemoryAttributes;
  v17 = PropertyMemory;
  *PropertyType = 0LL;
  *v14 = 0;
  v12 = FxMemoryObject::_Create(DriverGlobals, v17, v16, DriverGlobals->Tag, v15, &pMemory);
  if ( v12 < 0 )
  {
    v24 = 20;
    goto LABEL_7;
  }
  v18 = pMemory;
  v19 = &pMemory->IFxMemory;
  ResultLength = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
  v21 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          BufferSizea,
          v15,
          ResultLength,
          &PoolType,
          &propType);
  v22 = v21;
  if ( v21 >= 0 )
  {
    v25 = FxObject::Commit(v18, PropertyMemory, v13, 0LL, 1u);
    v26 = v25;
    if ( v25 >= 0 )
    {
      *v13 = v19->GetHandle(v19);
      *v14 = propType;
    }
    else
    {
      WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x16u, WPP_FxDevice_cpp_Traceguids, v25);
      v18->DeleteObject(v18);
    }
    return v26;
  }
  else
  {
    WPP_IFR_SF_dd(DriverGlobals, 2u, 0xCu, 0x15u, WPP_FxDevice_cpp_Traceguids, v15, v21);
    v18->DeleteObject(v18);
    return v22;
  }
}
