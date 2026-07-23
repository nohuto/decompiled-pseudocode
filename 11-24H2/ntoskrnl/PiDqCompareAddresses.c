/*
 * XREFs of PiDqCompareAddresses @ 0x1409872B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqCompareAddresses(_RTL_AVL_TABLE *a1, _QWORD *a2, _QWORD *a3)
{
  if ( *a3 <= *a2 )
    return 2 - (unsigned int)(*a3 < *a2);
  else
    return 0LL;
}
