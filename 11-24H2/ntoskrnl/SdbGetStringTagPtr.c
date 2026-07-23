/*
 * XREFs of SdbGetStringTagPtr @ 0x140947558
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetSdbString @ 0x14073C4B0 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x14073C88C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x14073CA54 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x140803170 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x140803260 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x140803330 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1408034C0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140804270 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1408049B0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x140804F78 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14080519C (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x140805B04 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408060A8 (SdbpFindNextNamedTagHelper.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1408087D4 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140943014 (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140947608 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 *     SdbpFindMatchingName @ 0x140A73468 (SdbpFindMatchingName.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 * Callees:
 *     SdbpGetMappedStringFromTable @ 0x1409471BC (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x1409474D4 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbpReadStringRef @ 0x140947F50 (SdbpReadStringRef.c)
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
