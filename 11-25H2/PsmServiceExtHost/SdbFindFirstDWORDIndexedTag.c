/*
 * XREFs of SdbFindFirstDWORDIndexedTag @ 0x180097588
 * Callers:
 *     SdbpReadApphelpDisplayCustom @ 0x1800957AC (SdbpReadApphelpDisplayCustom.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbGetIndex @ 0x180097638 (SdbGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1800977B8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpFindMatchingDWORD @ 0x180097BA4 (SdbpFindMatchingDWORD.c)
 */

__int64 __fastcall SdbFindFirstDWORDIndexedTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  __int64 v6; // rsi
  unsigned int Index; // eax
  unsigned int *v8; // rbx
  unsigned int FirstIndexedRecord; // eax
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  v6 = a4;
  Index = SdbGetIndex(a1, a2, a3, &v11);
  v8 = a5;
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v8[5] = v11;
  *((_WORD *)v8 + 6) = 16405;
  v8[8] = v6;
  *((_QWORD *)v8 + 3) = v6;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, Index, v6, v8);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingDWORD(a1, FirstIndexedRecord, v8);
}
