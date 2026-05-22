/*
 * XREFs of ??_EDragNDropProcessor@@UEAAPEAXI@Z @ 0x180148900
 * Callers:
 *     ??_EDragNDropProcessor@@W7EAAPEAXI@Z @ 0x1801488F0 (--_EDragNDropProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1DragNDropProcessor@@UEAA@XZ @ 0x18014864C (--1DragNDropProcessor@@UEAA@XZ.c)
 */

DragNDropProcessor *__fastcall DragNDropProcessor::`vector deleting destructor'(DragNDropProcessor *this, char a2)
{
  DragNDropProcessor::~DragNDropProcessor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x1F0);
    else
      free(this);
  }
  return this;
}
