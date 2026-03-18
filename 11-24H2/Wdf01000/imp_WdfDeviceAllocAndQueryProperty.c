/*
 * XREFs of imp_WdfDeviceAllocAndQueryProperty @ 0x140045C20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1400462C0 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int32 DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFMEMORY__ **v9; // rdi
  _FX_DRIVER_GLOBALS *v10; // rbx
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *v12; // rbp
  int Property; // eax
  unsigned int v14; // edi
  FxDevice *pDevice; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+70h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  v9 = PropertyMemory;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v10 = pFxDriverGlobals;
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    v12 = PropertyMemoryAttributes;
    result = FxValidateObjectAttributes(v10, PropertyMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      if ( pDevice->m_Legacy )
      {
        v14 = -1073741808;
        WPP_IFR_SF_qd(v10, 2u, 0x12u, 0x21u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
      }
      else
      {
        Property = FxDevice::_AllocAndQueryProperty(
                     v10,
                     0LL,
                     pDevice,
                     0LL,
                     (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                     PoolType,
                     v12,
                     v9);
        v14 = Property;
        if ( v10->FxVerboseOn )
          WPP_IFR_SF_qdd(v10, 5u, 0x12u, 0x22u, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceProperty, Property);
      }
      return v14;
    }
  }
  return result;
}
