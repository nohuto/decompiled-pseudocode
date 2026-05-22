/*
 * XREFs of ??_ESystemButtonProcessor@@UEAAPEAXI@Z @ 0x1801AB630
 * Callers:
 *     ??_ESystemButtonProcessor@@W7EAAPEAXI@Z @ 0x1801AB620 (--_ESystemButtonProcessor@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1SystemButtonProcessor@@UEAA@XZ @ 0x1801AB5F0 (--1SystemButtonProcessor@@UEAA@XZ.c)
 */

SystemButtonProcessor *__fastcall SystemButtonProcessor::`vector deleting destructor'(
        SystemButtonProcessor *this,
        char a2)
{
  SystemButtonProcessor::~SystemButtonProcessor(this);
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
