/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30
 * Callers:
 *     SdbGetFirstChild @ 0x180092070 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009240C (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 *     SdbpOpenDatabaseInMemory @ 0x180093C6C (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18009408C (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x180098568 (SdbpGetTagHeadSize.c)
 * Callees:
 *     <none>
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
