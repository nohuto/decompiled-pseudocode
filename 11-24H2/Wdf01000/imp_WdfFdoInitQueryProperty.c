/*
 * XREFs of imp_WdfFdoInitQueryProperty @ 0x140090A40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x140046990 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfFdoInitQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  int result; // eax
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  v9 = DeviceInit->DriverGlobals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(v9, retaddr);
  result = FxVerifierCheckIrqlLevel(v9, 0);
  if ( result >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_D(v9, 2u, 0x12u, 0x29u, WPP_FxDeviceInitApi_cpp_Traceguids, 0xC0000010);
      return -1073741808;
    }
    else
    {
      return FxDevice::_QueryProperty(
               v9,
               DeviceInit,
               0LL,
               0LL,
               DeviceProperty,
               BufferLength,
               PropertyBuffer,
               ResultLength);
    }
  }
  return result;
}
