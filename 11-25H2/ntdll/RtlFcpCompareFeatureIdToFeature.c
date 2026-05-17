/*
 * XREFs of RtlFcpCompareFeatureIdToFeature @ 0x180173440
 * Callers:
 *     RtlFindLowerBoundInSortedArray @ 0x180173370 (RtlFindLowerBoundInSortedArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFcpCompareFeatureIdToFeature(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 > *a2 )
    return 1LL;
  else
    return (unsigned int)-(*a1 < *a2);
}
