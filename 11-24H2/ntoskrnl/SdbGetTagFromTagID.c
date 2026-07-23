/*
 * XREFs of SdbGetTagFromTagID @ 0x140947B70
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1406970F8 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x1408047C0 (SdbpCheckPackageAttributes.c)
 *     SdbpFindNextNamedTagHelper @ 0x1408060A8 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x14080623C (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x14080631C (SdbReadQWORDTag.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140806684 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x140808408 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1408087D4 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetFirstIndexedRecord @ 0x1409451F0 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x140946BB8 (SdbReadDWORDTag.c)
 *     InitOnceScanIndexes @ 0x140946C70 (InitOnceScanIndexes.c)
 *     SdbpGetNextTagId @ 0x140946EF0 (SdbpGetNextTagId.c)
 *     SdbFindNextTag @ 0x140946FA4 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140947048 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140947224 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1409479E0 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140947CD0 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140947DC0 (SdbGetFirstChild.c)
 *     SdbpReadStringRef @ 0x140947F50 (SdbpReadStringRef.c)
 *     SdbReadBinaryTag @ 0x140A60C50 (SdbReadBinaryTag.c)
 *     SdbpGetNextIndexedRecord @ 0x140A73568 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140A75FE8 (SdbpGetIndex.c)
 *     SdbpFindMatcher @ 0x140A95558 (SdbpFindMatcher.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB6FE4 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, unsigned int a2)
{
  if ( a2 >= 0xFFFFFFFE )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      832,
      (unsigned int)"Offset and region size add up to cause an integer overflow or underflow");
  }
  else
  {
    if ( *(_DWORD *)(a1 + 20) >= a2 + 2 )
      return *(unsigned __int16 *)(a2 + *(_QWORD *)(a1 + 8));
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadMappedData",
      837,
      (unsigned int)"Attempt to read past the end of the database offset 0x%lx size 0x%lx (0x%lx)");
  }
  AslLogCallPrintf(1, (unsigned int)"SdbGetTagFromTagID", 2792, (unsigned int)"Error reading data");
  return 0LL;
}
