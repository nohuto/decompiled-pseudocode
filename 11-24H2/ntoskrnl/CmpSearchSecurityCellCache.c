/*
 * XREFs of CmpSearchSecurityCellCache @ 0x140434630
 * Callers:
 *     RtlFindLowerBoundInSortedArray @ 0x1409B0BD0 (RtlFindLowerBoundInSortedArray.c)
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
