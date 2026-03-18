/*
 * XREFs of SdbpGetMappedTagData @ 0x14095FA14
 * Callers:
 *     KsepDbReadKData @ 0x14073E95C (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1408023EC (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140805AFC (SdbGetBinaryTagData.c)
 *     SdbMergeIsEntryUpdated @ 0x140807CC8 (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140808094 (SdbpMergeAreTagValuesEqual.c)
 *     SdbpGetFirstIndexedRecord @ 0x14095D730 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetMappedStringFromTable @ 0x14095F6FC (SdbpGetMappedStringFromTable.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbpGetNextIndexedRecord @ 0x140A79268 (SdbpGetNextIndexedRecord.c)
 *     SdbpGetIndex @ 0x140A7BCE8 (SdbpGetIndex.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1409603A0 (SdbpGetTagHeadSize.c)
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
