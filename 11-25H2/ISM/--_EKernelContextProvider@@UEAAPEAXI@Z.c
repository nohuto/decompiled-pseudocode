/*
 * XREFs of ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x180108830
 * Callers:
 *     ??_EKernelContextProvider@@W7EAAPEAXI@Z @ 0x180108820 (--_EKernelContextProvider@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??1KernelContextProvider@@UEAA@XZ @ 0x1801087F0 (--1KernelContextProvider@@UEAA@XZ.c)
 */

KernelContextProvider *__fastcall KernelContextProvider::`vector deleting destructor'(
        KernelContextProvider *this,
        char a2)
{
  KernelContextProvider::~KernelContextProvider(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        this,
        (struct Microsoft::BamoImpl::BamoProxyImpl *)0x90);
    else
      free(this);
  }
  return this;
}
