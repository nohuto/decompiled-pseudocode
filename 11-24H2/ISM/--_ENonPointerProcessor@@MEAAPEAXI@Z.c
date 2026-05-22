/*
 * XREFs of ??_ENonPointerProcessor@@MEAAPEAXI@Z @ 0x180198BA0
 * Callers:
 *     ??_ENonPointerProcessor@@OBA@EAAPEAXI@Z @ 0x180198B90 (--_ENonPointerProcessor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18002D598 (--1NonPointerProcessor@@MEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

NonPointerProcessor *__fastcall NonPointerProcessor::`vector deleting destructor'(NonPointerProcessor *this, char a2)
{
  NonPointerProcessor::~NonPointerProcessor(this);
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
