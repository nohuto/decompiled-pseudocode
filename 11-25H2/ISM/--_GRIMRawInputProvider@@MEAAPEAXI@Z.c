/*
 * XREFs of ??_GRIMRawInputProvider@@MEAAPEAXI@Z @ 0x1800CFE10
 * Callers:
 *     ??_ERIMRawInputProvider@@O7EAAPEAXI@Z @ 0x1800CFE00 (--_ERIMRawInputProvider@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x1800CFCA8 (--1RIMRawInputProvider@@MEAA@XZ.c)
 */

RIMRawInputProvider *__fastcall RIMRawInputProvider::`scalar deleting destructor'(RIMRawInputProvider *this, char a2)
{
  RIMRawInputProvider::~RIMRawInputProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x110);
    else
      free(this);
  }
  return this;
}
