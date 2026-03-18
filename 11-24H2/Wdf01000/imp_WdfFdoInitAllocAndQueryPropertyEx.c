/*
 * XREFs of imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1400907F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1400109C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1400470E4 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfFdoInitAllocAndQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory,
        unsigned int *Type)
{
  _FX_DRIVER_GLOBALS *v10; // rbx
  unsigned int v11; // edi
  __int64 result; // rax
  _FX_DRIVER_GLOBALS *v13; // rcx
  unsigned int _a1; // [rsp+20h] [rbp-48h]
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v10 = DeviceInit->DriverGlobals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v10, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(
      v10,
      (unsigned __int8)DeviceInit,
      0xCu,
      0x31u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      DeviceProperty->Size,
      0x18u,
      -1073741820);
    return v11;
  }
  v13 = DeviceInit->DriverGlobals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(v13, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(v13, 0);
  if ( (int)result >= 0 )
  {
    result = FxValidateObjectAttributes(v10, PropertyMemoryAttributes, 0);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType )
      {
        v11 = -1073741808;
        WPP_IFR_SF_D(v10, 2u, 0x12u, 0x32u, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
        return v11;
      }
      return FxDevice::_AllocAndQueryPropertyEx(
               v10,
               DeviceInit,
               0LL,
               DeviceProperty,
               _a1,
               PoolType,
               PropertyMemoryAttributes,
               PropertyMemory,
               Type);
    }
  }
  return result;
}
