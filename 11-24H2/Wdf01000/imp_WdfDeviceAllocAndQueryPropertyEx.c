/*
 * XREFs of imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140001AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1400470E4 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfDeviceAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  unsigned __int8 v9; // dl
  int result; // eax
  int v11; // eax
  _FX_DRIVER_GLOBALS *v12; // rcx
  int v13; // edi
  WDFMEMORY__ **v14; // rdi
  unsigned int *v15; // rsi
  _WDF_OBJECT_ATTRIBUTES *v16; // rbp
  FxPropertyType _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+80h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( DeviceProperty->Size == 24 )
  {
    v11 = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 1u);
    v12 = pFxDriverGlobals;
    v13 = v11;
    if ( v11 >= 0 )
    {
      v14 = PropertyMemory;
      if ( !PropertyMemory )
        FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
      v15 = Type;
      if ( !Type )
        FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
      v16 = PropertyMemoryAttributes;
      *PropertyMemory = 0LL;
      result = FxValidateObjectAttributes(v12, v16, 0);
      if ( result >= 0 )
        return FxDevice::_AllocAndQueryPropertyEx(
                 pFxDriverGlobals,
                 0LL,
                 pDevice,
                 DeviceProperty,
                 _a1,
                 PoolType,
                 v16,
                 v14,
                 v15);
    }
    else
    {
      FxVerifierDbgBreakPoint(pFxDriverGlobals);
      return v13;
    }
  }
  else
  {
    WPP_IFR_SF_DDd(
      pFxDriverGlobals,
      v9,
      0xCu,
      0x39u,
      WPP_FxDeviceApi_cpp_Traceguids,
      DeviceProperty->Size,
      0x18u,
      -1073741820);
    return -1073741820;
  }
  return result;
}
