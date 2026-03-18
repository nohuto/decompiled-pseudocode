/*
 * XREFs of SdbGetStringTagPtr @ 0x14095FA98
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetSdbString @ 0x14073E580 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x14073E95C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x14073EB24 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x140802A30 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140802B20 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140802BF0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x140802D80 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140803B30 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x140804270 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804838 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140804A5C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1408053C4 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x140805968 (SdbpFindNextNamedTagHelper.c)
 *     SdbpCheckAllAttributes @ 0x14080735C (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140807CC8 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140808094 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14095B554 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x14095FB48 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A08258 (SdbpSearchDB.c)
 *     SdbpFindMatchingName @ 0x140A79168 (SdbpFindMatchingName.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140ABBFC4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AE807C (SdbpMatchList.c)
 * Callees:
 *     SdbpGetMappedStringFromTable @ 0x14095F6FC (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x14095FA14 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x1409600B0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbpReadStringRef @ 0x140960490 (SdbpReadStringRef.c)
 */

__int64 __fastcall SdbGetStringTagPtr(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int16 v7; // ax
  const char *v10; // r9
  int v11; // r8d

  v4 = 0LL;
  v5 = a2;
  if ( a1 )
  {
    v7 = SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000;
    if ( v7 == (__int16)0x8000 )
      return SdbpGetMappedTagData((__int64)a1, v5);
    if ( v7 != 24576 )
      return v4;
    if ( (unsigned int)SdbpReadStringRef(a1, v5) )
      return SdbpGetMappedStringFromTable(a1);
    v10 = "Error getting StringRef";
    v11 = 742;
  }
  else
  {
    v10 = "Invalid pdb";
    v11 = 722;
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetStringTagPtr", v11, (_DWORD)v10);
  return 0LL;
}
