/*
 * XREFs of Feature_Servicing_PoolQueryLimitFix__private_IsEnabledDeviceUsageNoInline @ 0x140653D08
 * Callers:
 *     ExPoolQueryLimits @ 0x140652A00 (ExPoolQueryLimits.c)
 * Callees:
 *     Feature_Servicing_PoolQueryLimitFix__private_IsEnabledFallback @ 0x140653D40 (Feature_Servicing_PoolQueryLimitFix__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_PoolQueryLimitFix__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_PoolQueryLimitFix__private_featureState & 0x10) != 0 )
    return Feature_Servicing_PoolQueryLimitFix__private_featureState & 1;
  else
    return Feature_Servicing_PoolQueryLimitFix__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_PoolQueryLimitFix__private_featureState,
             3LL);
}
