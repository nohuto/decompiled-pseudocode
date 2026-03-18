/*
 * XREFs of Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledFallback @ 0x14007D5A8
 * Callers:
 *     Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline @ 0x14007D570 (Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14006164C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_IsEnabledFallback(
        __int64 a1,
        unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Bugfix_ClearNonVgaSupportAfterStopDevice__private_descriptor);
}
