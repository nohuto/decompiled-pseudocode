/*
 * XREFs of DeviceTypeToRimInputType @ 0x1400CAAD0
 * Callers:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1400CA9E8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D60A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401ED2E0 (RIMDiscoverDevicesOfInputType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  if ( (unsigned int)(v1 - 1) > 1 )
    return 0LL;
  return 60LL;
}
