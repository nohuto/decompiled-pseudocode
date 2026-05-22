/*
 * XREFs of ??_GInputProcess@@UEAAPEAXI@Z @ 0x1800CC200
 * Callers:
 *     ??_EInputProcess@@W7EAAPEAXI@Z @ 0x1800CC170 (--_EInputProcess@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1InputProcess@@UEAA@XZ @ 0x1800CC128 (--1InputProcess@@UEAA@XZ.c)
 */

Microsoft::Bamo::BaseBamoConnection **__fastcall InputProcess::`scalar deleting destructor'(
        Microsoft::Bamo::BaseBamoConnection **this,
        char a2)
{
  InputProcess::~InputProcess(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        (BamoImpl::BamoMPCConstantManagerClientProxyImpl *)this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x28);
    else
      free(this);
  }
  return this;
}
