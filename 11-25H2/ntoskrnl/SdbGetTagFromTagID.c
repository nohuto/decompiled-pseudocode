/*
 * XREFs of SdbGetTagFromTagID @ 0x140825934
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x14068ACD4 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x1407F41D0 (SdbpCheckPackageAttributes.c)
 *     SdbpFindNextNamedTagHelper @ 0x1407F5DF8 (SdbpFindNextNamedTagHelper.c)
 *     SdbGetBinaryTagData @ 0x1407F5F8C (SdbGetBinaryTagData.c)
 *     SdbReadQWORDTag @ 0x1407F606C (SdbReadQWORDTag.c)
 *     SdbpIsEntryIdAvailableInOtherDb @ 0x1407F63D4 (SdbpIsEntryIdAvailableInOtherDb.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1407F8524 (SdbpMergeAreTagValuesEqual.c)
 *     SdbReadDWORDTag @ 0x140824978 (SdbReadDWORDTag.c)
 *     SdbpGetNextTagId @ 0x140824A14 (SdbpGetNextTagId.c)
 *     InitOnceScanIndexes @ 0x140824AF0 (InitOnceScanIndexes.c)
 *     SdbFindNextTag @ 0x140824D70 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140824E14 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140824FF0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x1408257B0 (SdbGetTagDataSize.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140825A94 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140825B84 (SdbGetFirstChild.c)
 *     SdbpReadStringRef @ 0x140825D14 (SdbpReadStringRef.c)
 *     SdbpGetFirstIndexedRecord @ 0x14082B2A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x14082C3B0 (SdbpGetNextIndexedRecord.c)
 *     SdbReadBinaryTag @ 0x140A65D78 (SdbReadBinaryTag.c)
 *     SdbpGetIndex @ 0x140A7B9C8 (SdbpGetIndex.c)
 *     SdbpFindMatcher @ 0x140A94524 (SdbpFindMatcher.c)
 *     SdbpFindFirstNamedTagHelper @ 0x140AB7E84 (SdbpFindFirstNamedTagHelper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
