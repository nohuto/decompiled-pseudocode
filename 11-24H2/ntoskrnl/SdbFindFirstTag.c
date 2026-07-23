/*
 * XREFs of SdbFindFirstTag @ 0x140947AFC
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     KsepDbReadKData @ 0x14073C88C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x14073CA54 (KsepDbReadKFlag.c)
 *     SdbGetKShimTagRef @ 0x1408029B0 (SdbGetKShimTagRef.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbReadEntryInformation @ 0x140802F38 (SdbReadEntryInformation.c)
 *     SdbpCheckContainment @ 0x140803170 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140803260 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140803330 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1408049B0 (SdbpCheckSdbCapability.c)
 *     SdbpFindFirstTagWithoutIndex @ 0x140804A50 (SdbpFindFirstTagWithoutIndex.c)
 *     SdbpFindFirstWildcardTagWithoutIndex @ 0x140804B08 (SdbpFindFirstWildcardTagWithoutIndex.c)
 *     SdbpFindNextTagWithoutIndex @ 0x140804BC4 (SdbpFindNextTagWithoutIndex.c)
 *     SdbpFindNextWildcardTagWithoutIndex @ 0x140804C40 (SdbpFindNextWildcardTagWithoutIndex.c)
 *     SdbpGetDeviceDWORD @ 0x140804DF0 (SdbpGetDeviceDWORD.c)
 *     SdbpGetExeEntryFlags @ 0x140804E40 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804F78 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14080519C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchAcpi @ 0x140805844 (SdbpMatchAcpi.c)
 *     SdbpMatchBios @ 0x140805920 (SdbpMatchBios.c)
 *     SdbpMatchCpu @ 0x1408059B8 (SdbpMatchCpu.c)
 *     SdbpMatchDeviceString @ 0x140805B04 (SdbpMatchDeviceString.c)
 *     SdbpMatchOem @ 0x140805B74 (SdbpMatchOem.c)
 *     SdbpMatchOne @ 0x140805C30 (SdbpMatchOne.c)
 *     SdbFindParentTagFromAncestors @ 0x140806048 (SdbFindParentTagFromAncestors.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408060A8 (SdbpFindNextNamedTagHelper.c)
 *     __SdbpFindTagFromAncestors @ 0x1408061D0 (__SdbpFindTagFromAncestors.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409428D4 (KsepDbGetDriverShimsInternal.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140943014 (SdbpFindNextIndexedWildCardTag.c)
 *     KsepDbCacheReadDeviceInternal @ 0x1409448E4 (KsepDbCacheReadDeviceInternal.c)
 *     SdbGetDatabaseEdition @ 0x140944D54 (SdbGetDatabaseEdition.c)
 *     InitOnceScanIndexes @ 0x140946C70 (InitOnceScanIndexes.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140947608 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 *     SdbpCheckForMatch @ 0x140A04CB0 (SdbpCheckForMatch.c)
 *     SdbpMatchOsVersion @ 0x140A04DE4 (SdbpMatchOsVersion.c)
 *     SdbGetDatabaseID @ 0x140A60B48 (SdbGetDatabaseID.c)
 *     SdbpFindMatchingName @ 0x140A73468 (SdbpFindMatchingName.c)
 *     InitOnceGetStringTableOffset @ 0x140A7B9D0 (InitOnceGetStringTableOffset.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x140AA8F10 (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140947CD0 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140947DC0 (SdbGetFirstChild.c)
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
