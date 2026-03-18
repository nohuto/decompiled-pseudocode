/*
 * XREFs of SdbpGetMappedTagData @ 0x1408252A4
 * Callers:
 *     KsepDbReadKData @ 0x14073293C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x1407F5F8C (SdbGetBinaryTagData.c)
 *     SdbMergeIsEntryUpdated @ 0x1407F8158 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x1407F8524 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetMappedStringFromTable @ 0x140824F88 (SdbpGetMappedStringFromTable.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     SdbpGetFirstIndexedRecord @ 0x14082B2A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x14082C3B0 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140A7B9C8 (SdbpGetIndex.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140825C24 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetMappedData",
      866,
      (unsigned int)"Trying to read mapped data past the end of the database offset 0x%x size 0x%x");
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetMappedTagData", 550, (unsigned int)"Error getting ptr to tag data");
  return v4;
}
