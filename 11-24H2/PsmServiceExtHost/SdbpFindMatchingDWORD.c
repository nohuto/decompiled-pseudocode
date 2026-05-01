/*
 * XREFs of SdbpFindMatchingDWORD @ 0x180098004
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x1800979E8 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbpGetNextIndexedRecord @ 0x180097D90 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 */

__int64 __fastcall SdbpFindMatchingDWORD(__int64 a1, unsigned int NextIndexedRecord, unsigned int *a3)
{
  unsigned int FirstTag; // eax
  int DWORDTag; // eax

  while ( NextIndexedRecord )
  {
    FirstTag = SdbFindFirstTag(a1, NextIndexedRecord, *((_WORD *)a3 + 6));
    if ( !FirstTag )
    {
      AslLogCallPrintf(1LL);
      return 0LL;
    }
    DWORDTag = SdbReadDWORDTag(a1, FirstTag, 0xFFFFFFFFLL);
    if ( DWORDTag == -1 )
      return 0LL;
    if ( DWORDTag == a3[8] )
      break;
    NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a3, (__int64)a3);
  }
  return NextIndexedRecord;
}
