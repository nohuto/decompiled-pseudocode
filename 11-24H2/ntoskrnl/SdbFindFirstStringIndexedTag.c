/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x140945304
 * Callers:
 *     SdbGetKShimTagRef @ 0x1408029B0 (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatchEx @ 0x140944EEC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A04788 (SdbpSearchDB.c)
 * Callees:
 *     SdbpGetFirstIndexedRecord @ 0x1409451F0 (SdbpGetFirstIndexedRecord.c)
 *     SdbGetIndex @ 0x1409453D4 (SdbGetIndex.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x1409481A4 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbpFindMatchingName @ 0x140A73468 (SdbpFindMatchingName.c)
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
