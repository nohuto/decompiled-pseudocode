/*
 * XREFs of Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x140488BC4
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x14095BC48 (SdbpOpenDatabaseInMemory.c)
 *     SdbpGetNextTagId @ 0x14095F430 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbGetNextChild @ 0x140960210 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140960300 (SdbGetFirstChild.c)
 *     SdbpGetTagHeadSize @ 0x1409603A0 (SdbpGetTagHeadSize.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AADE90 (SdbpValidateAndApplyCompatFlags.c)
 * Callees:
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback @ 0x140695730 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledFallback.c)
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
