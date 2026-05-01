/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180092190
 * Callers:
 *     SdbGetFirstChild @ 0x1800924D0 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009286C (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x180094018 (SdbpGetNextTagId.c)
 *     SdbpOpenDatabaseInMemory @ 0x1800940CC (SdbpOpenDatabaseInMemory.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x1800944EC (SdbpValidateAndApplyCompatFlags.c)
 *     SdbGetTagDataSize @ 0x180098284 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1800989C8 (SdbpGetTagHeadSize.c)
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
