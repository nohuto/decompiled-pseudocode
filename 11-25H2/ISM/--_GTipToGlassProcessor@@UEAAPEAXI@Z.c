/*
 * XREFs of ??_GTipToGlassProcessor@@UEAAPEAXI@Z @ 0x1801AAC90
 * Callers:
 *     ??_ETipToGlassProcessor@@W7EAAPEAXI@Z @ 0x1801AAC80 (--_ETipToGlassProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

TipToGlassProcessor *__fastcall TipToGlassProcessor::`scalar deleting destructor'(TipToGlassProcessor *this, char a2)
{
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x20);
    else
      free(this);
  }
  return this;
}
