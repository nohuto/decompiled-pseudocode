/*
 * XREFs of Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline @ 0x14054D414
 * Callers:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D9CC4 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 *     HalpGetIommuInterfaceEx @ 0x140703540 (HalpGetIommuInterfaceEx.c)
 *     IommuDeviceDelete @ 0x1407039C0 (IommuDeviceDelete.c)
 * Callees:
 *     Feature_IommuInterfacePointerReset__private_IsEnabledFallback @ 0x14054D44C (Feature_IommuInterfacePointerReset__private_IsEnabledFallback.c)
 */

__int64 Feature_IommuInterfacePointerReset__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_IommuInterfacePointerReset__private_featureState & 0x10) != 0 )
    return Feature_IommuInterfacePointerReset__private_featureState & 1;
  else
    return Feature_IommuInterfacePointerReset__private_IsEnabledFallback(
             (unsigned int)Feature_IommuInterfacePointerReset__private_featureState,
             3LL);
}
