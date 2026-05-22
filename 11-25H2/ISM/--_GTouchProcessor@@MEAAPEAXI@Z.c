/*
 * XREFs of ??_GTouchProcessor@@MEAAPEAXI@Z @ 0x1801BDDE0
 * Callers:
 *     ??_ETouchProcessor@@OBA@EAAPEAXI@Z @ 0x1801BDDD0 (--_ETouchProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1TouchProcessor@@MEAA@XZ @ 0x1801BDD74 (--1TouchProcessor@@MEAA@XZ.c)
 */

TouchProcessor *__fastcall TouchProcessor::`scalar deleting destructor'(TouchProcessor *this, char a2)
{
  TouchProcessor::~TouchProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x50);
    else
      free(this);
  }
  return this;
}
