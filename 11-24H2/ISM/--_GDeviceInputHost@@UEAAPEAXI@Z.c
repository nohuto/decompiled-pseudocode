/*
 * XREFs of ??_GDeviceInputHost@@UEAAPEAXI@Z @ 0x1800A37F0
 * Callers:
 *     ??_EDeviceInputHost@@W7EAAPEAXI@Z @ 0x1800A37E0 (--_EDeviceInputHost@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A374C (--1DeviceInputHost@@UEAA@XZ.c)
 */

DeviceInputHost *__fastcall DeviceInputHost::`scalar deleting destructor'(DeviceInputHost *this, char a2)
{
  DeviceInputHost::~DeviceInputHost(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x48);
    else
      free(this);
  }
  return this;
}
