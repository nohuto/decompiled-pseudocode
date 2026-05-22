/*
 * XREFs of ??_GButtonRecognizer@@MEAAPEAXI@Z @ 0x1801A5CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ButtonRecognizer@@MEAA@XZ @ 0x1801A5B14 (--1ButtonRecognizer@@MEAA@XZ.c)
 */

ButtonRecognizer *__fastcall ButtonRecognizer::`scalar deleting destructor'(ButtonRecognizer *this, char a2)
{
  ButtonRecognizer::~ButtonRecognizer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xD0);
    else
      free(this);
  }
  return this;
}
