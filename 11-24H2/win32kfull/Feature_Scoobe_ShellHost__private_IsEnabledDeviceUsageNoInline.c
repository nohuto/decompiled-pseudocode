/*
 * XREFs of Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline @ 0x1402B4754
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_Scoobe_ShellHost__private_IsEnabledFallback @ 0x1402B478C (Feature_Scoobe_ShellHost__private_IsEnabledFallback.c)
 */

__int64 Feature_Scoobe_ShellHost__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Scoobe_ShellHost__private_featureState & 0x10) != 0 )
    return Feature_Scoobe_ShellHost__private_featureState & 1;
  else
    return Feature_Scoobe_ShellHost__private_IsEnabledFallback(
             (unsigned int)Feature_Scoobe_ShellHost__private_featureState,
             3LL);
}
