/*
 * XREFs of Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline @ 0x140090D68
 * Callers:
 *     BmlFunctionalizePath @ 0x140365024 (BmlFunctionalizePath.c)
 * Callees:
 *     Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledFallback @ 0x140090DA0 (Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledFallback.c)
 */

__int64 Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AlwaysResetBackTrackSourceMode__private_featureState & 0x10) != 0 )
    return Feature_AlwaysResetBackTrackSourceMode__private_featureState & 1;
  else
    return Feature_AlwaysResetBackTrackSourceMode__private_IsEnabledFallback(
             (unsigned int)Feature_AlwaysResetBackTrackSourceMode__private_featureState,
             3LL);
}
