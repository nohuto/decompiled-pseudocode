/*
 * XREFs of ??_GContextualProcessorBuffer@@MEAAPEAXI@Z @ 0x18002BB2C
 * Callers:
 *     ??_EContextualProcessorBuffer@@OBI@EAAPEAXI@Z @ 0x18019B7F0 (--_EContextualProcessorBuffer@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1ContextualProcessorBuffer@@MEAA@XZ @ 0x18002BB7C (--1ContextualProcessorBuffer@@MEAA@XZ.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 */

ContextualProcessorBuffer *__fastcall ContextualProcessorBuffer::`scalar deleting destructor'(
        ContextualProcessorBuffer *this,
        char a2)
{
  ContextualProcessorBuffer::~ContextualProcessorBuffer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0xA8);
    else
      free(this);
  }
  return this;
}
