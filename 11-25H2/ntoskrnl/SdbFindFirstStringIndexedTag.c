/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x14082B0F4
 * Callers:
 *     SdbGetKShimTagRef @ 0x1407F23C0 (SdbGetKShimTagRef.c)
 *     SdbGetDatabaseMatchEx @ 0x14082AEDC (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140825F64 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x14082B1C4 (SdbGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14082B2A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatchingName @ 0x14082C2B0 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(void *a1, __int64 a2, __int16 a3, const WCHAR *a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax

  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4, 0);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
