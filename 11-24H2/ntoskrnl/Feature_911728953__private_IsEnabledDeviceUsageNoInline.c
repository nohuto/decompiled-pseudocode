/*
 * XREFs of Feature_911728953__private_IsEnabledDeviceUsageNoInline @ 0x1405979AC
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140401030 (IopAllocateAndPopulateWriteIrp.c)
 * Callees:
 *     Feature_911728953__private_IsEnabledFallback @ 0x1405979E4 (Feature_911728953__private_IsEnabledFallback.c)
 */

__int64 Feature_911728953__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_911728953__private_featureState & 0x10) != 0 )
    return Feature_911728953__private_featureState & 1;
  else
    return Feature_911728953__private_IsEnabledFallback((unsigned int)Feature_911728953__private_featureState, 3LL);
}
