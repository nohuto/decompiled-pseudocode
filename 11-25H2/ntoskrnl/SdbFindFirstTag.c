/*
 * XREFs of SdbFindFirstTag @ 0x1408258C0
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14073293C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x140732B04 (KsepDbReadKFlag.c)
 *     SdbGetKShimTagRef @ 0x1407F23C0 (SdbGetKShimTagRef.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x1407F2948 (SdbReadEntryInformation.c)
 *     SdbpCheckContainment @ 0x1407F2B80 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x1407F2C70 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1407F2D40 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1407F2ED0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407F3C80 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1407F43C0 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x1407F46BC (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x1407F4774 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x1407F4830 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x1407F48AC (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x1407F4A5C (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x1407F4AAC (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407F4BE4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407F4E08 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAcpi @ 0x1407F5594 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x1407F5670 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1407F5708 (SdbpMatchCpu.c)
 *     SdbpMatchDeviceString @ 0x1407F5854 (SdbpMatchDeviceString.c)
 *     SdbpMatchOem @ 0x1407F58C4 (SdbpMatchOem.c)
 *     SdbpMatchOne @ 0x1407F5980 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x1407F5D98 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x1407F5F20 (__SdbpFindTagFromAncestors.c)
 *     SdbpCheckAllAttributes @ 0x1407F77EC (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     InitOnceScanIndexes @ 0x140824AF0 (InitOnceScanIndexes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     KsepDbGetDriverShimsInternal @ 0x14082941C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbCacheReadDeviceInternal @ 0x14082AE34 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x14082B870 (SdbGetDatabaseEdition.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14082BC3C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindMatchingName @ 0x14082C2B0 (SdbpFindMatchingName.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 *     SdbpCheckForMatch @ 0x140A0B70C (SdbpCheckForMatch.c)
 *     SdbpMatchOsVersion @ 0x140A0B840 (SdbpMatchOsVersion.c)
 *     SdbGetDatabaseID @ 0x140A65C70 (SdbGetDatabaseID.c)
 *     InitOnceGetStringTableOffset @ 0x140A7D8F0 (InitOnceGetStringTableOffset.c)
 *     SdbpMatchList @ 0x140AA6DC8 (SdbpMatchList.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8ADC (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140825A94 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140825B84 (SdbGetFirstChild.c)
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
