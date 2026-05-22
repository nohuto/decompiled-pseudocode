/*
 * XREFs of ??_GMPCFocusTarget@@UEAAPEAXI@Z @ 0x1800FD780
 * Callers:
 *     ??_EMPCFocusTarget@@W7EAAPEAXI@Z @ 0x1800FD770 (--_EMPCFocusTarget@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800FD738 (--1MPCFocusTarget@@UEAA@XZ.c)
 */

MPCFocusTarget *__fastcall MPCFocusTarget::`scalar deleting destructor'(MPCFocusTarget *this, char a2)
{
  MPCFocusTarget::~MPCFocusTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x70);
    else
      free(this);
  }
  return this;
}
