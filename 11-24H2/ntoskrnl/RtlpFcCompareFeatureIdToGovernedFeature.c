/*
 * XREFs of RtlpFcCompareFeatureIdToGovernedFeature @ 0x1406F31A0
 * Callers:
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14078D0BC (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpFcCompareFeatureIdToGovernedFeature(_DWORD *a1, _DWORD *a2)
{
  if ( *a1 <= *a2 )
    return (unsigned int)-(*a1 < *a2);
  else
    return 1LL;
}
