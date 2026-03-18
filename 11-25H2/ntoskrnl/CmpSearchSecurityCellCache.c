/*
 * XREFs of CmpSearchSecurityCellCache @ 0x1404383D0
 * Callers:
 *     RtlFindLowerBoundInSortedArray @ 0x1409C2D50 (RtlFindLowerBoundInSortedArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSearchSecurityCellCache(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 > *a2 )
    return 1LL;
  else
    return (unsigned int)-(*a1 < *a2);
}
