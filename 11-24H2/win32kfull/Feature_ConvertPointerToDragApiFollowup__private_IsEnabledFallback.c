/*
 * XREFs of Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback @ 0x14029250C
 * Callers:
 *     Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline @ 0x1402924D4 (Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ConvertPointerToDragApiFollowup__private_descriptor);
}
