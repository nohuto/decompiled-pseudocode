/*
 * XREFs of PiDqCompareAddresses @ 0x1409A71A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqCompareAddresses(struct _RTL_AVL_TABLE *Table, _QWORD *FirstStruct, _QWORD *SecondStruct)
{
  if ( *SecondStruct <= *FirstStruct )
    return 2 - (unsigned int)(*SecondStruct < *FirstStruct);
  else
    return 0LL;
}
