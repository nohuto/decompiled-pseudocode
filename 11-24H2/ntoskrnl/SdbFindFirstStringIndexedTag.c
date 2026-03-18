/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x14095D844
 * Callers:
 *     SdbGetKShimTagRef @ 0x140802270 (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatchEx @ 0x14095D42C (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A08258 (SdbpSearchDB.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x14095D730 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetIndex @ 0x14095D914 (SdbGetIndex.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409606E4 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpFindMatchingName @ 0x140A79168 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(void *a1, __int64 a2, __int16 a3, const WCHAR *a4, unsigned int *a5)
{
  unsigned int Index; // eax
  unsigned __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax

  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbFindFirstStringIndexedTag",
      242,
      (unsigned int)"Index not found 0x%lx Key 0x%lx");
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord((__int64)a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
