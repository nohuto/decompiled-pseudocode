/*
 * XREFs of ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x180084CB8
 * Callers:
 *     ??_EKeyboardProcessor@@O7EAAPEAXI@Z @ 0x180191850 (--_EKeyboardProcessor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1KeyboardProcessor@@MEAA@XZ @ 0x180095BE4 (--1KeyboardProcessor@@MEAA@XZ.c)
 */

KeyboardProcessor *__fastcall KeyboardProcessor::`scalar deleting destructor'(KeyboardProcessor *this, char a2)
{
  KeyboardProcessor::~KeyboardProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x58);
    else
      free(this);
  }
  return this;
}
