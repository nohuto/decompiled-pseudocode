/*
 * XREFs of ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140042064
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14004DFD4 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14004235C (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x1400424EC (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140043260 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 */

int __fastcall FxDevice::ControlDeviceInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  int result; // eax

  this->m_Legacy = 1;
  result = FxDevice::CreateDevice(this, DeviceInit);
  if ( result >= 0 )
  {
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( result >= 0 )
      return FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
  }
  return result;
}
