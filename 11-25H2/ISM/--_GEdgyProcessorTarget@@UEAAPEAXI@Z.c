/*
 * XREFs of ??_GEdgyProcessorTarget@@UEAAPEAXI@Z @ 0x1801A37A0
 * Callers:
 *     ??_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z @ 0x1801A3790 (--_EEdgyProcessorTarget@@WBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1EdgyProcessorTarget@@UEAA@XZ @ 0x1801A36D8 (--1EdgyProcessorTarget@@UEAA@XZ.c)
 */

EdgyProcessorTarget *__fastcall EdgyProcessorTarget::`scalar deleting destructor'(EdgyProcessorTarget *this, char a2)
{
  EdgyProcessorTarget::~EdgyProcessorTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xB8);
    else
      free(this);
  }
  return this;
}
