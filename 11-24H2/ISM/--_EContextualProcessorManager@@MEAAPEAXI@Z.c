/*
 * XREFs of ??_EContextualProcessorManager@@MEAAPEAXI@Z @ 0x1801A2950
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007A940 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801A28DC (--1ContextualProcessorManager@@MEAA@XZ.c)
 */

ContextualProcessorManager *__fastcall ContextualProcessorManager::`vector deleting destructor'(
        ContextualProcessorManager *this,
        char a2)
{
  ContextualProcessorManager::~ContextualProcessorManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x30);
    else
      free(this);
  }
  return this;
}
