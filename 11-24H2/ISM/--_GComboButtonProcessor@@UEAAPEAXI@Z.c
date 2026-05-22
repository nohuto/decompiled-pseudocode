/*
 * XREFs of ??_GComboButtonProcessor@@UEAAPEAXI@Z @ 0x1801A4B40
 * Callers:
 *     ??_EComboButtonProcessor@@W7EAAPEAXI@Z @ 0x1801A4B30 (--_EComboButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ComboButtonProcessor@@UEAA@XZ @ 0x1801A4AEC (--1ComboButtonProcessor@@UEAA@XZ.c)
 */

ComboButtonProcessor *__fastcall ComboButtonProcessor::`scalar deleting destructor'(
        ComboButtonProcessor *this,
        char a2)
{
  ComboButtonProcessor::~ComboButtonProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x170);
    else
      free(this);
  }
  return this;
}
