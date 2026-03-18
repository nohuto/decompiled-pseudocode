/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x140052DD4
 * Callers:
 *     imp_WdfDeviceOpenRegistryKey @ 0x1400082E0 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1400908F0 (imp_WdfFdoInitOpenRegistryKey.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140024C90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140036790 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x14003754C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x140053278 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400532DC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  int result; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // r9
  _DEVICE_OBJECT *PhysicalDevice; // rbp
  FX_POOL **v15; // rax
  FX_POOL **v16; // rbx
  int v17; // edi
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  void *hKey; // [rsp+40h] [rbp-28h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-20h] BYREF

  keyHandle = 0LL;
  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0);
  if ( result < 0 )
    return result;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( result < 0 )
    return result;
  result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
  if ( result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
LABEL_6:
    v15 = FxObjectHandleAlloc2(FxDriverGlobals, v12, 0x78uLL, v13, KeyAttributes, 0, FxObjectTypeExternal);
    v16 = v15;
    if ( !v15 )
      return -1073741670;
    FxObject::FxObject((FxObject *)v15, 0x1006u, 0x78u, FxDriverGlobals);
    *((_WORD *)v16 + 12) |= 0x11u;
    *v16 = (FX_POOL *)FxRegKey::`vftable';
    v16[13] = 0LL;
    v16[14] = 0LL;
    if ( Device )
      v16[12] = (FX_POOL *)Device;
    v17 = FxObject::Commit((FxObject *)v16, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
    if ( v17 < 0
      || (v17 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v17 < 0) )
    {
      FxObject::DeleteFromFailedCreate((FxObject *)v16);
    }
    else
    {
      v16[14] = (FX_POOL *)hKey;
      *Key = keyHandle;
    }
    return v17;
  }
  PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
  if ( PhysicalDevice )
    goto LABEL_6;
  m_ObjectSize = Device->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, _a1, -1073741436);
  return -1073741436;
}
