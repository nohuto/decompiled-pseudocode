/*
 * XREFs of ??_EInputServiceProcessor@@UEAAPEAXI@Z @ 0x18015B030
 * Callers:
 *     ??_EInputServiceProcessor@@W7EAAPEAXI@Z @ 0x18015B020 (--_EInputServiceProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

InputServiceProcessor *__fastcall InputServiceProcessor::`vector deleting destructor'(
        InputServiceProcessor *this,
        char a2)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x18);
    else
      free(this);
  }
  return this;
}
