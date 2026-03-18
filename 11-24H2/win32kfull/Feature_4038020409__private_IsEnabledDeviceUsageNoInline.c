/*
 * XREFs of Feature_4038020409__private_IsEnabledDeviceUsageNoInline @ 0x14029242C
 * Callers:
 *     NtUserApplyWindowAction @ 0x140292770 (NtUserApplyWindowAction.c)
 * Callees:
 *     Feature_4038020409__private_IsEnabledFallback @ 0x140292464 (Feature_4038020409__private_IsEnabledFallback.c)
 */

__int64 Feature_4038020409__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_4038020409__private_featureState & 0x10) != 0 )
    return Feature_4038020409__private_featureState & 1;
  else
    return Feature_4038020409__private_IsEnabledFallback((unsigned int)Feature_4038020409__private_featureState, 3LL);
}
