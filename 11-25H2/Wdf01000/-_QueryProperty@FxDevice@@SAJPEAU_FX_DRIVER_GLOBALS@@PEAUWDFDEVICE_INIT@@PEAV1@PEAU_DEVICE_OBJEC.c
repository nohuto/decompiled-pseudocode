/*
 * XREFs of ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1400531A0
 * Callers:
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x140052510 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     imp_WdfFdoInitQueryProperty @ 0x1400909E0 (imp_WdfFdoInitQueryProperty.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x140053278 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400532DC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

int __fastcall FxDevice::_QueryProperty(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        unsigned int *ResultLength)
{
  _DEVICE_OBJECT *PhysicalDevice; // r10
  int result; // eax
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rbx

  PhysicalDevice = RemotePdo;
  if ( RemotePdo )
    return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
  result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
  if ( result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
    return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
  }
  PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  if ( PhysicalDevice )
    return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
  m_ObjectSize = Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x1Au, WPP_FxDeviceKm_cpp_Traceguids, _a1, -1073741436);
  return -1073741436;
}
