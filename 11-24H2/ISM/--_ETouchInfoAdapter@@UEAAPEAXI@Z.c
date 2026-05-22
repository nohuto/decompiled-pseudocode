/*
 * XREFs of ??_ETouchInfoAdapter@@UEAAPEAXI@Z @ 0x1801C6020
 * Callers:
 *     ??_ETouchInfoAdapter@@W7EAAPEAXI@Z @ 0x1801C6010 (--_ETouchInfoAdapter@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1TouchInfoAdapter@@UEAA@XZ @ 0x1801C5FC4 (--1TouchInfoAdapter@@UEAA@XZ.c)
 */

TouchInfoAdapter *__fastcall TouchInfoAdapter::`vector deleting destructor'(TouchInfoAdapter *this, char a2)
{
  TouchInfoAdapter::~TouchInfoAdapter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x2C0);
    else
      free(this);
  }
  return this;
}
