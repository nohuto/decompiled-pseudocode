/*
 * XREFs of Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline @ 0x1402924D4
 * Callers:
 *     NtUserConvertPrimaryPointerToMouseDrag @ 0x140292FA0 (NtUserConvertPrimaryPointerToMouseDrag.c)
 * Callees:
 *     Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback @ 0x14029250C (Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback.c)
 */

__int64 Feature_ConvertPointerToDragApiFollowup__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_ConvertPointerToDragApiFollowup__private_featureState & 0x10) != 0 )
    return Feature_ConvertPointerToDragApiFollowup__private_featureState & 1;
  else
    return Feature_ConvertPointerToDragApiFollowup__private_IsEnabledFallback(
             (unsigned int)Feature_ConvertPointerToDragApiFollowup__private_featureState,
             3LL);
}
