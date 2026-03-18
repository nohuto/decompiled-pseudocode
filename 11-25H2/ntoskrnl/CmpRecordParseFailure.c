/*
 * XREFs of CmpRecordParseFailure @ 0x140849FA0
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x140848B80 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140871670 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x140876200 (CmpWalkOneLevel.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpCreateKeyBody @ 0x14089EB50 (CmpCreateKeyBody.c)
 *     CmpDoWritethroughReparse @ 0x14098A930 (CmpDoWritethroughReparse.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 426);
    if ( (unsigned __int8)v3 < 4u )
    {
      *(_DWORD *)(a1 + 8 * v3 + 428) = a3;
      *(_DWORD *)(a1 + 8LL * (unsigned __int8)(*(_BYTE *)(a1 + 426))++ + 432) = a2;
    }
  }
}
