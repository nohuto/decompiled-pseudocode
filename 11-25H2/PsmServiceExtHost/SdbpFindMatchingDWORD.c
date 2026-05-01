/*
 * XREFs of SdbpFindMatchingDWORD @ 0x180097BA4
 * Callers:
 *     SdbFindFirstDWORDIndexedTag @ 0x180097588 (SdbFindFirstDWORDIndexedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpGetNextIndexedRecord @ 0x180097930 (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
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
