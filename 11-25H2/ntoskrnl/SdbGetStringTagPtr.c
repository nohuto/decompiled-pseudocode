/*
 * XREFs of SdbGetStringTagPtr @ 0x140825328
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     KsepDbGetSdbString @ 0x140732560 (KsepDbGetSdbString.c)
 *     KsepDbReadKData @ 0x14073293C (KsepDbReadKData.c)
 *     KsepDbReadKFlag @ 0x140732B04 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbpCheckContainment @ 0x1407F2B80 (SdbpCheckContainment.c)
 *     SdbpCheckMatchingDevice @ 0x1407F2C70 (SdbpCheckMatchingDevice.c)
 *     SdbpCheckMatchingDir @ 0x1407F2D40 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x1407F2ED0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1407F3C80 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpCheckSdbCapability @ 0x1407F43C0 (SdbpCheckSdbCapability.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407F4BE4 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1407F4E08 (SdbpGetRegistryMatchingAttributes.c)
 *     SdbpMatchDeviceString @ 0x1407F5854 (SdbpMatchDeviceString.c)
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     SdbpCheckAllAttributes @ 0x1407F77EC (SdbpCheckAllAttributes.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1407F8524 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1408253D8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14082BC3C (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindMatchingName @ 0x14082C2B0 (SdbpFindMatchingName.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 *     SdbpMatchList @ 0x140AA6DC8 (SdbpMatchList.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     SdbpGetMappedStringFromTable @ 0x140824F88 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetMappedTagData @ 0x1408252A4 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140825934 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbpReadStringRef @ 0x140825D14 (SdbpReadStringRef.c)
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
