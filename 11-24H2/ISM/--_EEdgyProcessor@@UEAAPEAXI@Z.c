/*
 * XREFs of ??_EEdgyProcessor@@UEAAPEAXI@Z @ 0x180153770
 * Callers:
 *     ??_EEdgyProcessor@@W7EAAPEAXI@Z @ 0x180153760 (--_EEdgyProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1EdgyProcessor@@UEAA@XZ @ 0x180153698 (--1EdgyProcessor@@UEAA@XZ.c)
 */

EdgyProcessor *__fastcall EdgyProcessor::`vector deleting destructor'(EdgyProcessor *this, char a2)
{
  EdgyProcessor::~EdgyProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x228);
    else
      free(this);
  }
  return this;
}
