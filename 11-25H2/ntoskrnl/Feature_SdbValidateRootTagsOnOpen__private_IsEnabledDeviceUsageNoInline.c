/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x1404F1DD0
 * Callers:
 *     SdbpGetNextTagId @ 0x140824A14 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x1408257B0 (SdbGetTagDataSize.c)
 *     SdbGetNextChild @ 0x140825A94 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140825B84 (SdbGetFirstChild.c)
 *     SdbpGetTagHeadSize @ 0x140825C24 (SdbpGetTagHeadSize.c)
 *     SdbpOpenDatabaseInMemory @ 0x14082BA08 (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8ADC (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback @ 0x14068A28C (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback.c)
 */

__int64 Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SdbValidateRootTagsOnOpen__private_featureState & 0x10) != 0 )
    return Feature_SdbValidateRootTagsOnOpen__private_featureState & 1;
  else
    return Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback(
             (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_featureState,
             3LL);
}
