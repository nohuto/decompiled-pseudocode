/*
 * XREFs of Feature_244352312__private_IsEnabledDeviceUsageNoInline @ 0x1405E8A44
 * Callers:
 *     RtlpIsNameInExpressionPrivate @ 0x140347600 (RtlpIsNameInExpressionPrivate.c)
 * Callees:
 *     Feature_244352312__private_IsEnabledFallback @ 0x1405E8A7C (Feature_244352312__private_IsEnabledFallback.c)
 */

__int64 Feature_244352312__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_244352312__private_featureState & 0x10) != 0 )
    return Feature_244352312__private_featureState & 1;
  else
    return Feature_244352312__private_IsEnabledFallback((unsigned int)Feature_244352312__private_featureState, 3LL);
}
