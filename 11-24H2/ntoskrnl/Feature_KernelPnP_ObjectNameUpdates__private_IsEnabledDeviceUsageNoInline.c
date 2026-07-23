/*
 * XREFs of Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline @ 0x1405A5E28
 * Callers:
 *     PiCMCaptureInterfaceAliasInputData @ 0x1408B33C4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C2BE0 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C3160 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140A79294 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140AB4128 (PiCMCaptureCreateDeviceInputData.c)
 * Callees:
 *     Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledFallback @ 0x1405A5E60 (Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledFallback.c)
 */

__int64 Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_KernelPnP_ObjectNameUpdates__private_featureState & 0x10) != 0 )
    return Feature_KernelPnP_ObjectNameUpdates__private_featureState & 1;
  else
    return Feature_KernelPnP_ObjectNameUpdates__private_IsEnabledFallback(
             (unsigned int)Feature_KernelPnP_ObjectNameUpdates__private_featureState,
             3LL);
}
