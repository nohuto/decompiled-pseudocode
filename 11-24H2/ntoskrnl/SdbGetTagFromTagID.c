/*
 * XREFs of SdbGetTagFromTagID @ 0x1409600B0
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x140696028 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x140804080 (SdbpCheckPackageAttributes.c)
 *     SdbpFindNextNamedTagHelper @ 0x140805968 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x140805AFC (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x140805BDC (SdbReadQWORDTag.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x140805F44 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x140807CC8 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140808094 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetFirstIndexedRecord @ 0x14095D730 (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x14095F0F8 (SdbReadDWORDTag.c)
 *     InitOnceScanIndexes @ 0x14095F1B0 (InitOnceScanIndexes.c)
 *     SdbpGetNextTagId @ 0x14095F430 (SdbpGetNextTagId.c)
 *     SdbFindNextTag @ 0x14095F4E4 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14095F588 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14095F764 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x14095FF20 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140960210 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140960300 (SdbGetFirstChild.c)
 *     SdbpReadStringRef @ 0x140960490 (SdbpReadStringRef.c)
 *     SdbReadBinaryTag @ 0x140A67758 (SdbReadBinaryTag.c)
 *     SdbpGetNextIndexedRecord @ 0x140A79268 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140A7BCE8 (SdbpGetIndex.c)
 *     SdbpFindMatcher @ 0x140A99FEC (SdbpFindMatcher.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140ABBFC4 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
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
