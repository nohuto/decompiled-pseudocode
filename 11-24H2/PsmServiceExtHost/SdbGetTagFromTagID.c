/*
 * XREFs of SdbGetTagFromTagID @ 0x18009295C
 * Callers:
 *     SdbGetFirstChild @ 0x1800924D0 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009286C (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x180094018 (SdbpGetNextTagId.c)
 *     InitOnceScanIndexes @ 0x180097770 (InitOnceScanIndexes.c)
 *     SdbpGetFirstIndexedRecord @ 0x180097C18 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x180097D90 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180097F60 (SdbFindNextTag.c)
 *     SdbGetBinaryTagData @ 0x180098160 (SdbGetBinaryTagData.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     SdbGetTagDataSize @ 0x180098284 (SdbGetTagDataSize.c)
 *     SdbReadBinaryTag @ 0x1800984CC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x180098624 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x1800986C4 (SdbReadWORDTag.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x180098850 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x180098AA4 (SdbpReadStringRef.c)
 *     SdbpCheckApplicationTypeAttributes @ 0x180099364 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x18009ADE0 (SdbpCheckPackageAttributes.c)
 *     SdbpFindMatcher @ 0x18009B010 (SdbpFindMatcher.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x180094234 (SdbpReadMappedData.c)
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
