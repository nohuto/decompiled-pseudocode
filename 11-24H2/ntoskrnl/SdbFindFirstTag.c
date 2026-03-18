/*
 * XREFs of SdbFindFirstTag @ 0x14096003C
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x14073E5B4 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14073E95C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x14073EB24 (KsepDbReadKFlag.c)
 *     SdbGetKShimTagRef @ 0x140802270 (SdbGetKShimTagRef.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1408027F8 (SdbReadEntryInformation.c)
 *     SdbpCheckContainment @ 0x140802A30 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140802B20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140802BF0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x140802D80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140803B30 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140804270 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140804310 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x1408043C8 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140804484 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140804500 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x1408046B0 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x140804700 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804838 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140804A5C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAcpi @ 0x140805104 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x1408051E0 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x140805278 (SdbpMatchCpu.c)
 *     SdbpMatchDeviceString @ 0x1408053C4 (SdbpMatchDeviceString.c)
 *     SdbpMatchOem @ 0x140805434 (SdbpMatchOem.c)
 *     SdbpMatchOne @ 0x1408054F0 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140805908 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindNextNamedTagHelper @ 0x140805968 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x140805A90 (__SdbpFindTagFromAncestors.c)
 *     SdbpCheckAllAttributes @ 0x14080735C (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140807CC8 (SdbMergeIsEntryUpdated.c)
 *     KsepDbGetDriverShimsInternal @ 0x14095AE14 (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14095B554 (SdbpFindNextIndexedWildCardTag.c)
 *     KsepDbCacheReadDeviceInternal @ 0x14095CE24 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x14095D294 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x14095F1B0 (InitOnceScanIndexes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14095FB48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A08258 (SdbpSearchDB.c)
 *     SdbpCheckForMatch @ 0x140A08780 (SdbpCheckForMatch.c)
 *     SdbpMatchOsVersion @ 0x140A088B4 (SdbpMatchOsVersion.c)
 *     SdbGetDatabaseID @ 0x140A67650 (SdbGetDatabaseID.c)
 *     SdbpFindMatchingName @ 0x140A79168 (SdbpFindMatchingName.c)
 *     InitOnceGetStringTableOffset @ 0x140A80F70 (InitOnceGetStringTableOffset.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AADE90 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140ABBFC4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AE807C (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140960210 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140960300 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstTag(__int64 a1, unsigned int a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int i; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx

  v3 = 0;
  for ( i = SdbGetFirstChild(); ; i = SdbGetNextChild(a1, a2, v10) )
  {
    v10 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i, v8, v9) == a3 )
      return v10;
  }
  return v3;
}
