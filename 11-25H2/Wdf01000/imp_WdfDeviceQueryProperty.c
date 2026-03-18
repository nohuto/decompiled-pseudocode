/*
 * XREFs of imp_WdfDeviceQueryProperty @ 0x140052FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x140053278 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400532DC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int32 DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        PULONG ResultLength)
{
  unsigned int *v9; // r13
  _FX_DRIVER_GLOBALS *v10; // rdi
  __int64 result; // rax
  FxDevice *v12; // rbx
  NTSTATUS _a3; // esi
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  __int64 m_ObjectSize; // rax
  const void *v16; // rbx
  FxDevice *pDevice; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+80h] [rbp+8h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  v9 = ResultLength;
  if ( !ResultLength )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v10 = pFxDriverGlobals;
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( (int)result >= 0 )
  {
    v12 = pDevice;
    if ( pDevice->m_Legacy )
    {
      WPP_IFR_SF_qd(v10, 2u, 0x12u, 0x1Fu, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
      return 3221225488LL;
    }
    else
    {
      _a3 = FxDevice::_ValidateOpenKeyParams(v10, 0LL, pDevice);
      if ( _a3 >= 0 )
      {
        SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(v12);
        if ( SafePhysicalDevice )
        {
          _a3 = IoGetDeviceProperty(
                  SafePhysicalDevice,
                  (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                  BufferLength,
                  PropertyBuffer,
                  v9);
        }
        else
        {
          m_ObjectSize = v12->m_ObjectSize;
          v16 = (const void *)((unsigned __int64)v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
          _a3 = -1073741436;
          if ( !(_WORD)m_ObjectSize )
            v16 = 0LL;
          WPP_IFR_SF_qd(v10, 2u, 0x12u, 0x1Au, WPP_FxDeviceKm_cpp_Traceguids, v16, -1073741436);
        }
      }
      if ( v10->FxVerboseOn )
        WPP_IFR_SF_qdd(v10, 5u, 0x12u, 0x20u, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceProperty, _a3);
      return (unsigned int)_a3;
    }
  }
  return result;
}
