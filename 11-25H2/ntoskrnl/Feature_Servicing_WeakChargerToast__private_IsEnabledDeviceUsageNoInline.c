/*
 * XREFs of Feature_Servicing_WeakChargerToast__private_IsEnabledDeviceUsageNoInline @ 0x1405D3138
 * Callers:
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PopBatteryInit @ 0x140C209C0 (PopBatteryInit.c)
 * Callees:
 *     Feature_Servicing_WeakChargerToast__private_IsEnabledFallback @ 0x1405D3170 (Feature_Servicing_WeakChargerToast__private_IsEnabledFallback.c)
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
