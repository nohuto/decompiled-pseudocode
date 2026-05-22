/*
 * XREFs of ??_ERegistryWatcher@@MEAAPEAXI@Z @ 0x18010A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1RegistryWatcher@@MEAA@XZ @ 0x18010A1F8 (--1RegistryWatcher@@MEAA@XZ.c)
 */

RegistryWatcher *__fastcall RegistryWatcher::`vector deleting destructor'(RegistryWatcher *this, char a2)
{
  RegistryWatcher::~RegistryWatcher(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x38);
    else
      free(this);
  }
  return this;
}
