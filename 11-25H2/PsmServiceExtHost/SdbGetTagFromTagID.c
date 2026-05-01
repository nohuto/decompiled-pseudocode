/*
 * XREFs of SdbGetTagFromTagID @ 0x1800924FC
 * Callers:
 *     SdbGetFirstChild @ 0x180092070 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009240C (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x180093BB8 (SdbpGetNextTagId.c)
 *     InitOnceScanIndexes @ 0x180097310 (InitOnceScanIndexes.c)
 *     SdbpGetFirstIndexedRecord @ 0x1800977B8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180097930 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180097B00 (SdbFindNextTag.c)
 *     SdbGetBinaryTagData @ 0x180097D00 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180097E24 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x18009806C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800981C4 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180098264 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1800983F0 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x180098644 (SdbpReadStringRef.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099014 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x18009AA90 (SdbpCheckPackageAttributes.c)
 *     SdbpFindMatcher @ 0x18009ACC0 (SdbpFindMatcher.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x180093DD4 (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1LL);
  return 0LL;
}
