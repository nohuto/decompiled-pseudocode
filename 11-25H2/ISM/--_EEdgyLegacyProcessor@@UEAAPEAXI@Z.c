/*
 * XREFs of ??_EEdgyLegacyProcessor@@UEAAPEAXI@Z @ 0x1801A1020
 * Callers:
 *     ??_EEdgyLegacyProcessor@@W7EAAPEAXI@Z @ 0x1801A1010 (--_EEdgyLegacyProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1EdgyLegacyProcessor@@UEAA@XZ @ 0x1801A0FD0 (--1EdgyLegacyProcessor@@UEAA@XZ.c)
 */

EdgyLegacyProcessor *__fastcall EdgyLegacyProcessor::`vector deleting destructor'(EdgyLegacyProcessor *this, char a2)
{
  EdgyLegacyProcessor::~EdgyLegacyProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x88);
    else
      free(this);
  }
  return this;
}
