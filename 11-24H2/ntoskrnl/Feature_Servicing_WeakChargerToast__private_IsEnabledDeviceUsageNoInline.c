/*
 * XREFs of Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D5270
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     PopBatteryInit @ 0x140C33BE0 (PopBatteryInit.c)
 * Callees:
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledFallback @ 0x1405D52A8 (Feature_Servicing_WeakChargerToast__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_WeakChargerToast__private_featureState & 0x10) != 0 )
    return Feature_Servicing_WeakChargerToast__private_featureState & 1;
  else
    return Feature_Servicing_WeakChargerToast__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_WeakChargerToast__private_featureState,
             3LL);
}
