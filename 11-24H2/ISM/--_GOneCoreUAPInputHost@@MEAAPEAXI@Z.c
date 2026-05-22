/*
 * XREFs of ??_GOneCoreUAPInputHost@@MEAAPEAXI@Z @ 0x1800A3264
 * Callers:
 *     ??_EOneCoreUAPInputHost@@OCA@EAAPEAXI@Z @ 0x1800A31F0 (--_EOneCoreUAPInputHost@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1OneCoreUAPInputHost@@MEAA@XZ @ 0x1800A303C (--1OneCoreUAPInputHost@@MEAA@XZ.c)
 */

OneCoreUAPInputHost *__fastcall OneCoreUAPInputHost::`scalar deleting destructor'(
        OneCoreUAPInputHost *this,
        unsigned int a2)
{
  char v2; // di

  v2 = a2;
  OneCoreUAPInputHost::~OneCoreUAPInputHost(this, a2);
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x80);
    else
      free(this);
  }
  return this;
}
